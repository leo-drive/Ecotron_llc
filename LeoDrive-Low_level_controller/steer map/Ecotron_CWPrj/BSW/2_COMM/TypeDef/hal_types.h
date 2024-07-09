/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		hal_types.h
Author:			
Version:		V1.0.1
Date:			2017-1-11
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef HAL_TYPES_H
#define HAL_TYPES_H


/**************************************************************
Exported Structure Definitions
***************************************************************/

typedef signed char    S08;               /*        -128 .. +127            */
typedef unsigned char  U08;               /*           0 .. 255             */
typedef signed short   S16;               /*      -32768 .. +32767          */
typedef unsigned short U16;               /*           0 .. 65535           */
typedef signed long    S32;               /* -2147483648 .. +2147483647     */
typedef unsigned long  U32;               /*           0 .. 4294967295      */

typedef unsigned char  BOOL;


#define MAX_S08             	(S08)0x7F   /* maximum value of byte */
#define MIN_S08             	(S08)0x80   /* minimum value of byte */
#define MAX_U08             	(U08)0xFF   /* maximum value of byte */
#define MIN_U08             	(U08)0x00   /* minimum value of byte */
#define MAX_S16             	(S16)0x7FFF
#define MIN_S16             	(S16)0x8000
#define MAX_U16             	(U16)0xFFFF
#define MIN_U16             	(U16)0x0000
#define MAX_S32             	(S32)0x7FFFFFFF
#define MIN_S32             	(S32)0x80000000
#define MAX_U32             	(U32)0xFFFFFFFF
#define MIN_U32             	(U32)0x00000000
#define MAX_S64             	(S64)0x7FFFFFFFFFFFFFFF
#define MIN_S64             	(S64)0x8000000000000000
#define MAX_U64             	(U64)0xFFFFFFFFFFFFFFFF
#define MIN_U64             	(U64)0x0000000000000000

#define _INLINE       inline 
//#ifndef NULL
//#define NULL          (U08)0
//#endif

#ifndef BSW_TRUE
    #define BSW_TRUE             (U08)1
#endif

#ifndef BSW_FALSE
    #define BSW_FALSE            (U08)0
#endif



#define HAL_PRODUCT_CP_CHECK



#endif


