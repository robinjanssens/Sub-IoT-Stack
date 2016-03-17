/*
 * si4460_registers.h
 *
 *  Created on: Dec 11, 2015
 *      Author: MaartenWeyn
 */

#ifndef FRAMEWORK_HAL_CHIPS_SI4460_EZRADIODRV_SI4460_REGISTERS_H_
#define FRAMEWORK_HAL_CHIPS_SI4460_EZRADIODRV_SI4460_REGISTERS_H_

// 868 LR Start 1: 863012500 - 2:  869387500
// 868 N/HR Start: 863100000

/*******************************************************************
				FREQUENCY
********************************************************************/

// Group Num_props start_prop props...
#define MODEM_CLKGEN_BAND				0x20,0x01,0x51
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CLKGEN_BAND_433  MODEM_CLKGEN_BAND,0x0A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CLKGEN_BAND_868  MODEM_CLKGEN_BAND,0x08

#define FREQ_CONTROL_CHANNEL_STEP_SIZE 	0x40,0x02,0x04
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_CHANNEL_STEP_SIZE_433  FREQ_CONTROL_CHANNEL_STEP_SIZE,0x4E,0xC5
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_CHANNEL_STEP_SIZE_868  FREQ_CONTROL_CHANNEL_STEP_SIZE,0x27,062

#define FREQ_CONTROL_VCOCNT_RX_ADJ 		0x40,0x01,0x07
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_VCOCNT_RX_ADJ_433 FREQ_CONTROL_VCOCNT_RX_ADJ,0xFE
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_VCOCNT_RX_ADJ_868 FREQ_CONTROL_VCOCNT_RX_ADJ,0xFF

#define MODEM_IF_FREQ					0x20,0x03,0X1B
#define RADIO_CONFIG_SET_PROPERTY_MODEM_IF_FREQ_433 MODEM_IF_FREQ,0x03,0x80,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_IF_FREQ_868 MODEM_IF_FREQ,0x03,0xC0,0x00

/*******************************************************************
					DATA RATE
********************************************************************/

#define SYNTH_PFDCP_CPFF_LR 	0x23,0x01,0x00
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPFF_LR SYNTH_PFDCP_CPFF_LR,0x2C
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPFF_NR SYNTH_PFDCP_CPFF_LR,0x2C
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPFF_HR SYNTH_PFDCP_CPFF_LR,0x39

#define SYNTH_PFDCP_CPINT 		0x23,0x01,0x00
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPINT_LR SYNTH_PFDCP_CPINT,0x0E
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPINT_NR SYNTH_PFDCP_CPINT,0x0E
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_PFDCP_CPINT_HR SYNTH_PFDCP_CPINT,0x04

#define SYNTH_LPFILT3 			0x23,0x01,0x03
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT3_LR SYNTH_LPFILT3,0x04
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT3_NR SYNTH_LPFILT3,0x04
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT3_HR SYNTH_LPFILT3,0x05

#define SYNTH_LPFILT2 			0x23,0x01,0x04
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT2_LR SYNTH_LPFILT2,0x0C
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT2_NR SYNTH_LPFILT2,0x0C
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT2_HR SYNTH_LPFILT2,0x04

#define SYNTH_LPFILT1 			0x23,0x01,0x04
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT1_LR SYNTH_LPFILT1,0x73
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT1_NR SYNTH_LPFILT1,0x73
#define RADIO_CONFIG_SET_PROPERTY_SYNTH_LPFILT1_HR SYNTH_LPFILT1,0x01

#define MODEM_TX_NCO_MODE 		0x20,0x04,0x06
#define RADIO_CONFIG_SET_PROPERTY_MODEM_TX_NCO_MODE_LR MODEM_TX_NCO_MODE,0x05,0x8C,0xBA,0x80
#define RADIO_CONFIG_SET_PROPERTY_MODEM_TX_NCO_MODE_NR MODEM_TX_NCO_MODE,0x09,0x8C,0xBA,0x80
#define RADIO_CONFIG_SET_PROPERTY_MODEM_TX_NCO_MODE_HR RADIO_CONFIG_SET_PROPERTY_MODEM_TX_NCO_MODE_NR

#define PA_TC					0x22,0x01,0x03
#define RADIO_CONFIG_SET_PROPERTY_PA_TC_LR PA_TC,0x1D
#define RADIO_CONFIG_SET_PROPERTY_PA_TC_NR PA_TC,0x1D
#define RADIO_CONFIG_SET_PROPERTY_PA_TC_HR PA_TC,0x3D

#define MODEM_AFC_WAIT			0x20,0x01,0x2D
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_WAIT_LR MODEM_AFC_WAIT,0x12
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_WAIT_NR MODEM_AFC_WAIT,0x12
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_WAIT_HR MODEM_AFC_WAIT,0x23

#define MODEM_SPIKE_DET			0x20,0x01,0x54
#define RADIO_CONFIG_SET_PROPERTY_MODEM_SPIKE_DET_LR MODEM_SPIKE_DET,0x03
#define RADIO_CONFIG_SET_PROPERTY_MODEM_SPIKE_DET_NR MODEM_SPIKE_DET,0x04
#define RADIO_CONFIG_SET_PROPERTY_MODEM_SPIKE_DET_HR MODEM_SPIKE_DET,0x03

/*******************************************************************
  				FREQUENCY and DATA RATE DEPENDENT
********************************************************************/

#define MODEM_DATA_RATE 0x20,0x03,0x03
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DATA_RATE_LR MODEM_DATA_RATE,0x05,0xDC,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DATA_RATE_NR MODEM_DATA_RATE,0x10,0xF4,0x3C
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DATA_RATE_433_HR MODEM_DATA_RATE,0x32,0xDC,0xDC
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DATA_RATE_868_HR MODEM_DATA_RATE,0x32,0xDC,0xC8

#define MODEM_FREQ_DEV 0x20,0x03,0x0A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_433_LR MODEM_FREQ_DEV,0x00,0x01,0x83
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_433_NR MODEM_FREQ_DEV,0x00,0x07,0xC1
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_433_HR MODEM_FREQ_DEV,0x00,0x0D,0x21
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_868_LR MODEM_FREQ_DEV,0x00,0x00,0xC2
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_868_NR MODEM_FREQ_DEV,0x00,0x07,0xE0
#define RADIO_CONFIG_SET_PROPERTY_MODEM_FREQ_DEV_868_HR MODEM_FREQ_DEV,0x00,0x06,0x90

#define FREQ_CONTROL_FRAC 0x40,0x04,0x01
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_433_LR FREQ_CONTROL_FRAC,0x0D,0x03,0x26
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_433_NR FREQ_CONTROL_FRAC,0x0D,0x1E,0xB8
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_433_HR FREQ_CONTROL_FRAC,0x0D,0x1E,0xB8
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_868_LR_01 FREQ_CONTROL_FRAC,0x0B,0x15,0xA9
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_868_LR_02 FREQ_CONTROL_FRAC,0x0F,0x01,0xF8
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_868_NR FREQ_CONTROL_FRAC,0x0B,0x23,0x72
#define RADIO_CONFIG_SET_PROPERTY_FREQ_CONTROL_FRAC_868_HR FREQ_CONTROL_FRAC,0x0B,0x23,0x72

#define MODEM_DECIMATION_CFG1 0x20,0x01,0x1E
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DECIMATION_CFG1_433_LR MODEM_DECIMATION_CFG1,0x20
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DECIMATION_CFG1_868_LR MODEM_DECIMATION_CFG1,0x20
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DECIMATION_CFG1_NR MODEM_DECIMATION_CFG1,0x10
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DECIMATION_CFG1_HR MODEM_DECIMATION_CFG1,0x00

#define MODEM_BCR_OSR 0x20,0x02,0x22
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_OSR_433_LR MODEM_BCR_OSR,0x00,0xA9
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_OSR_868_LR MODEM_BCR_OSR,0x01,0x53
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_OSR_NR MODEM_BCR_OSR,0x00,0x75
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_OSR_HR MODEM_BCR_OSR,0x00,0x4E

#define MODEM_BCR_NCO_OFFSET 0x20,0x03,0x24
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_433_LR MODEM_BCR_NCO_OFFSET,0x03,0x06,0x55
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_868_LR MODEM_BCR_NCO_OFFSET,0x01,0x83,0x2B
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_433_NR MODEM_BCR_NCO_OFFSET,0x04,0x60,0x43
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_868_NR MODEM_BCR_NCO_OFFSET,0x04,0x60,0x43
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_433_HR MODEM_BCR_NCO_OFFSET,0x06,0x90,0x6A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_NCO_OFFSET_868_HR MODEM_BCR_NCO_OFFSET,0x06,0x90,0x67

#define MODEM_BCR_GAIN 0x20,0x02,0x27
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_GAIN_433_LR MODEM_BCR_GAIN,0x03,0x08
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_GAIN_868_LR MODEM_BCR_GAIN,0x01,0x83
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_GAIN_NR MODEM_BCR_GAIN,0x02,0x6E
#define RADIO_CONFIG_SET_PROPERTY_MODEM_BCR_GAIN_HR MODEM_BCR_GAIN,0x07,0xFF

#define MODEM_AFC_GAIN 0x20,0x02,0x2E
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_433_LR MODEM_AFC_GAIN,0x82,0x30
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_433_NR MODEM_AFC_GAIN,0x81,0x18
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_433_HR MODEM_AFC_GAIN,0x86,0x90
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_868_LR MODEM_AFC_GAIN,0x80,0x30
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_868_NR MODEM_AFC_GAIN,0x81,0x18
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_GAIN_868_HR MODEM_AFC_GAIN,0x86,0x90


#define MODEM_AFC_LIMITER 0x20,0x02,0x30
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_LIMITER_433_LR MODEM_AFC_LIMITER,0x04,0x11
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_LIMITER_868_LR MODEM_AFC_LIMITER,0x07,0x5A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_LIMITER_NR MODEM_AFC_LIMITER,0x02,0x80
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AFC_LIMITER_HR MODEM_AFC_LIMITER,0x00,0x9E

#define MODEM_AGC_RFPD_DECAY 0x20,0x01,0x39
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_RFPD_DECAY_433_LR MODEM_AGC_RFPD_DECAY,0x25
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_RFPD_DECAY_868_LR MODEM_AGC_RFPD_DECAY,0x4A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_RFPD_DECAY_NR MODEM_AGC_RFPD_DECAY,0x1A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_RFPD_DECAY_HR MODEM_AGC_RFPD_DECAY,0x11

#define MODEM_AGC_IFPD_DECAY 0x20,0x01,0x3A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_IFPD_DECAY_433_LR  MODEM_AGC_IFPD_DECAY,0x25
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_IFPD_DECAY_868_LR  MODEM_AGC_IFPD_DECAY,0x4A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_IFPD_DECAY_NR MODEM_AGC_IFPD_DECAY,0x1A
#define RADIO_CONFIG_SET_PROPERTY_MODEM_AGC_IFPD_DECAY_HR MODEM_AGC_IFPD_DECAY,0x11

#define MODEM_RAW_EYE 0x20,0x02,0x46
#define RADIO_CONFIG_SET_PROPERTY_MODEM_RAW_EYE_433_LR MODEM_RAW_EYE,0x00,0x7D
#define RADIO_CONFIG_SET_PROPERTY_MODEM_RAW_EYE_868_LR MODEM_RAW_EYE,0x00,0x3D
#define RADIO_CONFIG_SET_PROPERTY_MODEM_RAW_EYE_NR MODEM_RAW_EYE,0x01,0x3F
#define RADIO_CONFIG_SET_PROPERTY_MODEM_RAW_EYE_HR MODEM_RAW_EYE,0x00,0x85

#define MODEM_CHFLT_RX1_CHFLT_COE_0 0x21,0x0C,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_433_LR MODEM_CHFLT_RX1_CHFLT_COE_0,0xFF,0xC4,0x30,0x7F,0xF5,0xB5,0xB8,0xDE,0x05,0x17,0x16,0x0C
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_433_NR MODEM_CHFLT_RX1_CHFLT_COE_0,0xCC,0xA1,0x30,0xA0,0x21,0xD1,0xB9,0xC9,0xEA,0x05,0x12,0x11
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_433_HR MODEM_CHFLT_RX1_CHFLT_COE_0,0x7E,0x64,0x1B,0xBA,0x58,0x0B,0xDD,0xCE,0xD6,0xE6,0xF6,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_868_LR MODEM_CHFLT_RX1_CHFLT_COE_0,0xCC,0xA1,0x30,0xA0,0x21,0xD1,0xB9,0xC9,0xEA,0x05,0x12,0x11
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_868_NR RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_868_LR
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_0_868_HR MODEM_CHFLT_RX1_CHFLT_COE_0,0x74,0x64,0x1B,0xBA,0x58,0x0B,0xDD,0xCE,0xD6,0xE6,0xF6,0x00

#define MODEM_CHFLT_RX1_CHFLT_COE_1 0x21,0x06,0x0C
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_433_LR MODEM_CHFLT_RX1_CHFLT_COE_1,0x03,0x00,0x15,0xFF,0x00,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_433_NR MODEM_CHFLT_RX1_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_433_HR MODEM_CHFLT_RX1_CHFLT_COE_1,0x03,0x03,0x15,0xF0,0x3F,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_868_LR MODEM_CHFLT_RX1_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_868_NR MODEM_CHFLT_RX1_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX1_CHFLT_COE_1_868_HR MODEM_CHFLT_RX1_CHFLT_COE_1,0x03,0x03,0x15,0xF0,0x3F,0x00

#define MODEM_CHFLT_RX2_CHFLT_COE_0 0x21,0x0C,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_433_LR MODEM_CHFLT_RX2_CHFLT_COE_0,0xFF,0xC4,0x30,0x7F,0xF5,0xB5,0xB8,0xDE,0x05,0x17,0x16,0x0C
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_433_NR MODEM_CHFLT_RX2_CHFLT_COE_0,0xCC,0xA1,0x30,0xA0,0x21,0xD1,0xB9,0xC9,0xEA,0x05,0x12,0x11
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_433_HR MODEM_CHFLT_RX2_CHFLT_COE_0,0x7E,0x64,0x1B,0xBA,0x58,0x0B,0xDD,0xCE,0xD6,0xE6,0xF6,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_868_LR MODEM_CHFLT_RX2_CHFLT_COE_0,0xCC,0xA1,0x30,0xA0,0x21,0xD1,0xB9,0xC9,0xEA,0x05,0x12,0x11
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_868_NR RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_868_LR
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_0_868_HR MODEM_CHFLT_RX2_CHFLT_COE_0,0x74,0x64,0x1B,0xBA,0x58,0x0B,0xDD,0xCE,0xD6,0xE6,0xF6,0x00

#define MODEM_CHFLT_RX2_CHFLT_COE_1 0x21,0x06,0x0C
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_433_LR MODEM_CHFLT_RX2_CHFLT_COE_1,0x03,0x00,0x15,0xFF,0x00,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_433_NR MODEM_CHFLT_RX2_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_433_HR MODEM_CHFLT_RX2_CHFLT_COE_1,0x03,0x03,0x15,0xF0,0x3F,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_868_LR MODEM_CHFLT_RX2_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_868_NR MODEM_CHFLT_RX2_CHFLT_COE_1,0x0A,0x04,0x15,0xFC,0x03,0x00
#define RADIO_CONFIG_SET_PROPERTY_MODEM_CHFLT_RX2_CHFLT_COE_1_868_HR MODEM_CHFLT_RX2_CHFLT_COE_1,0x03,0x03,0x15,0xF0,0x3F,0x00

#define MODEM_DSA_QUAL 0x20,0x01,0x5D
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DSA_QUAL_433_LR MODEM_DSA_QUAL,0x06
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DSA_QUAL_868_LR MODEM_DSA_QUAL,0x05
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DSA_QUAL_NR MODEM_DSA_QUAL,0x09
#define RADIO_CONFIG_SET_PROPERTY_MODEM_DSA_QUAL_HR MODEM_DSA_QUAL,0x04

/*******************************************************************
  				SYNC WORD
********************************************************************/

//Although the Sync Word byte(s) are transmitted/received in descending order (i.e., Byte 3 first, followed by Byte 2, etc.), each byte is transmitted/received in little-endian fashion (i.e., least significant bit first).
#define RADIO_CONFIG_SET_PROPERTY_SYNC_BITS_CS0_0  \
  0x11 /* GROUP: Sync                                       */,\
  0x04 /* NUM_PROPS                                         */,\
  0x01 /* START_PROP                                        */,\
  0x67 /* SYNC_BITS,BITS[7:0],BITS[7:0],BITS[7:0],BITS[7:0] */,\
  0x0B /* DATA1                                             */,\
  0x00 /* DATA2                                             */,\
  0x00 /* DATA3                                             */\


#define RADIO_CONFIG_SET_PROPERTY_SYNC_BITS_CS0_1  \
  0x11 /* GROUP: Sync                                       */,\
  0x04 /* NUM_PROPS                                         */,\
  0x01 /* START_PROP                                        */,\
  0xD0 /* SYNC_BITS,BITS[7:0],BITS[7:0],BITS[7:0],BITS[7:0] */,\
  0xE6 /* DATA1                                             */,\
  0x00 /* DATA2                                             */,\
  0x00 /* DATA3                                             */\

#define RADIO_CONFIG_SET_PROPERTY_SYNC_BITS_CS1_0  \
  0x11 /* GROUP: Sync                                       */,\
  0x04 /* NUM_PROPS                                         */,\
  0x01 /* START_PROP                                        */,\
  0x2F /* SYNC_BITS,BITS[7:0],BITS[7:0],BITS[7:0],BITS[7:0] */,\
  0x19 /* DATA1                                             */,\
  0x00 /* DATA2                                             */,\
  0x00 /* DATA3                                             */\


#define RADIO_CONFIG_SET_PROPERTY_SYNC_BITS_CS1_1  \
  0x11 /* GROUP: Sync                                       */,\
  0x04 /* NUM_PROPS                                         */,\
  0x01 /* START_PROP                                        */,\
  0x98 /* SYNC_BITS,BITS[7:0],BITS[7:0],BITS[7:0],BITS[7:0] */,\
  0xF4 /* DATA1                                             */,\
  0x00 /* DATA2                                             */,\
  0x00 /* DATA3                                             */\


#define RADIO_CONFIG_SET_PROPERTY_MODEM_RSSI_CONTROL \
  0x20 /* GROUP: Modem                                                        */,\
  0x01 /* NUM_PROPS                                                           */,\
  0x4C /* START_PROP                                                          */,\
  0x02 /* MODEM_RSSI_CONTROL,CHECK_THRESH_AT_LATCH[5],AVERAGE[4:3],LATCH[2:0] */\


#define RADIO_CONFIG_SET_PROPERTY_MODEM_RSSI_CONTROL2 \
  0x20 /* GROUP: Modem                                                                          */,\
  0x01 /* NUM_PROPS                                                                             */,\
  0x4D /* START_PROP                                                                            */,\
  0x00 /* MODEM_RSSI_CONTROL2,RSSIJMP_DWN[5],RSSIJMP_UP[4],ENRSSIJMP[3],JMPDLYLEN[2],ENJMPRX[1] */\



#define  RADIO_CONFIG_SET_PROPERTY_PTI_ENABLE \
  0xF0 /* GROUP: PTI                                                                          	*/,\
  0x04 /* NUM_PROPS                                                                             */,\
  0x00 /* START_PROP                                                                            */,\
  0x80 /* PTI_EN                                                                            	*/,\
  0x13 /* BAUD 0x13            -> 500 kbaud                    									*/,\
  0x88 /* BAUD 0x88                                           									*/,\
  0x60 /* PTI_LOG_EN: RX_EN, TX_EN                             									*/\

#endif /* FRAMEWORK_HAL_CHIPS_SI4460_EZRADIODRV_SI4460_REGISTERS_H_ */
