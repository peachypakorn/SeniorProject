////******************************************************************************
////*
////* (c) Copyright 2010-2013 Xilinx, Inc. All rights reserved.
////*
////* This file contains confidential and proprietary information of Xilinx, Inc.
////* and is protected under U.S. and international copyright and other
////* intellectual property laws.
////*
////* DISCLAIMER
////* This disclaimer is not a license and does not grant any rights to the
////* materials distributed herewith. Except as otherwise provided in a valid
////* license issued to you by Xilinx, and to the maximum extent permitted by
////* applicable law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND WITH ALL
////* FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES AND CONDITIONS, EXPRESS,
////* IMPLIED, OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF
////* MERCHANTABILITY, NON-INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE;
////* and (2) Xilinx shall not be liable (whether in contract or tort, including
////* negligence, or under any other theory of liability) for any loss or damage
////* of any kind or nature related to, arising under or in connection with these
////* materials, including for any direct, or any indirect, special, incidental,
////* or consequential loss or damage (including loss of data, profits, goodwill,
////* or any type of loss or damage suffered as a result of any action brought by
////* a third party) even if such damage or loss was reasonably foreseeable or
////* Xilinx had been advised of the possibility of the same.
////*
////* CRITICAL APPLICATIONS
////* Xilinx products are not designed or intended to be fail-safe, or for use in
////* any application requiring fail-safe performance, such as life-support or
////* safety devices or systems, Class III medical devices, nuclear facilities,
////* applications related to the deployment of airbags, or any other applications
////* that could lead to death, personal injury, or severe property or
////* environmental damage (individually and collectively, "Critical
////* Applications"). Customer assumes the sole risk and liability of any use of
////* Xilinx products in Critical Applications, subject only to applicable laws
////* and regulations governing limitations on product liability.
////*
////* THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE
////* AT ALL TIMES.
////*
////******************************************************************************/
/////*****************************************************************************/
/////**
//// *
//// * @file xaxidma_example_sg_poll.c
//// *
//// * This file demonstrates how to use the xaxidma driver on the Xilinx AXI
//// * DMA core (AXIDMA) to transfer packets in polling mode when the AXIDMA
//// * core is configured in Scatter Gather Mode.
//// *
//// * This code assumes a loopback hardware widget is connected to the AXI DMA
//// * core for data packet loopback.
//// *
//// * To see the debug print, you need a Uart16550 or uartlite in your system,
//// * and please set "-DDEBUG" in your compiler options. You need to rebuild your
//// * software executable.
//// *
//// * Make sure that MEMORY_BASE is defined properly as per the HW system. The
//// * h/w system built in Area mode has a maximum DDR memory limit of 64MB. In
//// * throughput mode, it is 512MB.  These limits are need to ensured for
//// * proper operation of this code.
//// *
//// *
//// * <pre>
//// * MODIFICATION HISTORY:
//// *
//// * Ver   Who  Date     Changes
//// * ----- ---- -------- -------------------------------------------------------
//// * 1.00a jz   05/17/10 First release
//// * 2.00a jz   08/10/10 Second release, added in xaxidma_g.c, xaxidma_sinit.c,
//// *                     updated tcl file, added xaxidma_porting_guide.h, removed
//// *                     workaround for endianness
//// * 4.00a rkv  02/22/11 Name of the file has been changed for naming consistency
//// *       	       	   Added interrupt support for ARM.
//// * 5.00a srt  03/05/12 Added Flushing and Invalidation of Caches to fix CRs
//// *		       		   648103, 648701.
//// *		       		   Added V7 DDR Base Address to fix CR 649405.
//// * 6.00a srt  03/27/12 Changed API calls to support MCDMA driver.
//// * 7.00a srt  06/18/12 API calls are reverted back for backward compatibility.
//// * 7.01a srt  11/02/12 Buffer sizes (Tx and Rx) are modified to meet maximum
//// *		       DDR memory limit of the h/w system built with Area mode
//// * 7.02a srt  03/01/13 Updated DDR base address for IPI designs (CR 703656).
//// *
//// * </pre>
//// *
//// * ***************************************************************************
//// */
/////***************************** Include Files *********************************/
////#include "xaxidma.h"
////#include "xparameters.h"
////#include "xdebug.h"
////#include "platform.h"
////
////#if (!defined(DEBUG))
////extern void xil_printf(const char *format, ...);
////#endif
////
/////******************** Constant Definitions **********************************/
////
/////*
//// * Device hardware build related constants.
//// */
////
////#define DMA_DEV_ID		XPAR_AXIDMA_0_DEVICE_ID
////
////#define MEM_BASE_ADDR		0x10000000
////
////#define TX_BD_SPACE_BASE	(MEM_BASE_ADDR)
////#define TX_BD_SPACE_HIGH	(MEM_BASE_ADDR + 0x00000FFF)
////#define RX_BD_SPACE_BASE	(MEM_BASE_ADDR + 0x00001000)
////#define RX_BD_SPACE_HIGH	(MEM_BASE_ADDR + 0x00001FFF)
////#define TX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00100000)
////#define RX_BUFFER_BASE		(MEM_BASE_ADDR + 0x00300000)
////#define RX_BUFFER_HIGH		(MEM_BASE_ADDR + 0x004FFFFF)
////
////
////#define MAX_PKT_LEN		0x20
////
////#define TEST_START_VALUE	0xC
////
/////**************************** Type Definitions *******************************/
////
////
/////***************** Macros (Inline Functions) Definitions *********************/
////
////
/////************************** Function Prototypes ******************************/
////static int RxSetup(XAxiDma * AxiDmaInstPtr);
////static int TxSetup(XAxiDma * AxiDmaInstPtr);
////static int SendPacket(XAxiDma * AxiDmaInstPtr);
////static int CheckData(void);
////static int CheckDmaResult(XAxiDma * AxiDmaInstPtr);
////
/////************************** Variable Definitions *****************************/
/////*
//// * Device instance definitions
//// */
////XAxiDma AxiDma;
////
/////*
//// * Buffer for transmit packet. Must be 32-bit aligned to be used by DMA.
//// */
////u32 *Packet = (u32 *) TX_BUFFER_BASE;
////
/////*****************************************************************************/
/////**
////*
////* Main function
////*
////* This function is the main entry of the tests on DMA core. It sets up
////* DMA engine to be ready to receive and send packets, then a packet is
////* transmitted and will be verified after it is received via the DMA loopback
////* widget.
////*
////* @param	None
////*
////* @return
////*		- XST_SUCCESS if test passes
////*		- XST_FAILURE if test fails.
////*
////* @note		None.
////*
////******************************************************************************/
////int main(void)
////{
////	int Status;
////	XAxiDma_Config *Config;
////
////	init_platform();
////
////	xil_printf("\r\n--- Entering main() --- \r\n");
////
////	Config = XAxiDma_LookupConfig(DMA_DEV_ID);
////	if (!Config) {
////		xil_printf("No config found for %d\r\n", DMA_DEV_ID);
////
////		return XST_FAILURE;
////	}
////
////	/* Initialize DMA engine */
////	Status = XAxiDma_CfgInitialize(&AxiDma, Config);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Initialization failed %d\r\n", Status);
////		return XST_FAILURE;
////	}
////
////	if(!XAxiDma_HasSg(&AxiDma)) {
////		xil_printf("Device configured as Simple mode \r\n");
////
////		return XST_FAILURE;
////	}
////
////	Status = TxSetup(&AxiDma);
////	if (Status != XST_SUCCESS) {
////		return XST_FAILURE;
////	}
////
////	Status = RxSetup(&AxiDma);
////	if (Status != XST_SUCCESS) {
////		return XST_FAILURE;
////	}
////
////	/* Send a packet */
////	Status = SendPacket(&AxiDma);
////	if (Status != XST_SUCCESS) {
////		return XST_FAILURE;
////	}
////
////	/* Check DMA transfer result */
////	Status = CheckDmaResult(&AxiDma);
////
////	xil_printf("AXI DMA SG Polling Test %s\r\n",
////		(Status == XST_SUCCESS)? "passed":"failed");
////
////	xil_printf("--- Exiting main() --- \r\n");
////
////	if (Status != XST_SUCCESS) {
////		return XST_FAILURE;
////	}
////
////	return XST_SUCCESS;
////}
////
/////*****************************************************************************/
/////**
////*
////* This function sets up RX channel of the DMA engine to be ready for packet
////* reception
////*
////* @param	AxiDmaInstPtr is the pointer to the instance of the DMA engine.
////*
////* @return	XST_SUCCESS if the setup is successful, XST_FAILURE otherwise.
////*
////* @note		None.
////*
////******************************************************************************/
////static int RxSetup(XAxiDma * AxiDmaInstPtr)
////{
////	XAxiDma_BdRing *RxRingPtr;
////	int Delay = 0;
////	int Coalesce = 1;
////	int Status;
////	XAxiDma_Bd BdTemplate;
////	XAxiDma_Bd *BdPtr;
////	XAxiDma_Bd *BdCurPtr;
////	u32 BdCount;
////	u32 FreeBdCount;
////	u32 RxBufferPtr;
////	int Index;
////
////	RxRingPtr = XAxiDma_GetRxRing(&AxiDma);
////
////	/* Disable all RX interrupts before RxBD space setup */
////
////	XAxiDma_BdRingIntDisable(RxRingPtr, XAXIDMA_IRQ_ALL_MASK);
////
////	/* Set delay and coalescing */
////	XAxiDma_BdRingSetCoalesce(RxRingPtr, Coalesce, Delay);
////
////	/* Setup Rx BD space */
////	BdCount = XAxiDma_BdRingCntCalc(XAXIDMA_BD_MINIMUM_ALIGNMENT,
////				RX_BD_SPACE_HIGH - RX_BD_SPACE_BASE + 1);
////
////	Status = XAxiDma_BdRingCreate(RxRingPtr, RX_BD_SPACE_BASE,
////				RX_BD_SPACE_BASE,
////				XAXIDMA_BD_MINIMUM_ALIGNMENT, BdCount);
////
////	if (Status != XST_SUCCESS) {
////		xil_printf("RX create BD ring failed %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	/*
////	 * Setup an all-zero BD as the template for the Rx channel.
////	 */
////	XAxiDma_BdClear(&BdTemplate);
////
////	Status = XAxiDma_BdRingClone(RxRingPtr, &BdTemplate);
////	if (Status != XST_SUCCESS) {
////		xil_printf("RX clone BD failed %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	/* Attach buffers to RxBD ring so we are ready to receive packets */
////
////	FreeBdCount = XAxiDma_BdRingGetFreeCnt(RxRingPtr);
////
////	Status = XAxiDma_BdRingAlloc(RxRingPtr, FreeBdCount, &BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("RX alloc BD failed %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	BdCurPtr = BdPtr;
////	RxBufferPtr = RX_BUFFER_BASE;
////	for (Index = 0; Index < FreeBdCount; Index++) {
////		Status = XAxiDma_BdSetBufAddr(BdCurPtr, RxBufferPtr);
////
////		if (Status != XST_SUCCESS) {
////			xil_printf("Set buffer addr %x on BD %x failed %d\r\n",
////			    (unsigned int)RxBufferPtr,
////			    (unsigned int)BdCurPtr, Status);
////
////			return XST_FAILURE;
////		}
////
////		Status = XAxiDma_BdSetLength(BdCurPtr, MAX_PKT_LEN,
////				RxRingPtr->MaxTransferLen);
////		if (Status != XST_SUCCESS) {
////			xil_printf("Rx set length %d on BD %x failed %d\r\n",
////			    MAX_PKT_LEN, (unsigned int)BdCurPtr, Status);
////
////			return XST_FAILURE;
////		}
////
////		/* Receive BDs do not need to set anything for the control
////		 * The hardware will set the SOF/EOF bits per stream status
////		 */
////		XAxiDma_BdSetCtrl(BdCurPtr, 0);
////		XAxiDma_BdSetId(BdCurPtr, RxBufferPtr);
////
////		RxBufferPtr += MAX_PKT_LEN;
////		BdCurPtr = XAxiDma_BdRingNext(RxRingPtr, BdCurPtr);
////	}
////
////	/* Clear the receive buffer, so we can verify data
////	 */
////	memset((void *)RX_BUFFER_BASE, 0, MAX_PKT_LEN);
////
////	Status = XAxiDma_BdRingToHw(RxRingPtr, FreeBdCount,
////						BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("RX submit hw failed %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	/* Start RX DMA channel */
////	Status = XAxiDma_BdRingStart(RxRingPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("RX start hw failed %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	return XST_SUCCESS;
////}
////
/////*****************************************************************************/
/////**
////*
////* This function sets up the TX channel of a DMA engine to be ready for packet
////* transmission
////*
////* @param	AxiDmaInstPtr is the instance pointer to the DMA engine.
////*
////* @return	XST_SUCCESS if the setup is successful, XST_FAILURE otherwise.
////*
////* @note		None.
////*
////******************************************************************************/
////static int TxSetup(XAxiDma * AxiDmaInstPtr)
////{
////	XAxiDma_BdRing *TxRingPtr;
////	XAxiDma_Bd BdTemplate;
////	int Delay = 0;
////	int Coalesce = 1;
////	int Status;
////	u32 BdCount;
////
////	TxRingPtr = XAxiDma_GetTxRing(&AxiDma);
////
////	/* Disable all TX interrupts before TxBD space setup */
////
////	XAxiDma_BdRingIntDisable(TxRingPtr, XAXIDMA_IRQ_ALL_MASK);
////
////	/* Set TX delay and coalesce */
////	XAxiDma_BdRingSetCoalesce(TxRingPtr, Coalesce, Delay);
////
////	/* Setup TxBD space  */
////	BdCount = XAxiDma_BdRingCntCalc(XAXIDMA_BD_MINIMUM_ALIGNMENT,
////				TX_BD_SPACE_HIGH - TX_BD_SPACE_BASE + 1);
////
////	Status = XAxiDma_BdRingCreate(TxRingPtr, TX_BD_SPACE_BASE,
////				TX_BD_SPACE_BASE,
////				XAXIDMA_BD_MINIMUM_ALIGNMENT, BdCount);
////	if (Status != XST_SUCCESS) {
////		xil_printf("failed create BD ring in txsetup\r\n");
////
////		return XST_FAILURE;
////	}
////
////	/*
////	 * We create an all-zero BD as the template.
////	 */
////	XAxiDma_BdClear(&BdTemplate);
////
////	Status = XAxiDma_BdRingClone(TxRingPtr, &BdTemplate);
////	if (Status != XST_SUCCESS) {
////		xil_printf("failed bdring clone in txsetup %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	/* Start the TX channel */
////	Status = XAxiDma_BdRingStart(TxRingPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("failed start bdring txsetup %d\r\n", Status);
////
////		return XST_FAILURE;
////	}
////
////	return XST_SUCCESS;
////}
////
/////*****************************************************************************/
/////**
////*
////* This function transmits one packet non-blockingly through the DMA engine.
////*
////* @param	AxiDmaInstPtr points to the DMA engine instance
////*
////* @return	- XST_SUCCESS if the DMA accepts the packet successfully,
////*		- XST_FAILURE otherwise.
////*
////* @note     None.
////*
////******************************************************************************/
////static int SendPacket(XAxiDma * AxiDmaInstPtr)
////{
////	XAxiDma_BdRing *TxRingPtr;
////	u8 *TxPacket;
////	u8 Value;
////	XAxiDma_Bd *BdPtr;
////	int Status;
////	int Index;
////
////	TxRingPtr = XAxiDma_GetTxRing(AxiDmaInstPtr);
////
////	/* Create pattern in the packet to transmit */
////	TxPacket = (u8 *) Packet;
////
////	Value = TEST_START_VALUE;
////
////	for(Index = 0; Index < MAX_PKT_LEN; Index ++) {
////		TxPacket[Index] = Value;
////
////		Value = (Value + 1) & 0xFF;
////	}
////
////	/* Flush the SrcBuffer before the DMA transfer, in case the Data Cache
////	 * is enabled
////	 */
////	Xil_DCacheFlushRange((u32)TxPacket, MAX_PKT_LEN);
////
////
////	/* Allocate a BD */
////	Status = XAxiDma_BdRingAlloc(TxRingPtr, 1, &BdPtr);
////	if (Status != XST_SUCCESS) {
////		return XST_FAILURE;
////	}
////
////	/* Set up the BD using the information of the packet to transmit */
////	Status = XAxiDma_BdSetBufAddr(BdPtr, (u32) Packet);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Tx set buffer addr %x on BD %x failed %d\r\n",
////		    (unsigned int)Packet, (unsigned int)BdPtr, Status);
////
////		return XST_FAILURE;
////	}
////
////	Status = XAxiDma_BdSetLength(BdPtr, MAX_PKT_LEN,
////				TxRingPtr->MaxTransferLen);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Tx set length %d on BD %x failed %d\r\n",
////		    MAX_PKT_LEN, (unsigned int)BdPtr, Status);
////
////		return XST_FAILURE;
////	}
////
////#if (XPAR_AXIDMA_0_SG_INCLUDE_STSCNTRL_STRM == 1)
////	Status = XAxiDma_BdSetAppWord(BdPtr,
////	    XAXIDMA_LAST_APPWORD, MAX_PKT_LEN);
////
////	/* If Set app length failed, it is not fatal
////	 */
////	if (Status != XST_SUCCESS) {
////		xil_printf("Set app word failed with %d\r\n", Status);
////	}
////#endif
////
////	/* For single packet, both SOF and EOF are to be set
////	 */
////	XAxiDma_BdSetCtrl(BdPtr, XAXIDMA_BD_CTRL_TXEOF_MASK |
////						XAXIDMA_BD_CTRL_TXSOF_MASK);
////
////	XAxiDma_BdSetId(BdPtr, (u32) Packet);
////
////	/* Give the BD to DMA to kick off the transmission. */
////	Status = XAxiDma_BdRingToHw(TxRingPtr, 1, BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("to hw failed %d\r\n", Status);
////		return XST_FAILURE;
////	}
////
////
////
////	return XST_SUCCESS;
////}
////
/////*****************************************************************************/
/////*
////*
////* This function checks data buffer after the DMA transfer is finished.
////*
////* @param	None
////*
////* @return	- XST_SUCCESS if validation is successful
////*		- XST_FAILURE if validation is failure.
////*
////* @note		None.
////*
////******************************************************************************/
////static int CheckData(void)
////{
////	u8 *RxPacket;
////	int Index = 0;
////	u8 Value;
////
////
////	RxPacket = (u8 *) RX_BUFFER_BASE;
////	Value = TEST_START_VALUE;
////
////	/* Invalidate the DestBuffer before receiving the data, in case the
////	 * Data Cache is enabled
////	 */
////	Xil_DCacheInvalidateRange((u32)RxPacket, MAX_PKT_LEN);
////
////	for(Index = 0; Index < MAX_PKT_LEN; Index++) {
////		if (RxPacket[Index] != Value) {
////			xil_printf("Data error %d: %x/%x\r\n",
////			    Index, (unsigned int)RxPacket[Index],
////			    (unsigned int)Value);
////
////			return XST_FAILURE;
////		}
////		Value = (Value + 1) & 0xFF;
////	}
////
////	return XST_SUCCESS;
////}
////
/////*****************************************************************************/
/////**
////*
////* This function waits until the DMA transaction is finished, checks data,
////* and cleans up.
////*
////* @param	None
////*
////* @return	- XST_SUCCESS if DMA transfer is successful and data is correct,
////*		- XST_FAILURE if fails.
////*
////* @note		None.
////*
////******************************************************************************/
////static int CheckDmaResult(XAxiDma * AxiDmaInstPtr)
////{
////	XAxiDma_BdRing *TxRingPtr;
////	XAxiDma_BdRing *RxRingPtr;
////	XAxiDma_Bd *BdPtr;
////	int ProcessedBdCount;
////	int FreeBdCount;
////	int Status;
////
////	TxRingPtr = XAxiDma_GetTxRing(AxiDmaInstPtr);
////	RxRingPtr = XAxiDma_GetRxRing(AxiDmaInstPtr);
////
////	/* Wait until the one BD TX transaction is done */
////	while ((ProcessedBdCount = XAxiDma_BdRingFromHw(TxRingPtr,
////						       XAXIDMA_ALL_BDS,
////						       &BdPtr)) == 0) {
////	}
////
////	/* Free all processed TX BDs for future transmission */
////	Status = XAxiDma_BdRingFree(TxRingPtr, ProcessedBdCount, BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Failed to free %d tx BDs %d\r\n",
////		    ProcessedBdCount, Status);
////		return XST_FAILURE;
////	}
////
////	/* Wait until the data has been received by the Rx channel */
////	while ((ProcessedBdCount = XAxiDma_BdRingFromHw(RxRingPtr,
////						       XAXIDMA_ALL_BDS,
////						       &BdPtr)) == 0) {
////	}
////
////	/* Check received data */
////	if (CheckData() != XST_SUCCESS) {
////
////		return XST_FAILURE;
////	}
////
////	/* Free all processed RX BDs for future transmission */
////	Status = XAxiDma_BdRingFree(RxRingPtr, ProcessedBdCount, BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Failed to free %d rx BDs %d\r\n",
////		    ProcessedBdCount, Status);
////		return XST_FAILURE;
////	}
////
////	/* Return processed BDs to RX channel so we are ready to receive new
////	 * packets:
////	 *    - Allocate all free RX BDs
////	 *    - Pass the BDs to RX channel
////	 */
////	FreeBdCount = XAxiDma_BdRingGetFreeCnt(RxRingPtr);
////	Status = XAxiDma_BdRingAlloc(RxRingPtr, FreeBdCount, &BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("bd alloc failed\r\n");
////		return XST_FAILURE;
////	}
////
////	Status = XAxiDma_BdRingToHw(RxRingPtr, FreeBdCount, BdPtr);
////	if (Status != XST_SUCCESS) {
////		xil_printf("Submit %d rx BDs failed %d\r\n", FreeBdCount, Status);
////		return XST_FAILURE;
////	}
////
////	return XST_SUCCESS;
////}
// -53 + j*51
// -24064 + j*-7680
// 4186 + j*2560
// 3204 + j*-31675
// 3332 + j*19217
// 8449 + j*-32766
// 2561 + j*267
// 16675 + j*1217
// -32504 + j*24745
// 1936 + j*23050
//1040 + j*-16256
//16449 + j*23236
//10284 + j*10880
//-29226 + j*8194
//113 + j*-10748
//17540 + j*-23231
//10 + j*-112
//8447 + j*17969
//528 + j*21558
//19737 + j*5732
//521 + j*18440
//-24319 + j*2341
//24892 + j*-2316
//-9792 + j*1281
//18570 + j*-24057
//-23516 + j*3224
//-23279 + j*4680
//1577 + j*25209
//9226 + j*42
//-9438 + j*5632
//-29951 + j*9666
//-32337 + j*249
//27 + j*76
//2816 + j*2730
//17926 + j*16626
//8456 + j*20545
//8832 + j*-24339
//13312 + j*-31477
//4378 + j*2816
//18514 + j*16710
//-24412 + j*8714
//1288 + j*-27644
//22069 + j*16724
//2261 + j*14132
//-19928 + j*1026
//16434 + j*8960
//845 + j*30437
//-9044 + j*25635
//-22 + j*-25
//-7169 + j*-24408
//22867 + j*16453
//642 + j*16728
//-18384 + j*29314
//-30274 + j*13492
//12335 + j*-16379
//1169 + j*1026
//4712 + j*8609
//-6138 + j*10258
//5359 + j*21088
//19776 + j*11524
//8768 + j*14410
//1161 + j*21720
//276 + j*22550
//-31212 + j*20834
//3 + j*48
//25344 + j*98
//29696 + j*16457
//5152 + j*29726
//10400 + j*2442
//10316 + j*298
//6433 + j*16836
//453 + j*5200
//6147 + j*-32250
//9386 + j*-9638
//9297 + j*-32585
//9694 + j*5440
//914 + j*6273
//16644 + j*1472
//20736 + j*1605
//4196 + j*20805
//-16 + j*-109
//14591 + j*-14688
//358 + j*9765
//18518 + j*3100
//-13820 + j*-29692
//4173 + j*-29638
//24017 + j*4668
//1 + j*24785
//-32424 + j*-31144
//-30719 + j*2218
//-25342 + j*11328
//21509 + j*20789
//-19872 + j*11417
//-14968 + j*9520
//-14783 + j*1032
//4484 + j*22682
//61 + j*122
//-22272 + j*2657
//17429 + j*8242
//-32536 + j*-28155
// 5257 + j*16992
// -9554 + j*18076
// 5156 + j*-32651
// -13872 + j*-16125
// -7366 + j*20362
// 130 + j*-3993
// 19221 + j*15520
// -20267 + j*-15352
// -30675 + j*-15868
// 4224 + j*20538
// -16376 + j*20560
// 1216 + j*77
// -97 + j*-59
// 3071 + j*-32768
// 4446 + j*17553
// -24272 + j*13273
// 20992 + j*6488
// -15336 + j*56
// 1477 + j*21013
// 30369 + j*5681
// -19574 + j*0
// 20512 + j*-18377
// 1220 + j*4171
// 18506 + j*-28256
// 2434 + j*-15722
// -32691 + j*19095
// -9984 + j*1497
// 512 + j*4148
// 107 + j*-24
// 11007 + j*-25056
// 1294 + j*26054
// 23924 + j*22820
// 8712 + j*17408
// 2368 + j*-967
// 3537 + j*31
// 4212 + j*-20392
// 17802 + j*3072
// -24442 + j*802
// 18464 + j*211
// 5125 + j*25380
// 27258 + j*24827
// 6669 + j*-32508
// -27628 + j*-7804
// 10455 + j*18436
// -97 + j*107
// 8192 + j*26784
// 1294 + j*21570
// 17041 + j*-25572
// 24596 + j*16906
// 8263 + j*2723
// 28828 + j*1360
// 368 + j*22688
// -30006 + j*10264
// 8320 + j*-28412
// -2504 + j*17225
// 4266 + j*28936
// -31868 + j*13344
// 4520 + j*-13438
// 31761 + j*-21687
// -16299 + j*21861
// 65 + j*-174
// -32001 + j*2
// 18502 + j*22082
// -31653 + j*400
// 3074 + j*-23934
// 1292 + j*1548
// 279 + j*13349
// 29509 + j*280
// 11932 + j*-15968
// 9000 + j*10256
// 17408 + j*880
// 22420 + j*22546
// 10248 + j*-23030
// -7512 + j*-28640
// 4244 + j*23616
// 30020 + j*17988
// -13 + j*189
// 22528 + j*18640
// 17557 + j*29809
// -32180 + j*21508
// 25728 + j*-27993
// 11 + j*-24448
// 25137 + j*23892
// 3148 + j*5256
// 2562 + j*-21344
// -7680 + j*16385
// 16532 + j*20589
// 27260 + j*25871
// -32640 + j*-30070
// -31704 + j*14659
// 20500 + j*1330
// 4517 + j*30983
// -23 + j*-111
// 16895 + j*-29575
// 16401 + j*29824
// 336 + j*9037
// -24541 + j*-31380
// 10252 + j*-30641
// 19536 + j*16641
// 1365 + j*-24060
// 16385 + j*4231
// 2062 + j*10012
// 3104 + j*-26361
// 356 + j*24972
// 16514 + j*-6624
// -31159 + j*8576
// 23120 + j*24976
// 448 + j*4225
// 7 + j*30
// 1024 + j*19228
// 13584 + j*19457
// 21 + j*-8164
// 17986 + j*-23888
// -20424 + j*6167
// -20475 + j*1764
// 27909 + j*-13257
// -29686 + j*8232
// -25743 + j*-21968
// 21505 + j*-20200
// 5211 + j*23232
// 24144 + j*-30208
// 29217 + j*-32639
// 21953 + j*-32748
// 21532 + j*5904
// 29 + j*-54
// 17663 + j*-32630
// 16644 + j*-11868
// 17745 + j*198
// -16250 + j*-5112
// -5120 + j*6216
// 4303 + j*22785
// -31728 + j*18497
// 4456 + j*8960
// -29658 + j*-24190
// 4465 + j*28944
// -12768 + j*2567
// -24000 + j*4616
// 4809 + j*19556
// 30737 + j*-32439
// 22292 + j*4130
// -13 + j*137
// -21504 + j*12746
// 16392 + j*517
// 8754 + j*5459
// -29919 + j*4608
// -19863 + j*1198
// 26884 + j*23684
// 18454 + j*-11951
// 20805 + j*17
// 4778 + j*6711
// 6 + j*-19930
// -4092 + j*3220
// 16449 + j*4369
// 164 + j*-23731
// -23231 + j*10066
// 22670 + j*24649
// -43 + j*-111
// -7425 + j*-19214
// -5588 + j*19012
// 208 + j*1161
// -12204 + j*21578
// -22902 + j*176
// -18432 + j*29072
// -3684 + j*28702
// 1122 + j*20838
// -30192 + j*-15318
// 20800 + j*3120
// 24789 + j*12501
// -32095 + j*18982
// 27169 + j*-4035
// 16644 + j*16900
// 5906 + j*4499
// 45 + j*-28
// 4607 + j*4130
// 17458 + j*28817
// -11187 + j*8517
// -31640 + j*6952
// -8936 + j*-23761
// 23365 + j*-27888
// -23053 + j*1361
// -19434 + j*1161
// 3651 + j*-22747
// 5745 + j*21699
// 14454 + j*16529
// 16928 + j*10760
// -22400 + j*3140
// 434 + j*17218
// 20572 + j*-10100
// 30 + j*70
// -22016 + j*4148
// 2140 + j*4289
// 17568 + j*1454
// 4098 + j*3144
// -31696 + j*2051
// 6165 + j*20976
// 17429 + j*3398
// -30550 + j*224
// -27892 + j*-24568
// 5124 + j*17856
// 28932 + j*2848
// 7270 + j*14368
// -30510 + j*-29202
// -2732 + j*12356
// 12316 + j*594
// -73 + j*81
// 4864 + j*28741
// 5221 + j*-3572
// 20855 + j*17732
// 12050 + j*2727
// 20616 + j*-6834
// 20756 + j*23619
// 608 + j*660
// -6110 + j*-15580
// -31997 + j*-2047
// 28689 + j*18210
// -32643 + j*-32476
// 4227 + j*836
// 15024 + j*-32482
// 13505 + j*28944
// 10064 + j*-10740
// 5 + j*-216
// 25087 + j*3786
// -27296 + j*2088
// 24781 + j*9570
// 17686 + j*10240
// 9739 + j*2373
// 19088 + j*5736
// 22097 + j*8512
// 2076 + j*10512
// -30718 + j*50
// 4103 + j*19776
// 16648 + j*-21999
// 3744 + j*-15695
// 14848 + j*2626
// 18563 + j*5285
// 5172 + j*4206
// 84 + j*120
// 12288 + j*10400
// 23930 + j*-32411
// 339 + j*0
// -31096 + j*11593
// 272 + j*680
// -4028 + j*17
// -4080 + j*5968
// -30624 + j*9862
// -31716 + j*-32224
// 1568 + j*24592
// -10972 + j*1543
// 8704 + j*3488
// 2820 + j*-14832
// -23290 + j*25021
// 20161 + j*8705
// -65 + j*81
// 9216 + j*8208
// -25599 + j*1088
// 4 + j*26385
// 320 + j*-23422
// 705 + j*4104
// 3126 + j*18453
// 14353 + j*16900
// -24431 + j*18307
// 8480 + j*452
// 20640 + j*5132
// 25936 + j*-7615
// 13731 + j*10896
// -16310 + j*26778
// -14251 + j*-18091
// 385 + j*5728
// -33 + j*-95
// -26369 + j*10320
// -16283 + j*-15088
// 13680 + j*14417
// -23968 + j*-28288
// -14156 + j*10280
// 2135 + j*18484
// -27632 + j*21954
// 25379 + j*17074
// 2149 + j*6152
// 1104 + j*16689
// 2854 + j*19728
// -26485 + j*16395
// 24976 + j*642
// 4181 + j*-23039
// 17952 + j*249
// 63 + j*-78
// 30975 + j*-15819
// 14081 + j*-16094
// 8259 + j*16461
// -17055 + j*-31229
// 16904 + j*2730
// 21215 + j*4674
// 1156 + j*22693
// 10896 + j*18816
// 4704 + j*-854
// -11200 + j*4528
// 24602 + j*-16314
// 11240 + j*-32759
// 528 + j*931
// 27664 + j*525
// 5409 + j*8416
// 7 + j*176
// -24320 + j*-21614
// 18435 + j*21504
// 2116 + j*10253
// 8249 + j*2072
// 16530 + j*-20856
// 2583 + j*21666
// -20015 + j*17671
// 2115 + j*-32096
// 8192 + j*11905
// 5205 + j*-12143
// -4093 + j*17760
// -23546 + j*-26936
// 7717 + j*2048
// 7233 + j*-12280
// 20753 + j*4274
// -67 + j*-81
// -17153 + j*26402
// -3900 + j*-26746
// 22788 + j*-3323
// 1584 + j*24753
// 644 + j*-32246
// -2290 + j*7185
// 17761 + j*12556
// 2122 + j*15656
// 25107 + j*-28010
// 64 + j*3072
// 1307 + j*2309
// 2610 + j*11778
// -23711 + j*5137
// -24320 + j*6416
// -20262 + j*514
// 44 + j*-30
// -18177 + j*15137
// 1293 + j*1504
// -24512 + j*22614
// -32640 + j*-32485
// -21488 + j*-30207
// 1024 + j*-32446
// 21602 + j*1857
// 2672 + j*-15816
// 16386 + j*-26542
// 28694 + j*16896
// 4358 + j*297
// 18944 + j*776
// 12288 + j*-15156
// -23475 + j*7171
// 4885 + j*16455
// -2 + j*13
// -27904 + j*10960
// 2050 + j*23865
// 782 + j*1068
// 9646 + j*8772
// 9242 + j*13352
// 5909 + j*4421
// 4124 + j*16896
// -8114 + j*16010
// 2116 + j*-22625
// 4427 + j*-24543
// 21444 + j*5633
// -32747 + j*21176
// 4266 + j*-29880
// 593 + j*7217
// 64 + j*9732
// 10 + j*52
// 3584 + j*56
// 18467 + j*4917
// 20236 + j*-2841
// 562 + j*9764
// -27896 + j*6576
// 1136 + j*16385
// 1412 + j*7076
// 4896 + j*16384
// 9280 + j*29566
// -28400 + j*4108
// -31536 + j*12355
// 2436 + j*-22558
// -19440 + j*4128
// 5 + j*10512
// 2056 + j*8454
// -39 + j*-39
// 6399 + j*2
// 21574 + j*961
// 15489 + j*-15040
// -12082 + j*8744
// 9728 + j*8840
// -8976 + j*4371
// 23589 + j*1923
// 9292 + j*27650
// -1786 + j*-28381
// 16452 + j*4448
// 323 + j*5132
// 28822 + j*-18300
// -27109 + j*4098
// 8464 + j*229
// 8453 + j*28977
// 44 + j*-10
// 10495 + j*16400
// 6180 + j*436
// 16661 + j*19467
// 264 + j*-14318
// -22400 + j*9120
// 6976 + j*-28415
// 17668 + j*23888
// 544 + j*13095
// 18629 + j*4392
// -17856 + j*-5754
// 17153 + j*547
// -18431 + j*24966
// -31773 + j*-24444
// 17672 + j*18028
// 1936 + j*17417