

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __rpc_h_h__
#define __rpc_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [version][uuid] */ 

typedef struct Struct_10_t
    {
    short StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_10_t;

typedef struct Struct_48_t
    {
    long StructMember0;
    } 	Struct_48_t;

typedef struct Struct_64_t
    {
    short StructMember0;
    short StructMember1;
    struct Struct_48_t StructMember2;
    } 	Struct_64_t;

long Proc0_RpcDSSCreateSharedFileToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_64_t *arg_2,
    /* [in] */ short arg_3,
    /* [in] */ short arg_4,
    /* [string][ref][out] */ wchar_t **arg_5);

long Proc1_RpcDSSGetSharedFileName( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc2_RpcDSSGetSharingTokenOwner( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc3_RpcDSSGetSharingTokenInformation( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [string][ref][out] */ wchar_t **arg_3,
    /* [ref][out] */ short *arg_4);

long Proc4_RpcDSSDelegateSharingToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_48_t *arg_2);

long Proc5_RpcDSSRemoveSharingToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1);

long Proc6_RpcDSSOpenSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ hyper *arg_3);

long Proc7_RpcDSSMoveToSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc8_RpcDSSMoveFromSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc9_RpcDSSCopyFromSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc10_RpcDSSRemoveExpiredTokens( 
    /* [in] */ handle_t IDL_handle);



extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


