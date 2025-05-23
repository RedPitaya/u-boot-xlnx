/* SPDX-License-Identifier: GPL-2.0+ */
#ifndef _UNIPRO_H_
#define _UNIPRO_H_

/*
 * M-TX Configuration Attributes
 */
#define TX_HIBERN8TIME_CAPABILITY		0x000F
#define TX_MODE					0x0021
#define TX_HSRATE_SERIES			0x0022
#define TX_HSGEAR				0x0023
#define TX_PWMGEAR				0x0024
#define TX_AMPLITUDE				0x0025
#define TX_HS_SLEWRATE				0x0026
#define TX_SYNC_SOURCE				0x0027
#define TX_HS_SYNC_LENGTH			0x0028
#define TX_HS_PREPARE_LENGTH			0x0029
#define TX_LS_PREPARE_LENGTH			0x002A
#define TX_HIBERN8_CONTROL			0x002B
#define TX_LCC_ENABLE				0x002C
#define TX_PWM_BURST_CLOSURE_EXTENSION		0x002D
#define TX_BYPASS_8B10B_ENABLE			0x002E
#define TX_DRIVER_POLARITY			0x002F
#define TX_HS_UNTERMINATED_LINE_DRIVE_ENABLE	0x0030
#define TX_LS_TERMINATED_LINE_DRIVE_ENABLE	0x0031
#define TX_LCC_SEQUENCER			0x0032
#define TX_MIN_ACTIVATETIME			0x0033
#define TX_PWM_G6_G7_SYNC_LENGTH		0x0034
#define TX_REFCLKFREQ				0x00EB
#define TX_CFGCLKFREQVAL			0x00EC
#define	CFGEXTRATTR				0x00F0
#define DITHERCTRL2				0x00F1

/*
 * M-RX Configuration Attributes
 */
#define RX_MODE					0x00A1
#define RX_HSRATE_SERIES			0x00A2
#define RX_HSGEAR				0x00A3
#define RX_PWMGEAR				0x00A4
#define RX_LS_TERMINATED_ENABLE			0x00A5
#define RX_HS_UNTERMINATED_ENABLE		0x00A6
#define RX_ENTER_HIBERN8			0x00A7
#define RX_BYPASS_8B10B_ENABLE			0x00A8
#define RX_TERMINATION_FORCE_ENABLE		0x0089
#define RX_MIN_ACTIVATETIME_CAPABILITY		0x008F
#define RX_HIBERN8TIME_CAPABILITY		0x0092
#define RX_REFCLKFREQ				0x00EB
#define	RX_CFGCLKFREQVAL			0x00EC
#define CFGWIDEINLN				0x00F0
#define CFGRXCDR8				0x00BA
#define ENARXDIRECTCFG4				0x00F2
#define CFGRXOVR8				0x00BD
#define RXDIRECTCTRL2				0x00C7
#define ENARXDIRECTCFG3				0x00F3
#define RXCALCTRL				0x00B4
#define ENARXDIRECTCFG2				0x00F4
#define CFGRXOVR4				0x00E9
#define RXSQCTRL				0x00B5
#define CFGRXOVR6				0x00BF

#define is_mphy_tx_attr(attr)			(attr < RX_MODE)
#define RX_MIN_ACTIVATETIME_UNIT_US		100
#define HIBERN8TIME_UNIT_US			100

/*
 * Common Block Attributes
 */
#define TX_GLOBALHIBERNATE			UNIPRO_CB_OFFSET(0x002B)
#define REFCLKMODE				UNIPRO_CB_OFFSET(0x00BF)
#define DIRECTCTRL19				UNIPRO_CB_OFFSET(0x00CD)
#define DIRECTCTRL10				UNIPRO_CB_OFFSET(0x00E6)
#define CDIRECTCTRL6				UNIPRO_CB_OFFSET(0x00EA)
#define RTOBSERVESELECT				UNIPRO_CB_OFFSET(0x00F0)
#define CBDIVFACTOR				UNIPRO_CB_OFFSET(0x00F1)
#define CBDCOCTRL5				UNIPRO_CB_OFFSET(0x00F3)
#define CBPRGPLL2				UNIPRO_CB_OFFSET(0x00F8)
#define CBPRGTUNING				UNIPRO_CB_OFFSET(0x00FB)

#define UNIPRO_CB_OFFSET(x)			(0x8000 | x)

/*
 * PHY Adpater attributes
 */
#define PA_ACTIVETXDATALANES	0x1560
#define PA_ACTIVERXDATALANES	0x1580
#define PA_TXTRAILINGCLOCKS	0x1564
#define PA_PHY_TYPE		0x1500
#define PA_AVAILTXDATALANES	0x1520
#define PA_AVAILRXDATALANES	0x1540
#define PA_MINRXTRAILINGCLOCKS	0x1543
#define PA_TXPWRSTATUS		0x1567
#define PA_RXPWRSTATUS		0x1582
#define PA_TXFORCECLOCK		0x1562
#define PA_TXPWRMODE		0x1563
#define PA_LEGACYDPHYESCDL	0x1570
#define PA_MAXTXSPEEDFAST	0x1521
#define PA_MAXTXSPEEDSLOW	0x1522
#define PA_MAXRXSPEEDFAST	0x1541
#define PA_MAXRXSPEEDSLOW	0x1542
#define PA_TXLINKSTARTUPHS	0x1544
#define PA_LOCAL_TX_LCC_ENABLE	0x155E
#define PA_TXSPEEDFAST		0x1565
#define PA_TXSPEEDSLOW		0x1566
#define PA_REMOTEVERINFO	0x15A0
#define PA_TXGEAR		0x1568
#define PA_TXTERMINATION	0x1569
#define PA_HSSERIES		0x156A
#define PA_PWRMODE		0x1571
#define PA_RXGEAR		0x1583
#define PA_RXTERMINATION	0x1584
#define PA_MAXRXPWMGEAR		0x1586
#define PA_MAXRXHSGEAR		0x1587
#define PA_RXHSUNTERMCAP	0x15A5
#define PA_RXLSTERMCAP		0x15A6
#define PA_GRANULARITY		0x15AA
#define PA_PACPREQTIMEOUT	0x1590
#define PA_PACPREQEOBTIMEOUT	0x1591
#define PA_HIBERN8TIME		0x15A7
#define PA_LOCALVERINFO		0x15A9
#define PA_TACTIVATE		0x15A8
#define PA_PACPFRAMECOUNT	0x15C0
#define PA_PACPERRORCOUNT	0x15C1
#define PA_PHYTESTCONTROL	0x15C2
#define PA_PWRMODEUSERDATA0	0x15B0
#define PA_PWRMODEUSERDATA1	0x15B1
#define PA_PWRMODEUSERDATA2	0x15B2
#define PA_PWRMODEUSERDATA3	0x15B3
#define PA_PWRMODEUSERDATA4	0x15B4
#define PA_PWRMODEUSERDATA5	0x15B5
#define PA_PWRMODEUSERDATA6	0x15B6
#define PA_PWRMODEUSERDATA7	0x15B7
#define PA_PWRMODEUSERDATA8	0x15B8
#define PA_PWRMODEUSERDATA9	0x15B9
#define PA_PWRMODEUSERDATA10	0x15BA
#define PA_PWRMODEUSERDATA11	0x15BB
#define PA_CONNECTEDTXDATALANES	0x1561
#define PA_CONNECTEDRXDATALANES	0x1581
#define PA_LOGICALLANEMAP	0x15A1
#define PA_SLEEPNOCONFIGTIME	0x15A2
#define PA_STALLNOCONFIGTIME	0x15A3
#define PA_SAVECONFIGTIME	0x15A4

#define PA_TACTIVATE_TIME_UNIT_US	10
#define PA_HIBERN8_TIME_UNIT_US		100

/*Other attributes*/
#define VS_MPHYCFGUPDT		0xD085
#define VS_DEBUGOMC		0xD09E
#define VS_POWERSTATE		0xD083
#define VS_MPHYDISABLE		0xD0C1

#define PA_GRANULARITY_MIN_VAL	1
#define PA_GRANULARITY_MAX_VAL	6

/* PHY Adapter Protocol Constants */
#define PA_MAXDATALANES	4

/* PA power modes */
enum {
	FAST_MODE	= 1,
	SLOW_MODE	= 2,
	FASTAUTO_MODE	= 4,
	SLOWAUTO_MODE	= 5,
	UNCHANGED	= 7,
};

/* PA TX/RX Frequency Series */
enum {
	PA_HS_MODE_A	= 1,
	PA_HS_MODE_B	= 2,
};

enum ufs_pwm_gear_tag {
	UFS_PWM_DONT_CHANGE,	/* Don't change Gear */
	UFS_PWM_G1,		/* PWM Gear 1 (default for reset) */
	UFS_PWM_G2,		/* PWM Gear 2 */
	UFS_PWM_G3,		/* PWM Gear 3 */
	UFS_PWM_G4,		/* PWM Gear 4 */
	UFS_PWM_G5,		/* PWM Gear 5 */
	UFS_PWM_G6,		/* PWM Gear 6 */
	UFS_PWM_G7,		/* PWM Gear 7 */
};

enum ufs_hs_gear_tag {
	UFS_HS_DONT_CHANGE,	/* Don't change Gear */
	UFS_HS_G1,		/* HS Gear 1 (default for reset) */
	UFS_HS_G2,		/* HS Gear 2 */
	UFS_HS_G3,		/* HS Gear 3 */
};

enum ufs_unipro_ver {
	UFS_UNIPRO_VER_RESERVED = 0,
	UFS_UNIPRO_VER_1_40 = 1, /* UniPro version 1.40 */
	UFS_UNIPRO_VER_1_41 = 2, /* UniPro version 1.41 */
	UFS_UNIPRO_VER_1_6 = 3,  /* UniPro version 1.6 */
	UFS_UNIPRO_VER_MAX = 4,  /* UniPro unsupported version */
	/* UniPro version field mask in PA_LOCALVERINFO */
	UFS_UNIPRO_VER_MASK = 0xF,
};

/*
 * Data Link Layer Attributes
 */
#define DL_TC0TXFCTHRESHOLD	0x2040
#define DL_FC0PROTTIMEOUTVAL	0x2041
#define DL_TC0REPLAYTIMEOUTVAL	0x2042
#define DL_AFC0REQTIMEOUTVAL	0x2043
#define DL_AFC0CREDITTHRESHOLD	0x2044
#define DL_TC0OUTACKTHRESHOLD	0x2045
#define DL_TC1TXFCTHRESHOLD	0x2060
#define DL_FC1PROTTIMEOUTVAL	0x2061
#define DL_TC1REPLAYTIMEOUTVAL	0x2062
#define DL_AFC1REQTIMEOUTVAL	0x2063
#define DL_AFC1CREDITTHRESHOLD	0x2064
#define DL_TC1OUTACKTHRESHOLD	0x2065
#define DL_TXPREEMPTIONCAP	0x2000
#define DL_TC0TXMAXSDUSIZE	0x2001
#define DL_TC0RXINITCREDITVAL	0x2002
#define DL_TC0TXBUFFERSIZE	0x2005
#define DL_PEERTC0PRESENT	0x2046
#define DL_PEERTC0RXINITCREVAL	0x2047
#define DL_TC1TXMAXSDUSIZE	0x2003
#define DL_TC1RXINITCREDITVAL	0x2004
#define DL_TC1TXBUFFERSIZE	0x2006
#define DL_PEERTC1PRESENT	0x2066
#define DL_PEERTC1RXINITCREVAL	0x2067

/*
 * Network Layer Attributes
 */
#define N_DEVICEID		0x3000
#define N_DEVICEID_VALID	0x3001
#define N_TC0TXMAXSDUSIZE	0x3020
#define N_TC1TXMAXSDUSIZE	0x3021

/*
 * Transport Layer Attributes
 */
#define T_NUMCPORTS		0x4000
#define T_NUMTESTFEATURES	0x4001
#define T_CONNECTIONSTATE	0x4020
#define T_PEERDEVICEID		0x4021
#define T_PEERCPORTID		0x4022
#define T_TRAFFICCLASS		0x4023
#define T_PROTOCOLID		0x4024
#define T_CPORTFLAGS		0x4025
#define T_TXTOKENVALUE		0x4026
#define T_RXTOKENVALUE		0x4027
#define T_LOCALBUFFERSPACE	0x4028
#define T_PEERBUFFERSPACE	0x4029
#define T_CREDITSTOSEND		0x402A
#define T_CPORTMODE		0x402B
#define T_TC0TXMAXSDUSIZE	0x4060
#define T_TC1TXMAXSDUSIZE	0x4061

#ifdef FALSE
#undef FALSE
#endif

#ifdef TRUE
#undef TRUE
#endif

/* Boolean attribute values */
enum {
	FALSE = 0,
	TRUE,
};

#endif /* _UNIPRO_H_ */
