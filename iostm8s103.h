/*	IO DEFINITIONS FOR STM8 S103 covers F and K family
 *	Copyright (c) 2010 by COSMIC Software
 */

/*	PORTS section
 */
/*	Port A
 */
volatile __at(0x5000) unsigned char PA_ODR; /* Data Output Latch reg */
volatile __at(0x5001) unsigned char PA_IDR; /* Input Pin Value reg */
volatile __at(0x5002) unsigned char PA_DDR; /* Data Direction */
volatile __at(0x5003) unsigned char PA_CR1; /* Control register 1 */
volatile __at(0x5004) unsigned char PA_CR2; /* Control register 2 */

/*	Port B
 */
volatile __at(0x5005) unsigned char PB_ODR; /* Data Output Latch reg */
volatile __at(0x5006) unsigned char PB_IDR; /* Input Pin Value reg */
volatile __at(0x5007) unsigned char PB_DDR; /* Data Direction */
volatile __at(0x5008) unsigned char PB_CR1; /* Control register 1 */
volatile __at(0x5009) unsigned char PB_CR2; /* Control register 2 */

/*	Port C
 */
volatile __at(0x500a) unsigned char PC_ODR; /* Data Output Latch reg */
volatile __at(0x500b) unsigned char PC_IDR; /* Input Pin Value reg */
volatile __at(0x500c) unsigned char PC_DDR; /* Data Direction */
volatile __at(0x500d) unsigned char PC_CR1; /* Control register 1 */
volatile __at(0x500e) unsigned char PC_CR2; /* Control register 2 */

/*	Port D
 */
volatile __at(0x500f) unsigned char PD_ODR; /* Data Output Latch reg */
volatile __at(0x5010) unsigned char PD_IDR; /* Input Pin Value reg */
volatile __at(0x5011) unsigned char PD_DDR; /* Data Direction */
volatile __at(0x5012) unsigned char PD_CR1; /* Control register 1 */
volatile __at(0x5013) unsigned char PD_CR2; /* Control register 2 */

/*	Port E
 */
volatile __at(0x5014) unsigned char PE_ODR; /* Data Output Latch reg */
volatile __at(0x5015) unsigned char PE_IDR; /* Input Pin Value reg */
volatile __at(0x5016) unsigned char PE_DDR; /* Data Direction */
volatile __at(0x5017) unsigned char PE_CR1; /* Control register 1 */
volatile __at(0x5018) unsigned char PE_CR2; /* Control register 2 */

/*	Port F
 */
volatile __at(0x5019) unsigned char PF_ODR; /* Data Output Latch reg */
volatile __at(0x501a) unsigned char PF_IDR; /* Input Pin Value reg */
volatile __at(0x501b) unsigned char PF_DDR; /* Data Direction */
volatile __at(0x501c) unsigned char PF_CR1; /* Control register 1 */
volatile __at(0x501d) unsigned char PF_CR2; /* Control register 2 */

/*	FLASH section
 */
volatile __at(0x505a) unsigned char FLASH_CR1;   /* Flash Control Register 1 */
volatile __at(0x505b) unsigned char FLASH_CR2;   /* Flash Control Register 2 */
volatile __at(0x505c) unsigned char FLASH_NCR2;  /* Flash Complementary Control Reg 2 */
volatile __at(0x505d) unsigned char FLASH_FPR;   /* Flash Protection reg */
volatile __at(0x505e) unsigned char FLASH_NFPR;  /* Flash Complementary Protection reg */
volatile __at(0x505f) unsigned char FLASH_IAPSR; /* Flash in-appl Prog. Status reg */
volatile __at(0x5062) unsigned char FLASH_PUKR;  /* Flash Program memory unprotection reg */
volatile __at(0x5064) unsigned char FLASH_DUKR;  /* Data EEPROM unprotection reg */

/*	External Interrupt Controller section
 */
volatile __at(0x50a0) unsigned char EXTI_CR1; /* Ext Int Ctrl reg 1 */
volatile __at(0x50a1) unsigned char EXTI_CR2; /* Ext Int Ctrl reg 2 */

/*	RSTC section
 */
volatile __at(0x50b3) unsigned char RST_SR; /* Reset Status register */

/*	CLOCK section
 */
volatile __at(0x50c0) unsigned char CLK_ICKCR;    /* Internal Clock Control reg */
volatile __at(0x50c1) unsigned char CLK_ECKCR;    /* External Clock Control reg */
volatile __at(0x50c3) unsigned char CLK_CMSR;     /* Master Status reg */
volatile __at(0x50c4) unsigned char CLK_SWR;      /* Master Switch reg */
volatile __at(0x50c5) unsigned char CLK_SWCR;     /* Switch Control reg */
volatile __at(0x50c6) unsigned char CLK_CKDIVR;   /* Divider register */
volatile __at(0x50c7) unsigned char CLK_PCKENR1;  /* Peripheral Clock Gating reg 1 */
volatile __at(0x50c8) unsigned char CLK_CSSR;     /* Security System register */
volatile __at(0x50c9) unsigned char CLK_CCOR;     /* Configurable Clock Ctrl reg */
volatile __at(0x50ca) unsigned char CLK_PCKENR2;  /* Peripheral Clock Gating reg 2 */
volatile __at(0x50cb) unsigned char CLK_CANCCR;   /* Can Clock Control reg */
volatile __at(0x50cc) unsigned char CLK_HSITRIMR; /* HSI Calibration Trimming reg */
volatile __at(0x50cd) unsigned char CLK_SWIMCCR;  /* SWIM Clock Control reg */

/*	WATCHDOG section
 */
volatile __at(0x50d1) unsigned char WWDG_CR;  /* WWDG Control register */
volatile __at(0x50d2) unsigned char WWDG_WR;  /* WWDG Window register */
volatile __at(0x50e0) unsigned char IWDG_KR;  /* IWDG Key register */
volatile __at(0x50e1) unsigned char IWDG_PR;  /* IWDG Prescaler register */
volatile __at(0x50e2) unsigned char IWDG_RLR; /* IWDG Reload register */

/*	AWU section
 */
volatile __at(0x50f0) unsigned char AWU_CSR1; /* AWU Control/Status reg 1 */
volatile __at(0x50f1) unsigned char AWU_APR;  /* AWU Async Prescale Buffer reg */
volatile __at(0x50f2) unsigned char AWU_TBR;  /* AWU Timebase selection reg */
volatile __at(0x50f3) unsigned char BEEP_CSR; /* BEEP control/status reg */

/*	SPI section
 */
volatile __at(0x5200) unsigned char SPI_CR1;    /* SPI Control register 1 */
volatile __at(0x5201) unsigned char SPI_CR2;    /* SPI Control register 2 */
volatile __at(0x5202) unsigned char SPI_ICR;    /* SPI Interrupt/Ctrl reg */
volatile __at(0x5203) unsigned char SPI_SR;     /* SPI Status register */
volatile __at(0x5204) unsigned char SPI_DR;     /* SPI Data I/O reg */
volatile __at(0x5205) unsigned char SPI_CRCPR;  /* SPI CRC Polynomial reg */
volatile __at(0x5206) unsigned char SPI_RXCRCR; /* SPI Rx CRC register */
volatile __at(0x5207) unsigned char SPI_TXCRCR; /* SPI Tx CRC register */

/*	I2C section
 */
volatile __at(0x5210) unsigned char I2C_CR1;    /* Control register 1 */
volatile __at(0x5211) unsigned char I2C_CR2;    /* Control register 2 */
volatile __at(0x5212) unsigned char I2C_FREQR;  /* Frequency register */
volatile __at(0x5213) unsigned char I2C_OARL;   /* Own Address reg low */
volatile __at(0x5214) unsigned char I2C_OARH;   /* Own Address reg high */
volatile __at(0x5216) unsigned char I2C_DR;     /* Data Register */
volatile __at(0x5217) unsigned char I2C_SR1;    /* Status Register 1 */
volatile __at(0x5218) unsigned char I2C_SR2;    /* Status Register 2 */
volatile __at(0x5219) unsigned char I2C_SR3;    /* Status Register 3 */
volatile __at(0x521a) unsigned char I2C_ITR;    /* Interrupt Control reg */
volatile __at(0x521b) unsigned char I2C_CCRL;   /* Clock Control reg low */
volatile __at(0x521c) unsigned char I2C_CCRH;   /* Clock Control reg high */
volatile __at(0x521d) unsigned char I2C_TRISER; /* Trise reg */
volatile __at(0x521e) unsigned char I2C_PECR;   /* Packet Error Checking reg */

/*	UART1 section
 */
volatile __at(0x5230) unsigned char UART1_SR;   /* Status register */
volatile __at(0x5231) unsigned char UART1_DR;   /* Data register */
volatile __at(0x5232) unsigned char UART1_BRR1; /* Baud Rate reg 1 */
volatile __at(0x5233) unsigned char UART1_BRR2; /* Baud Rate reg 2 */
volatile __at(0x5234) unsigned char UART1_CR1;  /* Control register 1 */
volatile __at(0x5235) unsigned char UART1_CR2;  /* Control register 2 */
volatile __at(0x5236) unsigned char UART1_CR3;  /* Control register 3 */
volatile __at(0x5237) unsigned char UART1_CR4;  /* Control register 4 */
volatile __at(0x5238) unsigned char UART1_CR5;  /* Control register 5 */
volatile __at(0x5239) unsigned char UART1_GTR;  /* Guard Time register */
volatile __at(0x523a) unsigned char UART1_PSCR; /* Prescaler register */

/*	TIMER 1 section
 */
volatile __at(0x5250) unsigned char TIM1_CR1;   /* Control register 1 */
volatile __at(0x5251) unsigned char TIM1_CR2;   /* Control register 2 */
volatile __at(0x5252) unsigned char TIM1_SMCR;  /* Slave Mode Control reg */
volatile __at(0x5253) unsigned char TIM1_ETR;   /* External Trigger reg */
volatile __at(0x5254) unsigned char TIM1_IER;   /* Interrupt Enable reg */
volatile __at(0x5255) unsigned char TIM1_SR1;   /* Status register 1 */
volatile __at(0x5256) unsigned char TIM1_SR2;   /* Status register 2 */
volatile __at(0x5257) unsigned char TIM1_EGR;   /* Event Generation reg */
volatile __at(0x5258) unsigned char TIM1_CCMR1; /* Capture/Compare Mode reg 1 */
volatile __at(0x5259) unsigned char TIM1_CCMR2; /* Capture/Compare Mode reg 2 */
volatile __at(0x525a) unsigned char TIM1_CCMR3; /* Capture/Compare Mode reg 3 */
volatile __at(0x525b) unsigned char TIM1_CCMR4; /* Capture/Compare Mode reg 4 */
volatile __at(0x525c) unsigned char TIM1_CCER1; /* Capture/Compare Enable reg 1 */
volatile __at(0x525d) unsigned char TIM1_CCER2; /* Capture/Compare Enable reg 2 */
volatile __at(0x525e) unsigned char TIM1_CNTRH; /* Counter reg High */
volatile __at(0x525f) unsigned char TIM1_CNTRL; /* Counter reg Low */
volatile __at(0x5260) unsigned char TIM1_PSCRH; /* Prescaler reg High */
volatile __at(0x5261) unsigned char TIM1_PSCRL; /* Prescaler reg Low */
volatile __at(0x5262) unsigned char TIM1_ARRH;  /* Auto-reload reg High */
volatile __at(0x5263) unsigned char TIM1_ARRL;  /* Auto-reload reg Low */
volatile __at(0x5264) unsigned char TIM1_RCR;   /* Repetition Counter reg */
volatile __at(0x5265) unsigned char TIM1_CCR1H; /* Capture/Compare reg 1 High */
volatile __at(0x5266) unsigned char TIM1_CCR1L; /* Capture/Compare reg 1 Low */
volatile __at(0x5267) unsigned char TIM1_CCR2H; /* Capture/Compare reg 2 High */
volatile __at(0x5268) unsigned char TIM1_CCR2L; /* Capture/Compare reg 2 Low */
volatile __at(0x5269) unsigned char TIM1_CCR3H; /* Capture/Compare reg 3 High */
volatile __at(0x526a) unsigned char TIM1_CCR3L; /* Capture/Compare reg 3 Low */
volatile __at(0x526b) unsigned char TIM1_CCR4H; /* Capture/Compare reg 4 High */
volatile __at(0x526c) unsigned char TIM1_CCR4L; /* Capture/Compare reg 4 Low */
volatile __at(0x526d) unsigned char TIM1_BKR;   /* Break register */
volatile __at(0x526e) unsigned char TIM1_DTR;   /* Dead Time register */
volatile __at(0x526f) unsigned char TIM1_OISR;  /* Output Idle State reg */

/*	TIMER 2 section
 */
volatile __at(0x5300) unsigned char TIM2_CR1;   /* Control register 1 */
volatile __at(0x5303) unsigned char TIM2_IER;   /* Interrupt Enable reg */
volatile __at(0x5304) unsigned char TIM2_SR1;   /* Status Register 1 */
volatile __at(0x5305) unsigned char TIM2_SR2;   /* Status Register 2 */
volatile __at(0x5306) unsigned char TIM2_EGR;   /* Event Generation reg */
volatile __at(0x5307) unsigned char TIM2_CCMR1; /* Capture/Compare Mode reg 1 */
volatile __at(0x5308) unsigned char TIM2_CCMR2; /* Capture/Compare Mode reg 2 */
volatile __at(0x5309) unsigned char TIM2_CCMR3; /* Capture/Compare Mode reg 3 */
volatile __at(0x530a) unsigned char TIM2_CCER1; /* Capture/Compare Enable reg 1 */
volatile __at(0x530b) unsigned char TIM2_CCER2; /* Capture/Compare Enable reg 2 */
volatile __at(0x530c) unsigned char TIM2_CNTRH; /* Counter reg High */
volatile __at(0x530d) unsigned char TIM2_CNTRL; /* Counter reg Low */
volatile __at(0x530e) unsigned char TIM2_PSCR;  /* Prescaler register */
volatile __at(0x530f) unsigned char TIM2_ARRH;  /* Auto-reload reg High */
volatile __at(0x5310) unsigned char TIM2_ARRL;  /* Auto-reload reg Low */
volatile __at(0x5311) unsigned char TIM2_CCR1H; /* Capture/Compare Reg 1 High */
volatile __at(0x5312) unsigned char TIM2_CCR1L; /* Capture/Compare Reg 1 Low */
volatile __at(0x5313) unsigned char TIM2_CCR2H; /* Capture/Compare Reg 2 High */
volatile __at(0x5314) unsigned char TIM2_CCR2L; /* Capture/Compare Reg 2 Low */
volatile __at(0x5315) unsigned char TIM2_CCR3H; /* Capture/Compare Reg 3 High */
volatile __at(0x5316) unsigned char TIM2_CCR3L; /* Capture/Compare Reg 3 Low */

/*	TIMER 4 section
 */
volatile __at(0x5340) unsigned char TIM4_CR1;  /* Control register 1 */
volatile __at(0x5343) unsigned char TIM4_IER;  /* Interrupt enable reg */
volatile __at(0x5344) unsigned char TIM4_SR;   /* Status register */
volatile __at(0x5345) unsigned char TIM4_EGR;  /* Event Generation reg */
volatile __at(0x5346) unsigned char TIM4_CNTR; /* Counter register */
volatile __at(0x5347) unsigned char TIM4_PSCR; /* Prescaler register */
volatile __at(0x5348) unsigned char TIM4_ARR;  /* Auto-reload register */

/*	ADC section
 */
volatile __at(0x53e0) unsigned char ADC_DBR[19]; /* data buffer registers */
volatile __at(0x5400) unsigned char ADC_CSR;     /* Control/Status reg */
volatile __at(0x5401) unsigned char ADC_CR1;     /* Configuration reg 1 */
volatile __at(0x5402) unsigned char ADC_CR2;     /* Configuration reg 2 */
volatile __at(0x5403) unsigned char ADC_CR3;     /* Configuration reg 3 */
volatile __at(0x5404) unsigned char ADC_DRH;     /* Data reg high */
volatile __at(0x5405) unsigned char ADC_DRL;     /* Data reg low */
volatile __at(0x5406) unsigned char ADC_TDRH;    /* Schmitt Trigger Disable reg high */
volatile __at(0x5407) unsigned char ADC_TDRL;    /* Schmitt Trigger Disable reg low */
volatile __at(0x5408) unsigned char ADC_HTRH;    /* high threshold reg high */
volatile __at(0x5409) unsigned char ADC_HTRL;    /* high threshold reg low */
volatile __at(0x540a) unsigned char ADC_LTRH;    /* low threshold reg high */
volatile __at(0x540b) unsigned char ADC_LTRL;    /* low threshold reg low */
volatile __at(0x540c) unsigned char ADC_AWSRH;   /* analog watchdog status reg high */
volatile __at(0x540d) unsigned char ADC_AWSRL;   /* analog watchdog status reg low */
volatile __at(0x540e) unsigned char ADC_AWCRH;   /* analog watchdog control reg high */
volatile __at(0x540f) unsigned char ADC_AWCRL;   /* analog watchdog control reg low */

/*	CFG section
 */
volatile __at(0x7f60) unsigned char CFG_GCR; /* Global Configuration register */

/*	ITC section
 */
volatile __at(0x7f70) unsigned char ITC_SPR1; /* Interrupt Software Priority Reg 1 */
volatile __at(0x7f71) unsigned char ITC_SPR2; /* Interrupt Software Priority Reg 2 */
volatile __at(0x7f72) unsigned char ITC_SPR3; /* Interrupt Software Priority Reg 3 */
volatile __at(0x7f73) unsigned char ITC_SPR4; /* Interrupt Software Priority Reg 4 */
volatile __at(0x7f74) unsigned char ITC_SPR5; /* Interrupt Software Priority Reg 5 */
volatile __at(0x7f75) unsigned char ITC_SPR6; /* Interrupt Software Priority Reg 6 */
volatile __at(0x7f76) unsigned char ITC_SPR7; /* Interrupt Software Priority Reg 7 */
volatile __at(0x7f77) unsigned char ITC_SPR8; /* Interrupt Software Priority Reg 8 */

/*	SWIM section
 */
volatile __at(0x7f80) unsigned char SWIM_CSR; /* SWIM Control Status Register */

/*	In-Circuit Debugging section 
 */
volatile __at(0x7f90) unsigned char DM_BK1RE;  /* IC Debugging Breakpoint 1 ESB Reg */
volatile __at(0x7f91) unsigned char DM_BK1RH;  /* IC Debugging Breakpoint 1 High */
volatile __at(0x7f92) unsigned char DM_BK1RL;  /* IC Debugging Breakpoint 1 Low */
volatile __at(0x7f93) unsigned char DM_BK2RE;  /* IC Debugging Breakpoint 2 ESB Reg */
volatile __at(0x7f94) unsigned char DM_BK2RH;  /* IC Debugging Breakpoint 2 High */
volatile __at(0x7f95) unsigned char DM_BK2RL;  /* IC Debugging Breakpoint 2 Low */
volatile __at(0x7f96) unsigned char DM_CR1;    /* IC Debugging Control register 1 */
volatile __at(0x7f97) unsigned char DM_CR2;    /* IC Debugging Control register 2 */
volatile __at(0x7f98) unsigned char DM_CSR1;   /* IC Debugging Control/Status reg 1 */
volatile __at(0x7f99) unsigned char DM_CSR2;   /* IC Debugging Control/Status reg 2 */
volatile __at(0x7f9a) unsigned char DM_ENFCTR; /* IC Debugging Function Enable Reg 2 */
