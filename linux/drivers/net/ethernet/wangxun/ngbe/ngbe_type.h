/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (c) 2019 - 2022 Beijing WangXun Technology Co., Ltd. */

#ifndef _NGBE_TYPE_H_
#define _NGBE_TYPE_H_

#include <linux/types.h>
#include <linux/netdevice.h>

/************ NGBE_register.h ************/
/* Vendor ID */
#ifndef PCI_VENDOR_ID_WANGXUN
#define PCI_VENDOR_ID_WANGXUN			0x8088
#endif

/* Device IDs */
#define NGBE_DEV_ID_EM_WX1860AL_W		0x0100
#define NGBE_DEV_ID_EM_WX1860A2			0x0101
#define NGBE_DEV_ID_EM_WX1860A2S		0x0102
#define NGBE_DEV_ID_EM_WX1860A4			0x0103
#define NGBE_DEV_ID_EM_WX1860A4S		0x0104
#define NGBE_DEV_ID_EM_WX1860AL2		0x0105
#define NGBE_DEV_ID_EM_WX1860AL2S		0x0106
#define NGBE_DEV_ID_EM_WX1860AL4		0x0107
#define NGBE_DEV_ID_EM_WX1860AL4S		0x0108
#define NGBE_DEV_ID_EM_WX1860LC			0x0109
#define NGBE_DEV_ID_EM_WX1860A1			0x010a
#define NGBE_DEV_ID_EM_WX1860A1L		0x010b

/* Subsystem ID */
#define NGBE_SUBID_M88E1512_SFP			0x0003
#define NGBE_SUBID_OCP_CARD			0x0040
#define NGBE_SUBID_LY_M88E1512_SFP		0x0050
#define NGBE_SUBID_M88E1512_RJ45		0x0051
#define NGBE_SUBID_M88E1512_MIX			0x0052
#define NGBE_SUBID_YT8521S_SFP			0x0060
#define NGBE_SUBID_INTERNAL_YT8521S_SFP		0x0061
#define NGBE_SUBID_YT8521S_SFP_GPIO		0x0062
#define NGBE_SUBID_INTERNAL_YT8521S_SFP_GPIO	0x0064
#define NGBE_SUBID_LY_YT8521S_SFP		0x0070
#define NGBE_SUBID_RGMII_FPGA			0x0080

#define NGBE_OEM_MASK				0x00FF

#define NGBE_NCSI_SUP				0x8000
#define NGBE_NCSI_MASK				0x8000
#define NGBE_WOL_SUP				0x4000
#define NGBE_WOL_MASK				0x4000

#endif /* _NGBE_TYPE_H_ */
