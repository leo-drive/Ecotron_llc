/*************************************************************
Copyright (c)  2015-2016. All rights reserved.

File name:		DMA.h
Author:			
Version:		V1.0.1
Date:			2017-1-9
Description:
Others:
History:

	1. Date:
	   Author:
	   Modification:
	2. ...
**************************************************************/

#ifndef DMA_H
#define DMA_H



#include "Dma\Dma\IfxDma_Dma.h"


/*typedef enum
{
	IfxDma_Channel0IntPriority = 1,
	IfxDma_Channel1IntPriority = 2,
	IfxDma_Channel2IntPriority = 3,
	IfxDma_Channel3IntPriority = 4,
	IfxDma_Channel4IntPriority = 5,
	IfxDma_Channel5IntPriority = 6,
	IfxDma_Channel6IntPriority = 7,
	IfxDma_Channel7IntPriority = 8
} IfxDma_ChannelIntPrio;*/

typedef struct
{
	IfxDma_Dma_Channel                *DmaChn;                  /** brief Channel handle */
	IfxDma_ChannelId 			      ChnId;		            /** brief DMA channel resources definition */
	Ifx_Priority 					  priority;			        /**< \brief Used in interrupt service priorities */
	uint32 							  SourceAddress;			/**< \brief Source address for the DMA channel */
	IfxDma_ChannelIncrementCircular   SACircularRange;			/**< \brief Determines which part of the source address remains unchanged and therby not updated after each move */
	uint32 							  DestinationAddress;       /**< \brief Destination address for the DMA channel */
	IfxDma_ChannelIncrementCircular   DACircularRange;          /**< \brief Describes the address offset with which the destination address should be modified after each move */
	IfxDma_ChannelMoveSize            MoveSize;                 /**< \brief Read/write data size */
	uint16                            TransferCount;            /**< \brief Number of transfers in a transaction */
} IfxDma_Init_Config;



// DMA channel handle
extern IfxDma_Dma_Channel dmaChn0;
extern IfxDma_Dma_Channel dmaChn1;
extern IfxDma_Dma_Channel dmaChn2;
extern IfxDma_Dma_Channel dmaChn3;
extern IfxDma_Dma_Channel dmaChn4;
extern IfxDma_Dma_Channel dmaChn5;




extern void F_DMA_InitChn(IfxDma_Init_Config Init_Config);




#endif



