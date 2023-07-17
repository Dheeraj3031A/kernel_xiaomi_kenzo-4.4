/*
 * Copyright (c) 2018, AngeloGioacchino Del Regno <kholk11@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_MSM_GCC_8976_H
#define _DT_BINDINGS_CLK_MSM_GCC_8976_H

/* Hardware clocks */
#define GCC_XO					0
#define GCC_XO_AO				1
#define GCC_CE1_AHB_M_CLK			2
#define GCC_CE1_AXI_M_CLK			3
#define GCC_WCNSS_M_CLK				4

/* Voters */
#define GCC_MDSS_MDP_VOTE_CLK			5
#define GCC_MDSS_MDP_ROTATOR_VOTE_CLK		6


/* RCG, branch, div, vote */
#define GPLL0					8
#define GPLL2					9
#define GPLL3					10
#define GPLL4					11
#define GPLL6					12
#define GPLL0_CLK_SRC				13
#define GPLL0_AO_CLK_SRC			14
#define GPLL2_CLK_SRC				15
#define GPLL3_CLK_SRC				16
#define GPLL4_CLK_SRC				17
#define GPLL6_CLK_SRC				18
#define BIMC_PLL				19
#define BIMC_PLL_VOTE				20
#define PCNOC_BFDCD_CLK_SRC			21
#define SYSTEM_NOC_BFDCD_CLK_SRC		22
#define BIMC_DDR_CLK_SRC			23
//#define _XO_CLK_SRC				16
//#define _XO_A_CLK_SRC				17
//#define _BIMC_CLK				18
//#define _BIMC_A_CLK				19
//#define _IPA_CLK				20
//#define _IPA_A_CLK				21
//#define _PCNOC_CLK				22
//#define _PCNOC_A_CLK				23
#define _QDSS_CLK				24
#define _QDSS_A_CLK				25
#define _SNOC_CLK				26
#define _SNOC_A_CLK				27
#define _SYSMMNOC_CLK				28
#define _SYSMMNOC_A_CLK				29
#define _SYSMMNOC_MSMBUS_CLK			30
#define _SYSMMNOC_MSMBUS_A_CLK			31
#define _BIMC_MSMBUS_CLK			32
#define _BIMC_MSMBUS_A_CLK			33
#define _BIMC_USB_CLK				34
#define _BIMC_USB_A_CLK				35
#define _PCNOC_KEEPALIVE_A_CLK			36
#define _PCNOC_MSMBUS_CLK			37
#define _PCNOC_MSMBUS_A_CLK			38
#define _PCNOC_USB_CLK				39
#define _PCNOC_USB_A_CLK			40
#define _SNOC_MSMBUS_CLK			41
#define _SNOC_MSMBUS_A_CLK			42
#define _SNOC_USB_CLK				43
#define _SNOC_USB_A_CLK				44
#define _XO_LPM_CLK				45
#define _XO_OTG_CLK				46
#define _XO_PIL_LPASS_CLK			47
#define _XO_PIL_MSS_CLK				48
#define _XO_PIL_PRONTO_CLK			49
#define _XO_WLAN_CLK				50

#define _BB_CLK1				51
#define _BB_CLK2				52
#define _RF_CLK2				53
#define _DIV_CLK2				54
#define _BB_CLK1_PIN				55
#define _BB_CLK2_PIN				56

#define GCC_BLSP1_QUP1_SPI_APPS_CLK		57
#define GCC_BLSP1_QUP1_I2C_APPS_CLK		58
#define GCC_BLSP1_QUP2_I2C_APPS_CLK		59
#define GCC_BLSP1_QUP2_SPI_APPS_CLK		60
#define GCC_BLSP1_QUP3_I2C_APPS_CLK		61
#define GCC_BLSP1_QUP3_SPI_APPS_CLK		62
#define GCC_BLSP1_QUP4_I2C_APPS_CLK		63
#define GCC_BLSP1_QUP4_SPI_APPS_CLK		64
#define GCC_BLSP1_UART1_APPS_CLK		65
#define GCC_BLSP1_UART2_APPS_CLK		66
#define GCC_BLSP2_QUP1_I2C_APPS_CLK		67
#define GCC_BLSP2_QUP1_SPI_APPS_CLK		68
#define GCC_BLSP2_QUP2_I2C_APPS_CLK		69
#define GCC_BLSP2_QUP2_SPI_APPS_CLK		70
#define GCC_BLSP2_QUP3_I2C_APPS_CLK		71
#define GCC_BLSP2_QUP3_SPI_APPS_CLK		72
#define GCC_BLSP2_QUP4_I2C_APPS_CLK		73
#define GCC_BLSP2_QUP4_SPI_APPS_CLK		74
#define GCC_BLSP2_UART1_APPS_CLK		75
#define GCC_BLSP2_UART2_APPS_CLK		76
#define GCC_CAMSS_CCI_AHB_CLK			77
#define GCC_CAMSS_CCI_CLK			78
#define GCC_CAMSS_CPP_AHB_CLK			79
#define GCC_CAMSS_CPP_AXI_CLK			80
#define GCC_CAMSS_CPP_CLK			81
#define GCC_CAMSS_CSI0_AHB_CLK			82
#define GCC_CAMSS_CSI0_CLK			83
#define GCC_CAMSS_CSI0PHY_CLK			84
#define GCC_CAMSS_CSI0PIX_CLK			85
#define GCC_CAMSS_CSI0RDI_CLK			86
#define GCC_CAMSS_CSI1_AHB_CLK			87
#define GCC_CAMSS_CSI1_CLK			88
#define GCC_CAMSS_CSI1PHY_CLK			89
#define GCC_CAMSS_CSI1PIX_CLK			90
#define GCC_CAMSS_CSI1RDI_CLK			91
#define GCC_CAMSS_CSI2_AHB_CLK			92
#define GCC_CAMSS_CSI2_CLK			93
#define GCC_CAMSS_CSI2PHY_CLK			94
#define GCC_CAMSS_CSI2PIX_CLK			95
#define GCC_CAMSS_CSI2RDI_CLK			96
#define GCC_CAMSS_CSI_VFE0_CLK			97
#define GCC_CAMSS_CSI_VFE1_CLK			98
#define GCC_CAMSS_GP0_CLK			99
#define GCC_CAMSS_GP1_CLK			100
#define GCC_CAMSS_ISPIF_AHB_CLK			101
#define GCC_CAMSS_JPEG0_CLK			102
#define GCC_CAMSS_JPEG_AHB_CLK			103
#define GCC_CAMSS_JPEG_AXI_CLK			104
#define GCC_CAMSS_MCLK0_CLK			105
#define GCC_CAMSS_MCLK1_CLK			106
#define GCC_CAMSS_MCLK2_CLK			107
#define GCC_CAMSS_MICRO_AHB_CLK			108
#define GCC_CAMSS_CSI0PHYTIMER_CLK		109
#define GCC_CAMSS_CSI1PHYTIMER_CLK		110
#define GCC_CAMSS_AHB_CLK			111
#define GCC_CAMSS_TOP_AHB_CLK			112
#define GCC_CAMSS_VFE0_CLK			113
#define GCC_CAMSS_VFE_AHB_CLK			114
#define GCC_CAMSS_VFE_AXI_CLK			115
#define GCC_CAMSS_VFE1_AHB_CLK			116
#define GCC_CAMSS_VFE1_AXI_CLK			117
#define GCC_CAMSS_VFE1_CLK			118
#define GCC_DCC_CLK				119
#define GCC_GP1_CLK				120
#define GCC_GP2_CLK				121
#define GCC_GP3_CLK				122
#define GCC_MDSS_AHB_CLK			123
#define GCC_MDSS_AXI_CLK			124
#define GCC_MDSS_ESC0_CLK			125
#define GCC_MDSS_ESC1_CLK			126
#define GCC_MDSS_MDP_CLK			127
#define GCC_MDSS_VSYNC_CLK			128
#define GCC_MSS_CFG_AHB_CLK			129
#define GCC_MSS_Q6_BIMC_AXI_CLK			130
#define GCC_PDM2_CLK				131
#define GCC_PRNG_AHB_CLK			132
#define GCC_PDM_AHB_CLK				133
#define GCC_RBCPR_GFX_AHB_CLK			134
#define GCC_RBCPR_GFX_CLK			135
#define GCC_SDCC1_AHB_CLK			136
#define GCC_SDCC1_APPS_CLK			137
#define GCC_SDCC1_ICE_CORE_CLK			138
#define GCC_SDCC2_AHB_CLK			139
#define GCC_SDCC2_APPS_CLK			140
#define GCC_SDCC3_AHB_CLK			141
#define GCC_SDCC3_APPS_CLK			142
#define GCC_USB2A_PHY_SLEEP_CLK			143
#define GCC_USB_HS_PHY_CFG_AHB_CLK		144
#define GCC_USB_FS_AHB_CLK			145
#define GCC_USB_FS_IC_CLK			146
#define GCC_USB_FS_SYSTEM_CLK			147
#define GCC_USB_HS_AHB_CLK			148
#define GCC_USB_HS_SYSTEM_CLK			149
#define GCC_VENUS0_AHB_CLK			150
#define GCC_VENUS0_AXI_CLK			151
#define GCC_VENUS0_CORE0_VCODEC0_CLK		152
#define GCC_VENUS0_CORE1_VCODEC0_CLK		153
#define GCC_VENUS0_VCODEC0_CLK			154
#define GCC_APSS_AHB_CLK			155
#define GCC_APSS_AXI_CLK			156
#define GCC_BLSP1_AHB_CLK			157
#define GCC_BLSP2_AHB_CLK			158
#define GCC_BOOT_ROM_AHB_CLK			159
#define GCC_CRYPTO_AHB_CLK			160
#define GCC_CRYPTO_AXI_CLK			161
#define GCC_CRYPTO_CLK				162
#define GCC_CPP_TBU_CLK				163
#define GCC_APSS_TCU_CLK			164
#define GCC_JPEG_TBU_CLK			165
#define GCC_MDP_RT_TBU_CLK			166
#define GCC_MDP_TBU_CLK				167
#define GCC_SMMU_CFG_CLK			168
#define GCC_VENUS_1_TBU_CLK			169
#define GCC_VENUS_TBU_CLK			170
#define GCC_VFE1_TBU_CLK			171
#define GCC_VFE_TBU_CLK				172
#define GCC_APS_0_CLK				173
#define GCC_APS_1_CLK				174
#define APS_0_CLK_SRC				175
#define APS_1_CLK_SRC				176
#define APSS_AHB_CLK_SRC			177
#define BLSP1_QUP1_I2C_APPS_CLK_SRC		178
#define BLSP1_QUP1_SPI_APPS_CLK_SRC		179
#define BLSP1_QUP2_I2C_APPS_CLK_SRC		180
#define BLSP1_QUP2_SPI_APPS_CLK_SRC		181
#define BLSP1_QUP3_I2C_APPS_CLK_SRC		182
#define BLSP1_QUP3_SPI_APPS_CLK_SRC		183
#define BLSP1_QUP4_I2C_APPS_CLK_SRC		184
#define BLSP1_QUP4_SPI_APPS_CLK_SRC		185
#define BLSP1_UART1_APPS_CLK_SRC		186
#define BLSP1_UART2_APPS_CLK_SRC		187
#define BLSP2_QUP1_I2C_APPS_CLK_SRC		188
#define BLSP2_QUP1_SPI_APPS_CLK_SRC		189
#define BLSP2_QUP2_I2C_APPS_CLK_SRC		190
#define BLSP2_QUP2_SPI_APPS_CLK_SRC		191
#define BLSP2_QUP3_I2C_APPS_CLK_SRC		192
#define BLSP2_QUP3_SPI_APPS_CLK_SRC		193
#define BLSP2_QUP4_I2C_APPS_CLK_SRC		194
#define BLSP2_QUP4_SPI_APPS_CLK_SRC		195
#define BLSP2_UART1_APPS_CLK_SRC		196
#define BLSP2_UART2_APPS_CLK_SRC		197
#define CCI_CLK_SRC				198
#define CPP_CLK_SRC				199
#define CSI0_CLK_SRC				200
#define CSI1_CLK_SRC				201
#define CSI2_CLK_SRC				202
#define CAMSS_GP0_CLK_SRC			203
#define CAMSS_GP1_CLK_SRC			204
#define JPEG0_CLK_SRC				205
#define MCLK0_CLK_SRC				206
#define MCLK1_CLK_SRC				207
#define MCLK2_CLK_SRC				208
#define CSI0PHYTIMER_CLK_SRC			209
#define CSI1PHYTIMER_CLK_SRC			210
#define CAMSS_TOP_AHB_CLK_SRC			211
#define VFE0_CLK_SRC				212
#define VFE1_CLK_SRC				213
#define CRYPTO_CLK_SRC				214
#define GP1_CLK_SRC				215
#define GP2_CLK_SRC				216
#define GP3_CLK_SRC				217
#define ESC0_CLK_SRC				218
#define ESC1_CLK_SRC				219
#define MDP_CLK_SRC				220
#define VSYNC_CLK_SRC				221
#define PDM2_CLK_SRC				222
#define RBCPR_GFX_CLK_SRC			223
#define SDCC1_APPS_CLK_SRC			224
#define SDCC1_ICE_CORE_CLK_SRC			225
#define SDCC2_APPS_CLK_SRC			226
#define SDCC3_APPS_CLK_SRC			227
#define USB_FS_IC_CLK_SRC			228
#define USB_FS_SYSTEM_CLK_SRC			229
#define USB_HS_SYSTEM_CLK_SRC			230
#define VCODEC0_CLK_SRC				231
#define GCC_QUSB2_PHY_CLK			232
#define GCC_USB2_HS_PHY_ONLY_CLK		233
/* New for MDSS clocks */
#define GCC_MDSS_BYTE0_CLK_SRC			234
#define GCC_MDSS_BYTE1_CLK_SRC			235
#define GCC_MDSS_BYTE0_CLK			236
#define GCC_MDSS_BYTE1_CLK			237
#define GCC_MDSS_PCLK0_CLK_SRC			238
#define GCC_MDSS_PCLK1_CLK_SRC			239
#define GCC_MDSS_PCLK0_CLK			240
#define GCC_MDSS_PCLK1_CLK			241
/* New for GFX3D clocks */
#define GCC_GFX3D_CLK_SRC			242
#define GCC_GFX3D_OXILI_CLK			243
#define GCC_GFX3D_BIMC_CLK			244
#define GCC_GFX3D_OXILI_AHB_CLK			245
#define GCC_GFX3D_OXILI_AON_CLK			246
#define GCC_GFX3D_OXILI_GMEM_CLK		247
#define GCC_GFX3D_OXILI_TIMER_CLK		248
#define GCC_GFX3D_TBU0_CLK			249
#define GCC_GFX3D_TBU1_CLK			250
#define GCC_GFX3D_TCU_CLK			251
#define GCC_GFX3D_GTCU_AHB_CLK			252

/* GCC block resets */
#define RST_CAMSS_MICRO_BCR			0
#define RST_USB_HS_BCR				1
#define RST_QUSB2_PHY_BCR			2
#define RST_USB2_HS_PHY_ONLY_BCR		3
#define RST_USB_HS_PHY_CFG_AHB_BCR		4
#define RST_USB_FS_BCR				5
#define RST_CAMSS_CSI1PIX_BCR			6
#define RST_CAMSS_CSI_VFE1_BCR			8
#define RST_CAMSS_VFE1_BCR			9
#define RST_CAMSS_CPP_BCR			10

#endif /* _DT_BINDINGS_CLK_MSM_GCC_8976_H */
