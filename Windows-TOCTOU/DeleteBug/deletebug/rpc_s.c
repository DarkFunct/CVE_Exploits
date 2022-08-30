

/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "rpc_h.h"

#define TYPE_FORMAT_STRING_SIZE   49                                
#define PROC_FORMAT_STRING_SIZE   547                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rpc_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};


extern const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString;
extern const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString;
extern const rpc_MIDL_EXPR_FORMAT_STRING rpc__MIDL_ExprFormatString;

/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0xbf4dc912,0xe52f,0x4904,{0x8e,0xbe,0x93,0x17,0xc1,0xbd,0xd4,0x97}} */


extern const MIDL_SERVER_INFO DefaultIfName_ServerInfo;

extern const RPC_DISPATCH_TABLE DefaultIfName_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE DefaultIfName___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xbf4dc912,0xe52f,0x4904,{0x8e,0xbe,0x93,0x17,0xc1,0xbd,0xd4,0x97}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&DefaultIfName_v1_0_DispatchTable,
    0,
    0,
    0,
    &DefaultIfName_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcServerInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0_RpcDSSCreateSharedFileToken */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x48 ),	/* 72 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 36 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter arg_3 */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 54 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1_RpcDSSGetSharedFileName */

/* 66 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x1 ),	/* 1 */
/* 74 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 76 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 86 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 96 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 98 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 100 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 102 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2_RpcDSSGetSharingTokenOwner */

/* 114 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x2 ),	/* 2 */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 144 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 148 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 150 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 154 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3_RpcDSSGetSharingTokenInformation */

/* 162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x3 ),	/* 3 */
/* 170 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x22 ),	/* 34 */
/* 180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 182 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 196 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 198 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 202 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter arg_3 */

/* 204 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter arg_4 */

/* 210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 214 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4_RpcDSSDelegateSharingToken */

/* 222 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 232 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 236 */	NdrFcShort( 0x28 ),	/* 40 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 258 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5_RpcDSSRemoveSharingToken */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x5 ),	/* 5 */
/* 278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 300 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6_RpcDSSOpenSharedFile */

/* 312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 322 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	NdrFcShort( 0x2c ),	/* 44 */
/* 330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 342 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 358 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7_RpcDSSMoveToSharedFile */

/* 366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x7 ),	/* 7 */
/* 374 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 376 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 386 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 404 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 406 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8_RpcDSSMoveFromSharedFile */

/* 414 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 424 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 450 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 452 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 454 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9_RpcDSSCopyFromSharedFile */

/* 462 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x9 ),	/* 9 */
/* 470 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 472 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 492 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 496 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_RpcDSSRemoveExpiredTokens */

/* 510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0xa ),	/* 10 */
/* 518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 520 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 530 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 542 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x8 ),	/* Offset= 8 (16) */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x4 ),	/* 4 */
/* 14 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 16 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 22 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 24 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (10) */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 34 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 38 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 40 */	
			0x11, 0x0,	/* FC_RP */
/* 42 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (10) */
/* 44 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 46 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    66,
    114,
    162,
    222,
    270,
    312,
    366,
    414,
    462,
    510
    };


static const RPC_DISPATCH_FUNCTION DefaultIfName_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE DefaultIfName_v1_0_DispatchTable = 
    {
    11,
    (RPC_DISPATCH_FUNCTION*)DefaultIfName_table
    };


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag74_t;
extern const __midl_frag74_t __midl_frag74;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
NDR64_FORMAT_CHAR
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
NDR64_FORMAT_CHAR
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag75_t __midl_frag75 =
0x5    /* FC64_INT32 */;

static const __midl_frag74_t __midl_frag74 =
{ 
/* Proc10_RpcDSSRemoveExpiredTokens */
    { 
    /* Proc10_RpcDSSRemoveExpiredTokens */      /* procedure Proc10_RpcDSSRemoveExpiredTokens */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag72
};

static const __midl_frag68_t __midl_frag68 =
{ 
/* Proc9_RpcDSSCopyFromSharedFile */
    { 
    /* Proc9_RpcDSSCopyFromSharedFile */      /* procedure Proc9_RpcDSSCopyFromSharedFile */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag72,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag54_t __midl_frag54 =
0x7    /* FC64_INT64 */;

static const __midl_frag53_t __midl_frag53 =
{ 
/* *hyper */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag54
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* Proc6_RpcDSSOpenSharedFile */
    { 
    /* Proc6_RpcDSSOpenSharedFile */      /* procedure Proc6_RpcDSSOpenSharedFile */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag75,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag54,
        { 
        /* arg_3 */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag45_t __midl_frag45 =
{ 
/* Proc5_RpcDSSRemoveSharingToken */
    { 
    /* Proc5_RpcDSSRemoveSharingToken */      /* procedure Proc5_RpcDSSRemoveSharingToken */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/* Struct_48_t */
    { 
    /* Struct_48_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_48_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* *Struct_48_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag43
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* Proc4_RpcDSSDelegateSharingToken */
    { 
    /* Proc4_RpcDSSDelegateSharingToken */      /* procedure Proc4_RpcDSSDelegateSharingToken */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag43,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag37_t __midl_frag37 =
0x4    /* FC64_INT16 */;

static const __midl_frag36_t __midl_frag36 =
{ 
/* *short */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag37
};

static const __midl_frag34_t __midl_frag34 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag72
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* **wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag34
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* Proc3_RpcDSSGetSharingTokenInformation */
    { 
    /* Proc3_RpcDSSGetSharingTokenInformation */      /* procedure Proc3_RpcDSSGetSharingTokenInformation */
        (NDR64_UINT32) 17694784 /* 0x10e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag33,
        { 
        /* arg_2 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag33,
        { 
        /* arg_3 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag37,
        { 
        /* arg_4 */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* Proc2_RpcDSSGetSharingTokenOwner */
    { 
    /* Proc2_RpcDSSGetSharingTokenOwner */      /* procedure Proc2_RpcDSSGetSharingTokenOwner */
        (NDR64_UINT32) 17694784 /* 0x10e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag33,
        { 
        /* arg_2 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* Struct_64_t */
    { 
    /* Struct_64_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_64_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* *Struct_64_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Proc0_RpcDSSCreateSharedFileToken */
    { 
    /* Proc0_RpcDSSCreateSharedFileToken */      /* procedure Proc0_RpcDSSCreateSharedFileToken */
        (NDR64_UINT32) 17694784 /* 0x10e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag72,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag6,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag37,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag37,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag33,
        { 
        /* arg_5 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag75,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef DefaultIfName_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag20,
    &__midl_frag20,
    &__midl_frag27,
    &__midl_frag39,
    &__midl_frag45,
    &__midl_frag49,
    &__midl_frag68,
    &__midl_frag68,
    &__midl_frag68,
    &__midl_frag74
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    rpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& DefaultIfName_ServerInfo,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION DefaultIfName_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE DefaultIfName_NDR64__v1_0_DispatchTable = 
    {
    11,
    (RPC_DISPATCH_FUNCTION*)DefaultIfName_NDR64__table
    };

static const MIDL_SYNTAX_INFO DefaultIfName_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&DefaultIfName_v1_0_DispatchTable,
    rpc__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    rpc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&DefaultIfName_NDR64__v1_0_DispatchTable,
    0 ,
    (unsigned short *) DefaultIfName_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE DefaultIfName_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)Proc0_RpcDSSCreateSharedFileToken,
    (SERVER_ROUTINE)Proc1_RpcDSSGetSharedFileName,
    (SERVER_ROUTINE)Proc2_RpcDSSGetSharingTokenOwner,
    (SERVER_ROUTINE)Proc3_RpcDSSGetSharingTokenInformation,
    (SERVER_ROUTINE)Proc4_RpcDSSDelegateSharingToken,
    (SERVER_ROUTINE)Proc5_RpcDSSRemoveSharingToken,
    (SERVER_ROUTINE)Proc6_RpcDSSOpenSharedFile,
    (SERVER_ROUTINE)Proc7_RpcDSSMoveToSharedFile,
    (SERVER_ROUTINE)Proc8_RpcDSSMoveFromSharedFile,
    (SERVER_ROUTINE)Proc9_RpcDSSCopyFromSharedFile,
    (SERVER_ROUTINE)Proc10_RpcDSSRemoveExpiredTokens
    };

static const MIDL_SERVER_INFO DefaultIfName_ServerInfo = 
    {
    &DefaultIfName_StubDesc,
    DefaultIfName_ServerRoutineTable,
    rpc__MIDL_ProcFormatString.Format,
    (unsigned short *) DefaultIfName_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)DefaultIfName_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

