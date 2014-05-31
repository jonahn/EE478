/*-------------------------------------------------------------------------
 * PIC18F66J94 processor header
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * (c) Copyright 1999-2013 Microchip Technology, All rights reserved
 *-------------------------------------------------------------------------*/

#ifndef __18F66J94_H
#define __18F66J94_H

extern volatile far  unsigned char       UEP0;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP0bits;
extern volatile far  unsigned char       UEP1;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP1bits;
extern volatile far  unsigned char       UEP2;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP2bits;
extern volatile far  unsigned char       UEP3;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP3bits;
extern volatile far  unsigned char       UEP4;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP4bits;
extern volatile far  unsigned char       UEP5;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP5bits;
extern volatile far  unsigned char       UEP6;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP6bits;
extern volatile far  unsigned char       UEP7;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP7bits;
extern volatile far  unsigned char       UEP8;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP8bits;
extern volatile far  unsigned char       UEP9;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP9bits;
extern volatile far  unsigned char       UEP10;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP10bits;
extern volatile far  unsigned char       UEP11;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP11bits;
extern volatile far  unsigned char       UEP12;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP12bits;
extern volatile far  unsigned char       UEP13;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP13bits;
extern volatile far  unsigned char       UEP14;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP14bits;
extern volatile far  unsigned char       UEP15;
extern volatile far  struct {
  unsigned EPSTALL:1;
  unsigned EPINEN:1;
  unsigned EPOUTEN:1;
  unsigned EPCONDIS:1;
  unsigned EPHSHK:1;
} UEP15bits;
extern volatile far  unsigned char       UEIE;
extern volatile far  struct {
  unsigned PIDEE:1;
  unsigned CRC5EE:1;
  unsigned CRC16EE:1;
  unsigned DFN8EE:1;
  unsigned BTOEE:1;
  unsigned :2;
  unsigned BTSEE:1;
} UEIEbits;
extern volatile far  unsigned char       UIE;
extern volatile far  struct {
  unsigned URSTIE:1;
  unsigned UERRIE:1;
  unsigned ACTVIE:1;
  unsigned TRNIE:1;
  unsigned IDLEIE:1;
  unsigned STALLIE:1;
  unsigned SOFIE:1;
} UIEbits;
extern volatile far  unsigned char       UCFG;
extern volatile far  struct {
  unsigned PPB0:1;
  unsigned PPB1:1;
  unsigned FSEN:1;
  unsigned UTRDIS:1;
  unsigned UPUEN:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
} UCFGbits;
extern volatile far  unsigned char       RPOR0_1;
extern volatile far  union {
  struct {
    unsigned RPO0R:4;
    unsigned RPO1R:4;
  };
  struct {
    unsigned RPO0R0:1;
    unsigned RPO0R1:1;
    unsigned RPO0R2:1;
    unsigned RPO0R3:1;
    unsigned RPO1R0:1;
    unsigned RPO1R1:1;
    unsigned RPO1R2:1;
    unsigned RPO1R3:1;
  };
} RPOR0_1bits;
extern volatile far  unsigned char       RPOR2_3;
extern volatile far  union {
  struct {
    unsigned RPO2R:4;
    unsigned RPO3R:4;
  };
  struct {
    unsigned RPO2R0:1;
    unsigned RPO2R1:1;
    unsigned RPO2R2:1;
    unsigned RPO2R3:1;
    unsigned RPO3R0:1;
    unsigned RPO3R1:1;
    unsigned RPO3R2:1;
    unsigned RPO3R3:1;
  };
} RPOR2_3bits;
extern volatile far  unsigned char       RPOR4_5;
extern volatile far  union {
  struct {
    unsigned RPO4R:4;
    unsigned RPO5R:4;
  };
  struct {
    unsigned RPO4R0:1;
    unsigned RPO4R1:1;
    unsigned RPO4R2:1;
    unsigned RPO4R3:1;
    unsigned RPO5R0:1;
    unsigned RPO5R1:1;
    unsigned RPO5R2:1;
    unsigned RPO5R3:1;
  };
} RPOR4_5bits;
extern volatile far  unsigned char       RPOR6_7;
extern volatile far  union {
  struct {
    unsigned RPO6R:4;
    unsigned RPO7R:4;
  };
  struct {
    unsigned RPO6R0:1;
    unsigned RPO6R1:1;
    unsigned RPO6R2:1;
    unsigned RPO6R3:1;
    unsigned RPO7R0:1;
    unsigned RPO7R1:1;
    unsigned RPO7R2:1;
    unsigned RPO7R3:1;
  };
} RPOR6_7bits;
extern volatile far  unsigned char       RPOR8_9;
extern volatile far  union {
  struct {
    unsigned RPO8R:4;
    unsigned RPO9R:4;
  };
  struct {
    unsigned RPO8R0:1;
    unsigned RPO8R1:1;
    unsigned RPO8R2:1;
    unsigned RPO8R3:1;
    unsigned RPO9R0:1;
    unsigned RPO9R1:1;
    unsigned RPO9R2:1;
    unsigned RPO9R3:1;
  };
} RPOR8_9bits;
extern volatile far  unsigned char       RPOR10_11;
extern volatile far  union {
  struct {
    unsigned RPO10R:4;
    unsigned RPO11R:4;
  };
  struct {
    unsigned RPO10R0:1;
    unsigned RPO10R1:1;
    unsigned RPO10R2:1;
    unsigned RPO10R3:1;
    unsigned RPO11R0:1;
    unsigned RPO11R1:1;
    unsigned RPO11R2:1;
    unsigned RPO11R3:1;
  };
} RPOR10_11bits;
extern volatile far  unsigned char       RPOR12_13;
extern volatile far  union {
  struct {
    unsigned RPO12R:4;
    unsigned RPO13R:4;
  };
  struct {
    unsigned RPO12R0:1;
    unsigned RPO12R1:1;
    unsigned RPO12R2:1;
    unsigned RPO12R3:1;
    unsigned RPO13R0:1;
    unsigned RPO13R1:1;
    unsigned RPO13R2:1;
    unsigned RPO13R3:1;
  };
} RPOR12_13bits;
extern volatile far  unsigned char       RPOR14_15;
extern volatile far  union {
  struct {
    unsigned RPO14R:4;
    unsigned RPO15R:4;
  };
  struct {
    unsigned RPO14R0:1;
    unsigned RPO14R1:1;
    unsigned RPO14R2:1;
    unsigned RPO14R3:1;
    unsigned RPO15R0:1;
    unsigned RPO15R1:1;
    unsigned RPO15R2:1;
    unsigned RPO15R3:1;
  };
} RPOR14_15bits;
extern volatile far  unsigned char       RPOR16_17;
extern volatile far  union {
  struct {
    unsigned RPO16R:4;
    unsigned RPO17R:4;
  };
  struct {
    unsigned RPO16R0:1;
    unsigned RPO16R1:1;
    unsigned RPO16R2:1;
    unsigned RPO16R3:1;
    unsigned RPO17R0:1;
    unsigned RPO17R1:1;
    unsigned RPO17R2:1;
    unsigned RPO17R3:1;
  };
} RPOR16_17bits;
extern volatile far  unsigned char       RPOR18_19;
extern volatile far  union {
  struct {
    unsigned RPO18R:4;
    unsigned RPO19R:4;
  };
  struct {
    unsigned RPO18R0:1;
    unsigned RPO18R1:1;
    unsigned RPO18R2:1;
    unsigned RPO18R3:1;
    unsigned RPO19R0:1;
    unsigned RPO19R1:1;
    unsigned RPO19R2:1;
    unsigned RPO19R3:1;
  };
} RPOR18_19bits;
extern volatile far  unsigned char       RPOR20_21;
extern volatile far  union {
  struct {
    unsigned RPO20R:4;
    unsigned RPO21R:4;
  };
  struct {
    unsigned RPO20R0:1;
    unsigned RPO20R1:1;
    unsigned RPO20R2:1;
    unsigned RPO20R3:1;
    unsigned RPO21R0:1;
    unsigned RPO21R1:1;
    unsigned RPO21R2:1;
    unsigned RPO21R3:1;
  };
} RPOR20_21bits;
extern volatile far  unsigned char       RPOR22_23;
extern volatile far  union {
  struct {
    unsigned RPO22R:4;
    unsigned RPO23R:4;
  };
  struct {
    unsigned RPO22R0:1;
    unsigned RPO22R1:1;
    unsigned RPO22R2:1;
    unsigned RPO22R3:1;
    unsigned RPO23R0:1;
    unsigned RPO23R1:1;
    unsigned RPO23R2:1;
    unsigned RPO23R3:1;
  };
} RPOR22_23bits;
extern volatile far  unsigned char       RPOR24_25;
extern volatile far  union {
  struct {
    unsigned RPO24R:4;
    unsigned RPO25R:4;
  };
  struct {
    unsigned RPO24R0:1;
    unsigned RPO24R1:1;
    unsigned RPO24R2:1;
    unsigned RPO24R3:1;
    unsigned RPO25R0:1;
    unsigned RPO25R1:1;
    unsigned RPO25R2:1;
    unsigned RPO25R3:1;
  };
} RPOR24_25bits;
extern volatile far  unsigned char       RPOR26_27;
extern volatile far  union {
  struct {
    unsigned RPO26R:4;
    unsigned RPO27R:4;
  };
  struct {
    unsigned RPO26R0:1;
    unsigned RPO26R1:1;
    unsigned RPO26R2:1;
    unsigned RPO26R3:1;
    unsigned RPO27R0:1;
    unsigned RPO27R1:1;
    unsigned RPO27R2:1;
    unsigned RPO27R3:1;
  };
} RPOR26_27bits;
extern volatile far  unsigned char       RPOR28_29;
extern volatile far  union {
  struct {
    unsigned RPO28R:4;
    unsigned RPO29R:4;
  };
  struct {
    unsigned RPO28R0:1;
    unsigned RPO28R1:1;
    unsigned RPO28R2:1;
    unsigned RPO28R3:1;
    unsigned RPO29R0:1;
    unsigned RPO29R1:1;
    unsigned RPO29R2:1;
    unsigned RPO29R3:1;
  };
} RPOR28_29bits;
extern volatile far  unsigned char       RPOR30_31;
extern volatile far  union {
  struct {
    unsigned RPO30R:4;
    unsigned RPO31R:4;
  };
  struct {
    unsigned RPO30R0:1;
    unsigned RPO30R1:1;
    unsigned RPO30R2:1;
    unsigned RPO30R3:1;
    unsigned RPO31R0:1;
    unsigned RPO31R1:1;
    unsigned RPO31R2:1;
    unsigned RPO31R3:1;
  };
} RPOR30_31bits;
extern volatile far  unsigned char       RPOR32_33;
extern volatile far  union {
  struct {
    unsigned RPO32R:4;
    unsigned RPO33R:4;
  };
  struct {
    unsigned RPO32R0:1;
    unsigned RPO32R1:1;
    unsigned RPO32R2:1;
    unsigned RPO32R3:1;
    unsigned RPO33R0:1;
    unsigned RPO33R1:1;
    unsigned RPO33R2:1;
    unsigned RPO33R3:1;
  };
} RPOR32_33bits;
extern volatile far  unsigned char       RPOR34_35;
extern volatile far  union {
  struct {
    unsigned RPO34R:4;
    unsigned RPO35R:4;
  };
  struct {
    unsigned RPO34R0:1;
    unsigned RPO34R1:1;
    unsigned RPO34R2:1;
    unsigned RPO34R3:1;
    unsigned RPO35R0:1;
    unsigned RPO35R1:1;
    unsigned RPO35R2:1;
    unsigned RPO35R3:1;
  };
} RPOR34_35bits;
extern volatile far  unsigned char       RPOR36_37;
extern volatile far  union {
  struct {
    unsigned RPO36R:4;
    unsigned RPO37R:4;
  };
  struct {
    unsigned RPO36R0:1;
    unsigned RPO36R1:1;
    unsigned RPO36R2:1;
    unsigned RPO36R3:1;
    unsigned RPO37R0:1;
    unsigned RPO37R1:1;
    unsigned RPO37R2:1;
    unsigned RPO37R3:1;
  };
} RPOR36_37bits;
extern volatile far  unsigned char       RPOR38_39;
extern volatile far  union {
  struct {
    unsigned RPO38R:4;
    unsigned RPO39R:4;
  };
  struct {
    unsigned RPO38R0:1;
    unsigned RPO38R1:1;
    unsigned RPO38R2:1;
    unsigned RPO38R3:1;
    unsigned RPO39R0:1;
    unsigned RPO39R1:1;
    unsigned RPO39R2:1;
    unsigned RPO39R3:1;
  };
} RPOR38_39bits;
extern volatile far  unsigned char       RPOR40_41;
extern volatile far  union {
  struct {
    unsigned RPO40R:4;
    unsigned RPO41R:4;
  };
  struct {
    unsigned RPO40R0:1;
    unsigned RPO40R1:1;
    unsigned RPO40R2:1;
    unsigned RPO40R3:1;
    unsigned RPO41R0:1;
    unsigned RPO41R1:1;
    unsigned RPO41R2:1;
    unsigned RPO41R3:1;
  };
} RPOR40_41bits;
extern volatile far  unsigned char       RPOR42_43;
extern volatile far  union {
  struct {
    unsigned RPO42R:4;
    unsigned RPO43R:4;
  };
  struct {
    unsigned RPO42R0:1;
    unsigned RPO42R1:1;
    unsigned RPO42R2:1;
    unsigned RPO42R3:1;
    unsigned RPO43R0:1;
    unsigned RPO43R1:1;
    unsigned RPO43R2:1;
    unsigned RPO43R3:1;
  };
} RPOR42_43bits;
extern volatile far  unsigned char       RPOR44_45;
extern volatile far  union {
  struct {
    unsigned RPO44R:4;
    unsigned RPO45R:4;
  };
  struct {
    unsigned RPO44R0:1;
    unsigned RPO44R1:1;
    unsigned RPO44R2:1;
    unsigned RPO44R3:1;
    unsigned RPO45R0:1;
    unsigned RPO45R1:1;
    unsigned RPO45R2:1;
    unsigned RPO45R3:1;
  };
} RPOR44_45bits;
extern volatile far  unsigned char       RPOR46;
extern volatile far  union {
  struct {
    unsigned RPO46R:4;
  };
  struct {
    unsigned RPO46R0:1;
    unsigned RPO46R1:1;
    unsigned RPO46R2:1;
    unsigned RPO46R3:1;
  };
} RPOR46bits;
extern volatile far  unsigned char       RPINR0_1;
extern volatile far  union {
  struct {
    unsigned U1RXR:4;
    unsigned U1TXR:4;
  };
  struct {
    unsigned U1RXR0:1;
    unsigned U1RXR1:1;
    unsigned U1RXR2:1;
    unsigned U1RXR3:1;
    unsigned U1TXR0:1;
    unsigned U1TXR1:1;
    unsigned U1TXR2:1;
    unsigned U1TXR3:1;
  };
} RPINR0_1bits;
extern volatile far  unsigned char       RPINR2_3;
extern volatile far  union {
  struct {
    unsigned U2RXR:4;
    unsigned U2TXR:4;
  };
  struct {
    unsigned U2RXR0:1;
    unsigned U2RXR1:1;
    unsigned U2RXR2:1;
    unsigned U2RXR3:1;
    unsigned U2TXR0:1;
    unsigned U2TXR1:1;
    unsigned U2TXR2:1;
    unsigned U2TXR3:1;
  };
} RPINR2_3bits;
extern volatile far  unsigned char       RPINR4_5;
extern volatile far  union {
  struct {
    unsigned U3RXR:4;
    unsigned U3TXR:4;
  };
  struct {
    unsigned U3RXR0:1;
    unsigned U3RXR1:1;
    unsigned U3RXR2:1;
    unsigned U3RXR3:1;
    unsigned U3TXR0:1;
    unsigned U3TXR1:1;
    unsigned U3TXR2:1;
    unsigned U3TXR3:1;
  };
} RPINR4_5bits;
extern volatile far  unsigned char       RPINR6_7;
extern volatile far  union {
  struct {
    unsigned U4RXR:4;
    unsigned U4TXR:4;
  };
  struct {
    unsigned U4RXR0:1;
    unsigned U4RXR1:1;
    unsigned U4RXR2:1;
    unsigned U4RXR3:1;
    unsigned U4TXR0:1;
    unsigned U4TXR1:1;
    unsigned U4TXR2:1;
    unsigned U4TXR3:1;
  };
} RPINR6_7bits;
extern volatile far  unsigned char       RPINR8_9;
extern volatile far  union {
  struct {
    unsigned SCK1R:4;
    unsigned SDI1R:4;
  };
  struct {
    unsigned SCK1R0:1;
    unsigned SCK1R1:1;
    unsigned SCK1R2:1;
    unsigned SCK1R3:1;
    unsigned SDI1R0:1;
    unsigned SDI1R1:1;
    unsigned SDI1R2:1;
    unsigned SDI1R3:1;
  };
} RPINR8_9bits;
extern volatile far  unsigned char       RPINR10_11;
extern volatile far  union {
  struct {
    unsigned SS1R:4;
    unsigned SCK2R:4;
  };
  struct {
    unsigned SS1R0:1;
    unsigned SS1R1:1;
    unsigned SS1R2:1;
    unsigned SS1R3:1;
    unsigned SCK2R0:1;
    unsigned SCK2R1:1;
    unsigned SCK2R2:1;
    unsigned SCK2R3:1;
  };
} RPINR10_11bits;
extern volatile far  unsigned char       RPINR12_13;
extern volatile far  union {
  struct {
    unsigned SDI2R:4;
    unsigned SS2R:4;
  };
  struct {
    unsigned SDI2R0:1;
    unsigned SDI2R1:1;
    unsigned SDI2R2:1;
    unsigned SDI2R3:1;
    unsigned SS2R0:1;
    unsigned SS2R1:1;
    unsigned SS2R2:1;
    unsigned SS2R3:1;
  };
} RPINR12_13bits;
extern volatile far  unsigned char       RPINR14_15;
extern volatile far  union {
  struct {
    unsigned FLT0R:4;
    unsigned ECCP1R:4;
  };
  struct {
    unsigned FLT0R0:1;
    unsigned FLT0R1:1;
    unsigned FLT0R2:1;
    unsigned FLT0R3:1;
    unsigned ECCP1R0:1;
    unsigned ECCP1R1:1;
    unsigned ECCP1R2:1;
    unsigned ECCP1R3:1;
  };
} RPINR14_15bits;
extern volatile far  unsigned char       RPINR16_17;
extern volatile far  union {
  struct {
    unsigned ECCP2R:4;
    unsigned ECCP3R:4;
  };
  struct {
    unsigned ECCP2R0:1;
    unsigned ECCP2R1:1;
    unsigned ECCP2R2:1;
    unsigned ECCP2R3:1;
    unsigned ECCP3R0:1;
    unsigned ECCP3R1:1;
    unsigned ECCP3R2:1;
    unsigned ECCP3R3:1;
  };
} RPINR16_17bits;
extern volatile far  unsigned char       RPINR18_19;
extern volatile far  union {
  struct {
    unsigned IOC0R:4;
    unsigned IOC1R:4;
  };
  struct {
    unsigned IOC0R0:1;
    unsigned IOC0R1:1;
    unsigned IOC0R2:1;
    unsigned IOC0R3:1;
    unsigned IOC1R0:1;
    unsigned IOC1R1:1;
    unsigned IOC1R2:1;
    unsigned IOC1R3:1;
  };
} RPINR18_19bits;
extern volatile far  unsigned char       RPINR20_21;
extern volatile far  union {
  struct {
    unsigned IOC2R:4;
    unsigned IOC3R:4;
  };
  struct {
    unsigned IOC2R0:1;
    unsigned IOC2R1:1;
    unsigned IOC2R2:1;
    unsigned IOC2R3:1;
    unsigned IOC3R0:1;
    unsigned IOC3R1:1;
    unsigned IOC3R2:1;
    unsigned IOC3R3:1;
  };
} RPINR20_21bits;
extern volatile far  unsigned char       RPINR22_23;
extern volatile far  union {
  struct {
    unsigned IOC4R:4;
    unsigned IOC5R:4;
  };
  struct {
    unsigned IOC4R0:1;
    unsigned IOC4R1:1;
    unsigned IOC4R2:1;
    unsigned IOC4R3:1;
    unsigned IOC5R0:1;
    unsigned IOC5R1:1;
    unsigned IOC5R2:1;
    unsigned IOC5R3:1;
  };
} RPINR22_23bits;
extern volatile far  unsigned char       RPINR24_25;
extern volatile far  union {
  struct {
    unsigned IOC6R:4;
    unsigned IOC7R:4;
  };
  struct {
    unsigned IOC6R0:1;
    unsigned IOC6R1:1;
    unsigned IOC6R2:1;
    unsigned IOC6R3:1;
    unsigned IOC7R0:1;
    unsigned IOC7R1:1;
    unsigned IOC7R2:1;
    unsigned IOC7R3:1;
  };
} RPINR24_25bits;
extern volatile far  unsigned char       RPINR26_27;
extern volatile far  union {
  struct {
    unsigned INT1R:4;
    unsigned INT2R:4;
  };
  struct {
    unsigned INT1R0:1;
    unsigned INT1R1:1;
    unsigned INT1R2:1;
    unsigned INT1R3:1;
    unsigned INT2R0:1;
    unsigned INT2R1:1;
    unsigned INT2R2:1;
    unsigned INT2R3:1;
  };
} RPINR26_27bits;
extern volatile far  unsigned char       RPINR28_29;
extern volatile far  union {
  struct {
    unsigned INT3R:4;
    unsigned MDMINR:4;
  };
  struct {
    unsigned INT3R0:1;
    unsigned INT3R1:1;
    unsigned INT3R2:1;
    unsigned INT3R3:1;
    unsigned MDMINR0:1;
    unsigned MDMINR1:1;
    unsigned MDMINR2:1;
    unsigned MDMINR3:1;
  };
} RPINR28_29bits;
extern volatile far  unsigned char       RPINR30_31;
extern volatile far  union {
  struct {
    unsigned MDCIN1R:4;
    unsigned MDCIN2R:4;
  };
  struct {
    unsigned MDCIN1R0:1;
    unsigned MDCIN1R1:1;
    unsigned MDCIN1R2:1;
    unsigned MDCIN1R3:1;
    unsigned MDCIN2R0:1;
    unsigned MDCIN2R1:1;
    unsigned MDCIN2R2:1;
    unsigned MDCIN2R3:1;
  };
} RPINR30_31bits;
extern volatile far  unsigned char       RPINR32_33;
extern volatile far  union {
  struct {
    unsigned CCP4R:4;
    unsigned CCP5R:4;
  };
  struct {
    unsigned CCP4R0:1;
    unsigned CCP4R1:1;
    unsigned CCP4R2:1;
    unsigned CCP4R3:1;
    unsigned CCP5R0:1;
    unsigned CCP5R1:1;
    unsigned CCP5R2:1;
    unsigned CCP5R3:1;
  };
} RPINR32_33bits;
extern volatile far  unsigned char       RPINR34_35;
extern volatile far  union {
  struct {
    unsigned CCP6R:4;
    unsigned CCP7R:4;
  };
  struct {
    unsigned CCP6R0:1;
    unsigned CCP6R1:1;
    unsigned CCP6R2:1;
    unsigned CCP6R3:1;
    unsigned CCP7R0:1;
    unsigned CCP7R1:1;
    unsigned CCP7R2:1;
    unsigned CCP7R3:1;
  };
} RPINR34_35bits;
extern volatile far  unsigned char       RPINR36_37;
extern volatile far  union {
  struct {
    unsigned CCP8R:4;
    unsigned CCP9R:4;
  };
  struct {
    unsigned CCP8R0:1;
    unsigned CCP8R1:1;
    unsigned CCP8R2:1;
    unsigned CCP8R3:1;
    unsigned CCP9R0:1;
    unsigned CCP9R1:1;
    unsigned CCP9R2:1;
    unsigned CCP9R3:1;
  };
} RPINR36_37bits;
extern volatile far  unsigned char       RPINR38_39;
extern volatile far  union {
  struct {
    unsigned CCP10R:4;
    unsigned T0CKIR:4;
  };
  struct {
    unsigned CCP10R0:1;
    unsigned CCP10R1:1;
    unsigned CCP10R2:1;
    unsigned CCP10R3:1;
    unsigned T0CKIR0:1;
    unsigned T0CKIR1:1;
    unsigned T0CKIR2:1;
    unsigned T0CKIR3:1;
  };
} RPINR38_39bits;
extern volatile far  unsigned char       RPINR40_41;
extern volatile far  union {
  struct {
    unsigned T1GR:4;
    unsigned T1CKIR:4;
  };
  struct {
    unsigned T1GR0:1;
    unsigned T1GR1:1;
    unsigned T1GR2:1;
    unsigned T1GR3:1;
    unsigned T1CKIR0:1;
    unsigned T1CKIR1:1;
    unsigned T1CKIR2:1;
    unsigned T1CKIR3:1;
  };
} RPINR40_41bits;
extern volatile far  unsigned char       RPINR42_43;
extern volatile far  union {
  struct {
    unsigned T3GR:4;
    unsigned T3CKIR:4;
  };
  struct {
    unsigned T3GR0:1;
    unsigned T3GR1:1;
    unsigned T3GR2:1;
    unsigned T3GR3:1;
    unsigned T3CKIR0:1;
    unsigned T3CKIR1:1;
    unsigned T3CKIR2:1;
    unsigned T3CKIR3:1;
  };
} RPINR42_43bits;
extern volatile far  unsigned char       RPINR44_45;
extern volatile far  union {
  struct {
    unsigned T5GR:4;
    unsigned T5CKIR:4;
  };
  struct {
    unsigned T5GR0:1;
    unsigned T5GR1:1;
    unsigned T5GR2:1;
    unsigned T5GR3:1;
    unsigned T5CKIR0:1;
    unsigned T5CKIR1:1;
    unsigned T5CKIR2:1;
    unsigned T5CKIR3:1;
  };
} RPINR44_45bits;
extern volatile far  unsigned char       RPINR46_47;
extern volatile far  union {
  struct {
    unsigned PBIO0R:4;
    unsigned PBIO1R:4;
  };
  struct {
    unsigned PBIO0R0:1;
    unsigned PBIO0R1:1;
    unsigned PBIO0R2:1;
    unsigned PBIO0R3:1;
    unsigned PBIO1R0:1;
    unsigned PBIO1R1:1;
    unsigned PBIO1R2:1;
    unsigned PBIO1R3:1;
  };
} RPINR46_47bits;
extern volatile far  unsigned char       RPINR48_49;
extern volatile far  union {
  struct {
    unsigned PBIO2R:4;
    unsigned PBIO3R:4;
  };
  struct {
    unsigned PBIO2R0:1;
    unsigned PBIO2R1:1;
    unsigned PBIO2R2:1;
    unsigned PBIO2R3:1;
    unsigned PBIO3R0:1;
    unsigned PBIO3R1:1;
    unsigned PBIO3R2:1;
    unsigned PBIO3R3:1;
  };
} RPINR48_49bits;
extern volatile far  unsigned char       RPINR50_51;
extern volatile far  union {
  struct {
    unsigned PBIO4R:4;
    unsigned PBIO5R:4;
  };
  struct {
    unsigned PBIO4R0:1;
    unsigned PBIO4R1:1;
    unsigned PBIO4R2:1;
    unsigned PBIO4R3:1;
    unsigned PBIO5R0:1;
    unsigned PBIO5R1:1;
    unsigned PBIO5R2:1;
    unsigned PBIO5R3:1;
  };
} RPINR50_51bits;
extern volatile far  unsigned char       RPINR52_53;
extern volatile far  union {
  struct {
    unsigned PBIO6R:4;
    unsigned PBIO7R:4;
  };
  struct {
    unsigned PBIO6R0:1;
    unsigned PBIO6R1:1;
    unsigned PBIO6R2:1;
    unsigned PBIO6R3:1;
    unsigned PBIO7R0:1;
    unsigned PBIO7R1:1;
    unsigned PBIO7R2:1;
    unsigned PBIO7R3:1;
  };
} RPINR52_53bits;
extern volatile far  unsigned char       ANCON3;
extern volatile far  struct {
  unsigned ANSEL16:1;
  unsigned ANSEL17:1;
  unsigned ANSEL18:1;
  unsigned ANSEL19:1;
  unsigned ANSEL20:1;
  unsigned ANSEL21:1;
  unsigned ANSEL22:1;
  unsigned ANSEL23:1;
} ANCON3bits;
extern volatile far  unsigned char       ANCON2;
extern volatile far  struct {
  unsigned ANSEL8:1;
  unsigned ANSEL9:1;
  unsigned ANSEL10:1;
  unsigned ANSEL11:1;
  unsigned ANSEL12:1;
  unsigned ANSEL13:1;
  unsigned ANSEL14:1;
  unsigned ANSEL15:1;
} ANCON2bits;
extern volatile far  unsigned char       ANCON1;
extern volatile far  struct {
  unsigned ANSEL0:1;
  unsigned ANSEL1:1;
  unsigned ANSEL2:1;
  unsigned ANSEL3:1;
  unsigned ANSEL4:1;
  unsigned ANSEL5:1;
  unsigned ANSEL6:1;
  unsigned ANSEL7:1;
} ANCON1bits;
extern volatile far  unsigned            ADCBUF1;
extern volatile far  unsigned char       ADCBUF1L;
extern volatile far  unsigned char       ADCBUF1H;
extern volatile far  unsigned            ADCBUF2;
extern volatile far  unsigned char       ADCBUF2L;
extern volatile far  unsigned char       ADCBUF2H;
extern volatile far  unsigned            ADCBUF3;
extern volatile far  unsigned char       ADCBUF3L;
extern volatile far  unsigned char       ADCBUF3H;
extern volatile far  unsigned            ADCBUF4;
extern volatile far  unsigned char       ADCBUF4L;
extern volatile far  unsigned char       ADCBUF4H;
extern volatile far  unsigned            ADCBUF5;
extern volatile far  unsigned char       ADCBUF5L;
extern volatile far  unsigned char       ADCBUF5H;
extern volatile far  unsigned            ADCBUF6;
extern volatile far  unsigned char       ADCBUF6L;
extern volatile far  unsigned char       ADCBUF6H;
extern volatile far  unsigned            ADCBUF7;
extern volatile far  unsigned char       ADCBUF7L;
extern volatile far  unsigned char       ADCBUF7H;
extern volatile far  unsigned            ADCBUF8;
extern volatile far  unsigned char       ADCBUF8L;
extern volatile far  unsigned char       ADCBUF8H;
extern volatile far  unsigned            ADCBUF9;
extern volatile far  unsigned char       ADCBUF9L;
extern volatile far  unsigned char       ADCBUF9H;
extern volatile far  unsigned            ADCBUF10;
extern volatile far  unsigned char       ADCBUF10L;
extern volatile far  unsigned char       ADCBUF10H;
extern volatile far  unsigned            ADCBUF11;
extern volatile far  unsigned char       ADCBUF11L;
extern volatile far  unsigned char       ADCBUF11H;
extern volatile far  unsigned            ADCBUF12;
extern volatile far  unsigned char       ADCBUF12L;
extern volatile far  unsigned char       ADCBUF12H;
extern volatile far  unsigned            ADCBUF13;
extern volatile far  unsigned char       ADCBUF13L;
extern volatile far  unsigned char       ADCBUF13H;
extern volatile far  unsigned            ADCBUF14;
extern volatile far  unsigned char       ADCBUF14L;
extern volatile far  unsigned char       ADCBUF14H;
extern volatile far  unsigned            ADCBUF15;
extern volatile far  unsigned char       ADCBUF15L;
extern volatile far  unsigned char       ADCBUF15H;
extern volatile far  unsigned            ADCBUF16;
extern volatile far  unsigned char       ADCBUF16L;
extern volatile far  unsigned char       ADCBUF16H;
extern volatile far  unsigned            ADCBUF17;
extern volatile far  unsigned char       ADCBUF17L;
extern volatile far  unsigned char       ADCBUF17H;
extern volatile far  unsigned            ADCBUF18;
extern volatile far  unsigned char       ADCBUF18L;
extern volatile far  unsigned char       ADCBUF18H;
extern volatile far  unsigned            ADCBUF19;
extern volatile far  unsigned char       ADCBUF19L;
extern volatile far  unsigned char       ADCBUF19H;
extern volatile far  unsigned            ADCBUF20;
extern volatile far  unsigned char       ADCBUF20L;
extern volatile far  unsigned char       ADCBUF20H;
extern volatile far  unsigned            ADCBUF21;
extern volatile far  unsigned char       ADCBUF21L;
extern volatile far  unsigned char       ADCBUF21H;
extern volatile far  unsigned            ADCBUF22;
extern volatile far  unsigned char       ADCBUF22L;
extern volatile far  unsigned char       ADCBUF22H;
extern volatile far  unsigned            ADCBUF23;
extern volatile far  unsigned char       ADCBUF23L;
extern volatile far  unsigned char       ADCBUF23H;
extern volatile far  unsigned            ADCBUF24;
extern volatile far  unsigned char       ADCBUF24L;
extern volatile far  unsigned char       ADCBUF24H;
extern volatile far  unsigned            ADCBUF25;
extern volatile far  unsigned char       ADCBUF25L;
extern volatile far  unsigned char       ADCBUF25H;
extern volatile far  unsigned char       ADCTMUEN0L;
extern volatile far  union {
  struct {
    unsigned CTMUEN:8;
  };
  struct {
    unsigned CTMUEN0:1;
    unsigned CTMUEN1:1;
    unsigned CTMUEN2:1;
    unsigned CTMUEN3:1;
    unsigned CTMUEN4:1;
    unsigned CTMUEN5:1;
    unsigned CTMUEN6:1;
    unsigned CTMUEN7:1;
  };
} ADCTMUEN0Lbits;
extern volatile far  unsigned char       ADCTMUEN0H;
extern volatile far  union {
  struct {
    unsigned CTMUEN:8;
  };
  struct {
    unsigned CTMUEN8:1;
    unsigned CTMUEN9:1;
    unsigned CTMUEN10:1;
    unsigned CTMUEN11:1;
    unsigned CTMUEN12:1;
    unsigned CTMUEN13:1;
    unsigned CTMUEN14:1;
    unsigned CTMUEN15:1;
  };
} ADCTMUEN0Hbits;
extern volatile far  unsigned char       ADCTMUEN1L;
extern volatile far  union {
  struct {
    unsigned CTMUEN:8;
  };
  struct {
    unsigned CTUMEN16:1;
    unsigned CTUMEN17:1;
    unsigned CTUMEN18:1;
    unsigned CTUMEN19:1;
    unsigned CTMUEN20:1;
    unsigned CTMUEN21:1;
    unsigned CTMUEN22:1;
    unsigned CTMUEN23:1;
  };
} ADCTMUEN1Lbits;
extern volatile far  unsigned char       ADCTMUEN1H;
extern volatile far  union {
  struct {
    unsigned CTMUEN:8;
  };
  struct {
    unsigned CTUMEN24:1;
    unsigned CTUMEN25:1;
    unsigned CTUMEN26:1;
    unsigned CTUMEN27:1;
    unsigned CTUMEN28:1;
    unsigned CTUMEN29:1;
    unsigned CTMUEN30:1;
  };
} ADCTMUEN1Hbits;
extern volatile far  unsigned char       ADCHIT0L;
extern volatile far  union {
  struct {
    unsigned CHH:8;
  };
  struct {
    unsigned CHH0:1;
    unsigned CHH1:1;
    unsigned CHH2:1;
    unsigned CHH3:1;
    unsigned CHH4:1;
    unsigned CHH5:1;
    unsigned CHH6:1;
    unsigned CHH7:1;
  };
} ADCHIT0Lbits;
extern volatile far  unsigned char       ADCHIT0H;
extern volatile far  union {
  struct {
    unsigned CHH:8;
  };
  struct {
    unsigned CHH8:1;
    unsigned CHH9:1;
    unsigned CHH10:1;
    unsigned CHH11:1;
    unsigned CHH12:1;
    unsigned CHH13:1;
    unsigned CHH14:1;
    unsigned CHH15:1;
  };
} ADCHIT0Hbits;
extern volatile far  unsigned char       ADCHIT1L;
extern volatile far  union {
  struct {
    unsigned CHH:8;
  };
  struct {
    unsigned CHH16:1;
    unsigned CHH17:1;
    unsigned CHH18:1;
    unsigned CHH19:1;
    unsigned CHH20:1;
    unsigned CHH21:1;
    unsigned CHH22:1;
    unsigned CHH23:1;
  };
} ADCHIT1Lbits;
extern volatile far  unsigned char       ADCHIT1H;
extern volatile far  union {
  struct {
    unsigned CHH:8;
  };
  struct {
    unsigned CHH24:1;
    unsigned CHH25:1;
    unsigned CHH26:1;
    unsigned CHH27:1;
    unsigned CHH28:1;
    unsigned CHH29:1;
    unsigned CHH30:1;
  };
} ADCHIT1Hbits;
extern volatile far  unsigned char       ADCSS0L;
extern volatile far  union {
  struct {
    unsigned CSS:8;
  };
  struct {
    unsigned CSS0:1;
    unsigned CSS1:1;
    unsigned CSS2:1;
    unsigned CSS3:1;
    unsigned CSS4:1;
    unsigned CSS5:1;
    unsigned CSS6:1;
    unsigned CSS7:1;
  };
} ADCSS0Lbits;
extern volatile far  unsigned char       ADCSS0H;
extern volatile far  union {
  struct {
    unsigned CSS:8;
  };
  struct {
    unsigned CSS8:1;
    unsigned CSS9:1;
    unsigned CSS10:1;
    unsigned CSS11:1;
    unsigned CSS12:1;
    unsigned CSS13:1;
    unsigned CSS14:1;
    unsigned CSS15:1;
  };
} ADCSS0Hbits;
extern volatile far  unsigned char       ADCSS1L;
extern volatile far  union {
  struct {
    unsigned CSS:8;
  };
  struct {
    unsigned CSS16:1;
    unsigned CSS17:1;
    unsigned CSS18:1;
    unsigned CSS19:1;
    unsigned CSS20:1;
    unsigned CSS21:1;
    unsigned CSS22:1;
    unsigned CSS23:1;
  };
} ADCSS1Lbits;
extern volatile far  unsigned char       ADCSS1H;
extern volatile far  union {
  struct {
    unsigned CSS:8;
  };
  struct {
    unsigned CSS24:1;
    unsigned CSS25:1;
    unsigned CSS26:1;
    unsigned CSS27:1;
    unsigned CSS28:1;
    unsigned CSS29:1;
    unsigned CSS30:1;
  };
} ADCSS1Hbits;
extern volatile far  unsigned char       ADCHS0L;
extern volatile far  union {
  struct {
    unsigned CH0SA:5;
    unsigned CH0NA:3;
  };
  struct {
    unsigned CH0SA0:1;
    unsigned CH0SA1:1;
    unsigned CH0SA2:1;
    unsigned CH0SA3:1;
    unsigned CH0SA4:1;
    unsigned CH0NA0:1;
    unsigned CH0NA1:1;
    unsigned CH0NA2:1;
  };
} ADCHS0Lbits;
extern volatile far  unsigned char       ADCHS0H;
extern volatile far  union {
  struct {
    unsigned CH0SB:5;
    unsigned CH0NB:3;
  };
  struct {
    unsigned CH0SB0:1;
    unsigned CH0SB1:1;
    unsigned CH0SB2:1;
    unsigned CH0SB3:1;
    unsigned CH0SB4:1;
    unsigned CH0NB0:1;
    unsigned CH0NB1:1;
    unsigned CH0NB2:1;
  };
} ADCHS0Hbits;
extern volatile far  unsigned char       ADCON5L;
extern volatile far  union {
  struct {
    unsigned CM:2;
    unsigned WM:2;
  };
  struct {
    unsigned CM0:1;
    unsigned CM1:1;
    unsigned WM0:1;
    unsigned WM1:1;
  };
} ADCON5Lbits;
extern volatile far  unsigned char       ADCON5H;
extern volatile far  union {
  struct {
    unsigned ASINTMD:2;
    unsigned :3;
    unsigned CTMUREQ:1;
    unsigned LPENA:1;
    unsigned ASENA:1;
  };
  struct {
    unsigned ASINTMD0:1;
    unsigned ASINTMD1:1;
  };
} ADCON5Hbits;
extern volatile far  unsigned char       ADCON3L;
extern volatile far  union {
  struct {
    unsigned ADCS:8;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ADCS3:1;
    unsigned ADCS4:1;
    unsigned ADCS5:1;
    unsigned ADCS6:1;
    unsigned ADCS7:1;
  };
} ADCON3Lbits;
extern volatile far  unsigned char       ADCON3H;
extern volatile far  union {
  struct {
    unsigned SAMC:5;
    unsigned PUMPEN:1;
    unsigned EXTSAM:1;
    unsigned ADRC:1;
  };
  struct {
    unsigned SAMC0:1;
    unsigned SAMC1:1;
    unsigned SAMC2:1;
    unsigned SAMC3:1;
    unsigned SAMC4:1;
  };
} ADCON3Hbits;
extern volatile far  unsigned char       ADCON2L;
extern volatile far  union {
  struct {
    unsigned ALTS:1;
    unsigned BUFM:1;
    unsigned SMPI:5;
    unsigned BUFS:1;
  };
  struct {
    unsigned :2;
    unsigned SMPI0:1;
    unsigned SMPI1:1;
    unsigned SMPI2:1;
    unsigned SMPI3:1;
    unsigned SMPI4:1;
  };
} ADCON2Lbits;
extern volatile far  unsigned char       ADCON2H;
extern volatile far  union {
  struct {
    unsigned :2;
    unsigned CSCNA:1;
    unsigned BUFREGEN:1;
    unsigned OFFCAL:1;
    unsigned NVCFG0:1;
    unsigned PVCFG:2;
  };
  struct {
    unsigned :6;
    unsigned PVCFG0:1;
    unsigned PVCFG1:1;
  };
} ADCON2Hbits;
extern volatile far  unsigned char       LCDDATA0;
extern volatile far  struct {
  unsigned S00C0:1;
  unsigned S01C0:1;
  unsigned S02C0:1;
  unsigned S03C0:1;
  unsigned S04C0:1;
  unsigned S05C0:1;
  unsigned S06C0:1;
  unsigned S07C0:1;
} LCDDATA0bits;
extern volatile far  unsigned char       LCDDATA1;
extern volatile far  struct {
  unsigned S08C0:1;
  unsigned S09C0:1;
  unsigned S10C0:1;
  unsigned S11C0:1;
  unsigned S12C0:1;
  unsigned S13C0:1;
  unsigned S14C0:1;
  unsigned S15C0:1;
} LCDDATA1bits;
extern volatile far  unsigned char       LCDDATA2;
extern volatile far  struct {
  unsigned S16C0:1;
  unsigned S17C0:1;
  unsigned S18C0:1;
  unsigned S19C0:1;
  unsigned S20C0:1;
  unsigned S21C0:1;
  unsigned S22C0:1;
  unsigned S23C0:1;
} LCDDATA2bits;
extern volatile far  unsigned char       LCDDATA3;
extern volatile far  struct {
  unsigned S24C0:1;
  unsigned S25C0:1;
  unsigned S26C0:1;
  unsigned S27C0:1;
  unsigned S28C0:1;
  unsigned S29C0:1;
  unsigned S30C0:1;
  unsigned S31C0:1;
} LCDDATA3bits;
extern volatile far  unsigned char       LCDDATA4;
extern volatile far  struct {
  unsigned S32C0:1;
  unsigned S33C0:1;
  unsigned S34C0:1;
  unsigned S35C0:1;
  unsigned S36C0:1;
  unsigned S37C0:1;
  unsigned S38C0:1;
  unsigned S39C0:1;
} LCDDATA4bits;
extern volatile far  unsigned char       LCDDATA5;
extern volatile far  struct {
  unsigned S40C0:1;
  unsigned S41C0:1;
  unsigned S42C0:1;
  unsigned S43C0:1;
  unsigned S44C0:1;
  unsigned S45C0:1;
  unsigned S46C0:1;
  unsigned S47C0:1;
} LCDDATA5bits;
extern volatile far  unsigned char       LCDDATA6;
extern volatile far  struct {
  unsigned S48C0:1;
  unsigned S49C0:1;
  unsigned S50C0:1;
  unsigned S51C0:1;
  unsigned S52C0:1;
  unsigned S53C0:1;
  unsigned S54C0:1;
  unsigned S55C0:1;
} LCDDATA6bits;
extern volatile far  unsigned char       LCDDATA7;
extern volatile far  struct {
  unsigned S56C0:1;
  unsigned S57C0:1;
  unsigned S58C0:1;
  unsigned S59C0:1;
  unsigned S60C0:1;
  unsigned S61C0:1;
  unsigned S62C0:1;
  unsigned S63C0:1;
} LCDDATA7bits;
extern volatile far  unsigned char       LCDDATA8;
extern volatile far  struct {
  unsigned S00C1:1;
  unsigned S01C1:1;
  unsigned S02C1:1;
  unsigned S03C1:1;
  unsigned S04C1:1;
  unsigned S05C1:1;
  unsigned S06C1:1;
  unsigned S07C1:1;
} LCDDATA8bits;
extern volatile far  unsigned char       LCDDATA9;
extern volatile far  struct {
  unsigned S08C1:1;
  unsigned S09C1:1;
  unsigned S10C1:1;
  unsigned S11C1:1;
  unsigned S12C1:1;
  unsigned S13C1:1;
  unsigned S14C1:1;
  unsigned S15C1:1;
} LCDDATA9bits;
extern volatile far  unsigned char       LCDDATA10;
extern volatile far  struct {
  unsigned S16C1:1;
  unsigned S17C1:1;
  unsigned S18C1:1;
  unsigned S19C1:1;
  unsigned S20C1:1;
  unsigned S21C1:1;
  unsigned S22C1:1;
  unsigned S23C1:1;
} LCDDATA10bits;
extern volatile far  unsigned char       LCDDATA11;
extern volatile far  struct {
  unsigned S24C1:1;
  unsigned S25C1:1;
  unsigned S26C1:1;
  unsigned S27C1:1;
  unsigned S28C1:1;
  unsigned S29C1:1;
  unsigned S30C1:1;
  unsigned S31C1:1;
} LCDDATA11bits;
extern volatile far  unsigned char       LCDDATA12;
extern volatile far  struct {
  unsigned S32C1:1;
  unsigned S33C1:1;
  unsigned S34C1:1;
  unsigned S35C1:1;
  unsigned S36C1:1;
  unsigned S37C1:1;
  unsigned S38C1:1;
  unsigned S39C1:1;
} LCDDATA12bits;
extern volatile far  unsigned char       LCDDATA13;
extern volatile far  struct {
  unsigned S40C1:1;
  unsigned S41C1:1;
  unsigned S42C1:1;
  unsigned S43C1:1;
  unsigned S44C1:1;
  unsigned S45C1:1;
  unsigned S46C1:1;
  unsigned S47C1:1;
} LCDDATA13bits;
extern volatile far  unsigned char       LCDDATA14;
extern volatile far  struct {
  unsigned S48C1:1;
  unsigned S49C1:1;
  unsigned S50C1:1;
  unsigned S51C1:1;
  unsigned S52C1:1;
  unsigned S53C1:1;
  unsigned S54C1:1;
  unsigned S55C1:1;
} LCDDATA14bits;
extern volatile far  unsigned char       LCDDATA15;
extern volatile far  struct {
  unsigned S56C1:1;
  unsigned S57C1:1;
  unsigned S58C1:1;
  unsigned S59C1:1;
  unsigned S60C1:1;
  unsigned S61C1:1;
  unsigned S62C1:1;
  unsigned S63C1:1;
} LCDDATA15bits;
extern volatile far  unsigned char       LCDDATA16;
extern volatile far  struct {
  unsigned S00C2:1;
  unsigned S01C2:1;
  unsigned S02C2:1;
  unsigned S03C2:1;
  unsigned S04C2:1;
  unsigned S05C2:1;
  unsigned S06C2:1;
  unsigned S07C2:1;
} LCDDATA16bits;
extern volatile far  unsigned char       LCDDATA17;
extern volatile far  struct {
  unsigned S08C2:1;
  unsigned S09C2:1;
  unsigned S10C2:1;
  unsigned S11C2:1;
  unsigned S12C2:1;
  unsigned S13C2:1;
  unsigned S14C2:1;
  unsigned S15C2:1;
} LCDDATA17bits;
extern volatile far  unsigned char       LCDDATA18;
extern volatile far  struct {
  unsigned S16C2:1;
  unsigned S17C2:1;
  unsigned S18C2:1;
  unsigned S19C2:1;
  unsigned S20C2:1;
  unsigned S21C2:1;
  unsigned S22C2:1;
  unsigned S23C2:1;
} LCDDATA18bits;
extern volatile far  unsigned char       LCDDATA19;
extern volatile far  struct {
  unsigned S24C2:1;
  unsigned S25C2:1;
  unsigned S26C2:1;
  unsigned S27C2:1;
  unsigned S28C2:1;
  unsigned S29C2:1;
  unsigned S30C2:1;
  unsigned S31C2:1;
} LCDDATA19bits;
extern volatile far  unsigned char       LCDDATA20;
extern volatile far  struct {
  unsigned S32C2:1;
  unsigned S33C2:1;
  unsigned S34C2:1;
  unsigned S35C2:1;
  unsigned S36C2:1;
  unsigned S37C2:1;
  unsigned S38C2:1;
  unsigned S39C2:1;
} LCDDATA20bits;
extern volatile far  unsigned char       LCDDATA21;
extern volatile far  struct {
  unsigned S40C2:1;
  unsigned S41C2:1;
  unsigned S42C2:1;
  unsigned S43C2:1;
  unsigned S44C2:1;
  unsigned S45C2:1;
  unsigned S46C2:1;
  unsigned S47C2:1;
} LCDDATA21bits;
extern volatile far  unsigned char       LCDDATA22;
extern volatile far  struct {
  unsigned S48C2:1;
  unsigned S49C2:1;
  unsigned S50C2:1;
  unsigned S51C2:1;
  unsigned S52C2:1;
  unsigned S53C2:1;
  unsigned S54C2:1;
  unsigned S55C2:1;
} LCDDATA22bits;
extern volatile far  unsigned char       LCDDATA23;
extern volatile far  struct {
  unsigned S56C2:1;
  unsigned S57C2:1;
  unsigned S58C2:1;
  unsigned S59C2:1;
  unsigned S60C2:1;
  unsigned S61C2:1;
  unsigned S62C2:1;
  unsigned S63C2:1;
} LCDDATA23bits;
extern volatile far  unsigned char       LCDDATA24;
extern volatile far  struct {
  unsigned S00C3:1;
  unsigned S01C3:1;
  unsigned S02C3:1;
  unsigned S03C3:1;
  unsigned S04C3:1;
  unsigned S05C3:1;
  unsigned S06C3:1;
  unsigned S07C3:1;
} LCDDATA24bits;
extern volatile far  unsigned char       LCDDATA25;
extern volatile far  struct {
  unsigned S08C3:1;
  unsigned S09C3:1;
  unsigned S10C3:1;
  unsigned S11C3:1;
  unsigned S12C3:1;
  unsigned S13C3:1;
  unsigned S14C3:1;
  unsigned S15C3:1;
} LCDDATA25bits;
extern volatile far  unsigned char       LCDDATA26;
extern volatile far  struct {
  unsigned S16C3:1;
  unsigned S17C3:1;
  unsigned S18C3:1;
  unsigned S19C3:1;
  unsigned S20C3:1;
  unsigned S21C3:1;
  unsigned S22C3:1;
  unsigned S23C3:1;
} LCDDATA26bits;
extern volatile far  unsigned char       LCDDATA27;
extern volatile far  struct {
  unsigned S24C3:1;
  unsigned S25C3:1;
  unsigned S26C3:1;
  unsigned S27C3:1;
  unsigned S28C3:1;
  unsigned S29C3:1;
  unsigned S30C3:1;
  unsigned S31C3:1;
} LCDDATA27bits;
extern volatile far  unsigned char       LCDDATA28;
extern volatile far  struct {
  unsigned S32C3:1;
  unsigned S33C3:1;
  unsigned S34C3:1;
  unsigned S35C3:1;
  unsigned S36C3:1;
  unsigned S37C3:1;
  unsigned S38C3:1;
  unsigned S39C3:1;
} LCDDATA28bits;
extern volatile far  unsigned char       LCDDATA29;
extern volatile far  struct {
  unsigned S40C3:1;
  unsigned S41C3:1;
  unsigned S42C3:1;
  unsigned S43C3:1;
  unsigned S44C3:1;
  unsigned S45C3:1;
  unsigned S46C3:1;
  unsigned S47C3:1;
} LCDDATA29bits;
extern volatile far  unsigned char       LCDDATA30;
extern volatile far  struct {
  unsigned S48C3:1;
  unsigned S49C3:1;
  unsigned S50C3:1;
  unsigned S51C3:1;
  unsigned S52C3:1;
  unsigned S53C3:1;
  unsigned S54C3:1;
  unsigned S55C3:1;
} LCDDATA30bits;
extern volatile far  unsigned char       LCDDATA31;
extern volatile far  struct {
  unsigned S56C3:1;
  unsigned S57C3:1;
  unsigned S58C3:1;
  unsigned S59C3:1;
  unsigned S60C3:1;
  unsigned S61C3:1;
  unsigned S62C3:1;
  unsigned S63C3:1;
} LCDDATA31bits;
extern volatile far  unsigned char       LCDDATA32;
extern volatile far  struct {
  unsigned S00C4:1;
  unsigned S01C4:1;
  unsigned S02C4:1;
  unsigned S03C4:1;
  unsigned S04C4:1;
  unsigned S05C4:1;
  unsigned S06C4:1;
  unsigned S07C4:1;
} LCDDATA32bits;
extern volatile far  unsigned char       LCDDATA33;
extern volatile far  struct {
  unsigned S08C4:1;
  unsigned S09C4:1;
  unsigned S10C4:1;
  unsigned S11C4:1;
  unsigned S12C4:1;
  unsigned S13C4:1;
  unsigned S14C4:1;
  unsigned S15C4:1;
} LCDDATA33bits;
extern volatile far  unsigned char       LCDDATA34;
extern volatile far  struct {
  unsigned S16C4:1;
  unsigned S17C4:1;
  unsigned S18C4:1;
  unsigned S19C4:1;
  unsigned S20C4:1;
  unsigned S21C4:1;
  unsigned S22C4:1;
  unsigned S23C4:1;
} LCDDATA34bits;
extern volatile far  unsigned char       LCDDATA35;
extern volatile far  struct {
  unsigned S24C4:1;
  unsigned S25C4:1;
  unsigned S26C4:1;
  unsigned S27C4:1;
  unsigned S28C4:1;
  unsigned S29C4:1;
  unsigned S30C4:1;
  unsigned S31C4:1;
} LCDDATA35bits;
extern volatile far  unsigned char       LCDDATA36;
extern volatile far  struct {
  unsigned S32C4:1;
  unsigned S33C4:1;
  unsigned S34C4:1;
  unsigned S35C4:1;
  unsigned S36C4:1;
  unsigned S37C4:1;
  unsigned S38C4:1;
  unsigned S39C4:1;
} LCDDATA36bits;
extern volatile far  unsigned char       LCDDATA37;
extern volatile far  struct {
  unsigned S40C4:1;
  unsigned S41C4:1;
  unsigned S42C4:1;
  unsigned S43C4:1;
  unsigned S44C4:1;
  unsigned S45C4:1;
  unsigned S46C4:1;
  unsigned S47C4:1;
} LCDDATA37bits;
extern volatile far  unsigned char       LCDDATA38;
extern volatile far  struct {
  unsigned S48C4:1;
  unsigned S49C4:1;
  unsigned S50C4:1;
  unsigned S51C4:1;
  unsigned S52C4:1;
  unsigned S53C4:1;
  unsigned S54C4:1;
  unsigned S55C4:1;
} LCDDATA38bits;
extern volatile far  unsigned char       LCDDATA39;
extern volatile far  struct {
  unsigned S56C4:1;
  unsigned S57C4:1;
  unsigned S58C4:1;
  unsigned S59C4:1;
  unsigned S60C4:1;
  unsigned S61C4:1;
  unsigned S62C4:1;
  unsigned S63C4:1;
} LCDDATA39bits;
extern volatile far  unsigned char       LCDDATA40;
extern volatile far  struct {
  unsigned S00C5:1;
  unsigned S01C5:1;
  unsigned S02C5:1;
  unsigned S03C5:1;
  unsigned S04C5:1;
  unsigned S05C5:1;
  unsigned S06C5:1;
  unsigned S07C5:1;
} LCDDATA40bits;
extern volatile far  unsigned char       LCDDATA41;
extern volatile far  struct {
  unsigned S08C5:1;
  unsigned S09C5:1;
  unsigned S10C5:1;
  unsigned S11C5:1;
  unsigned S12C5:1;
  unsigned S13C5:1;
  unsigned S14C5:1;
  unsigned S15C5:1;
} LCDDATA41bits;
extern volatile far  unsigned char       LCDDATA42;
extern volatile far  struct {
  unsigned S16C5:1;
  unsigned S17C5:1;
  unsigned S18C5:1;
  unsigned S19C5:1;
  unsigned S20C5:1;
  unsigned S21C5:1;
  unsigned S22C5:1;
  unsigned S23C5:1;
} LCDDATA42bits;
extern volatile far  unsigned char       LCDDATA43;
extern volatile far  struct {
  unsigned S24C5:1;
  unsigned S25C5:1;
  unsigned S26C5:1;
  unsigned S27C5:1;
  unsigned S28C5:1;
  unsigned S29C5:1;
  unsigned S30C5:1;
  unsigned S31C5:1;
} LCDDATA43bits;
extern volatile far  unsigned char       LCDDATA44;
extern volatile far  struct {
  unsigned S32C5:1;
  unsigned S33C5:1;
  unsigned S34C5:1;
  unsigned S35C5:1;
  unsigned S36C5:1;
  unsigned S37C5:1;
  unsigned S38C5:1;
  unsigned S39C5:1;
} LCDDATA44bits;
extern volatile far  unsigned char       LCDDATA45;
extern volatile far  struct {
  unsigned S40C5:1;
  unsigned S41C5:1;
  unsigned S42C5:1;
  unsigned S43C5:1;
  unsigned S44C5:1;
  unsigned S45C5:1;
  unsigned S46C5:1;
  unsigned S47C5:1;
} LCDDATA45bits;
extern volatile far  unsigned char       LCDDATA46;
extern volatile far  struct {
  unsigned S48C5:1;
  unsigned S49C5:1;
  unsigned S50C5:1;
  unsigned S51C5:1;
  unsigned S52C5:1;
  unsigned S53C5:1;
  unsigned S54C5:1;
  unsigned S55C5:1;
} LCDDATA46bits;
extern volatile far  unsigned char       LCDDATA47;
extern volatile far  struct {
  unsigned S56C5:1;
  unsigned S57C5:1;
  unsigned S58C5:1;
  unsigned S59C5:1;
  unsigned S60C5:1;
  unsigned S61C5:1;
  unsigned S62C5:1;
  unsigned S63C5:1;
} LCDDATA47bits;
extern volatile far  unsigned char       LCDDATA48;
extern volatile far  struct {
  unsigned S00C6:1;
  unsigned S01C6:1;
  unsigned S02C6:1;
  unsigned S03C6:1;
  unsigned S04C6:1;
  unsigned S05C6:1;
  unsigned S06C6:1;
  unsigned S07C6:1;
} LCDDATA48bits;
extern volatile far  unsigned char       LCDDATA49;
extern volatile far  struct {
  unsigned S08C6:1;
  unsigned S09C6:1;
  unsigned S10C6:1;
  unsigned S11C6:1;
  unsigned S12C6:1;
  unsigned S13C6:1;
  unsigned S14C6:1;
  unsigned S15C6:1;
} LCDDATA49bits;
extern volatile far  unsigned char       LCDDATA50;
extern volatile far  struct {
  unsigned S16C6:1;
  unsigned S17C6:1;
  unsigned S18C6:1;
  unsigned S19C6:1;
  unsigned S20C6:1;
  unsigned S21C6:1;
  unsigned S22C6:1;
  unsigned S23C6:1;
} LCDDATA50bits;
extern volatile far  unsigned char       LCDDATA51;
extern volatile far  struct {
  unsigned S24C6:1;
  unsigned S25C6:1;
  unsigned S26C6:1;
  unsigned S27C6:1;
  unsigned S28C6:1;
  unsigned S29C6:1;
  unsigned S30C6:1;
  unsigned S31C6:1;
} LCDDATA51bits;
extern volatile far  unsigned char       LCDDATA52;
extern volatile far  struct {
  unsigned S32C6:1;
  unsigned S33C6:1;
  unsigned S34C6:1;
  unsigned S35C6:1;
  unsigned S36C6:1;
  unsigned S37C6:1;
  unsigned S38C6:1;
  unsigned S39C6:1;
} LCDDATA52bits;
extern volatile far  unsigned char       LCDDATA53;
extern volatile far  struct {
  unsigned S40C6:1;
  unsigned S41C6:1;
  unsigned S42C6:1;
  unsigned S43C6:1;
  unsigned S44C6:1;
  unsigned S45C6:1;
  unsigned S46C6:1;
  unsigned S47C6:1;
} LCDDATA53bits;
extern volatile far  unsigned char       LCDDATA54;
extern volatile far  struct {
  unsigned S48C6:1;
  unsigned S49C6:1;
  unsigned S50C6:1;
  unsigned S51C6:1;
  unsigned S52C6:1;
  unsigned S53C6:1;
  unsigned S54C6:1;
  unsigned S55C6:1;
} LCDDATA54bits;
extern volatile far  unsigned char       LCDDATA55;
extern volatile far  struct {
  unsigned S56C6:1;
  unsigned S57C6:1;
  unsigned S58C6:1;
  unsigned S59C6:1;
  unsigned S60C6:1;
  unsigned S61C6:1;
  unsigned S62C6:1;
  unsigned S63C6:1;
} LCDDATA55bits;
extern volatile far  unsigned char       LCDDATA56;
extern volatile far  struct {
  unsigned S00C7:1;
  unsigned S01C7:1;
  unsigned S02C7:1;
  unsigned S03C7:1;
  unsigned S04C7:1;
  unsigned S05C7:1;
  unsigned S06C7:1;
  unsigned S07C7:1;
} LCDDATA56bits;
extern volatile far  unsigned char       LCDDATA57;
extern volatile far  struct {
  unsigned S08C7:1;
  unsigned S09C7:1;
  unsigned S10C7:1;
  unsigned S11C7:1;
  unsigned S12C7:1;
  unsigned S13C7:1;
  unsigned S14C7:1;
  unsigned S15C7:1;
} LCDDATA57bits;
extern volatile far  unsigned char       LCDDATA58;
extern volatile far  struct {
  unsigned S16C7:1;
  unsigned S17C7:1;
  unsigned S18C7:1;
  unsigned S19C7:1;
  unsigned S20C7:1;
  unsigned S21C7:1;
  unsigned S22C7:1;
  unsigned S23C7:1;
} LCDDATA58bits;
extern volatile far  unsigned char       LCDDATA59;
extern volatile far  struct {
  unsigned S24C7:1;
  unsigned S25C7:1;
  unsigned S26C7:1;
  unsigned S27C7:1;
  unsigned S28C7:1;
  unsigned S29C7:1;
  unsigned S30C7:1;
  unsigned S31C7:1;
} LCDDATA59bits;
extern volatile far  unsigned char       LCDDATA60;
extern volatile far  struct {
  unsigned S32C7:1;
  unsigned S33C7:1;
  unsigned S34C7:1;
  unsigned S35C7:1;
  unsigned S36C7:1;
  unsigned S37C7:1;
  unsigned S38C7:1;
  unsigned S39C7:1;
} LCDDATA60bits;
extern volatile far  unsigned char       LCDDATA61;
extern volatile far  struct {
  unsigned S40C7:1;
  unsigned S41C7:1;
  unsigned S42C7:1;
  unsigned S43C7:1;
  unsigned S44C7:1;
  unsigned S45C7:1;
  unsigned S46C7:1;
  unsigned S47C7:1;
} LCDDATA61bits;
extern volatile far  unsigned char       LCDDATA62;
extern volatile far  struct {
  unsigned S48C7:1;
  unsigned S49C7:1;
  unsigned S50C7:1;
  unsigned S51C7:1;
  unsigned S52C7:1;
  unsigned S53C7:1;
  unsigned S54C7:1;
  unsigned S55C7:1;
} LCDDATA62bits;
extern volatile far  unsigned char       LCDDATA63;
extern volatile far  struct {
  unsigned S56C7:1;
  unsigned S57C7:1;
  unsigned S58C7:1;
  unsigned S59C7:1;
  unsigned S60C7:1;
  unsigned S61C7:1;
  unsigned S62C7:1;
  unsigned S63C7:1;
} LCDDATA63bits;
extern volatile far  unsigned char       LCDSE0;
extern volatile far  struct {
  unsigned SE00:1;
  unsigned SE01:1;
  unsigned SE02:1;
  unsigned SE03:1;
  unsigned SE04:1;
  unsigned SE05:1;
  unsigned SE06:1;
  unsigned SE07:1;
} LCDSE0bits;
extern volatile far  unsigned char       LCDSE1;
extern volatile far  struct {
  unsigned SE08:1;
  unsigned SE09:1;
  unsigned SE10:1;
  unsigned SE11:1;
  unsigned SE12:1;
  unsigned SE13:1;
  unsigned SE14:1;
  unsigned SE15:1;
} LCDSE1bits;
extern volatile far  unsigned char       LCDSE2;
extern volatile far  struct {
  unsigned SE16:1;
  unsigned SE17:1;
  unsigned SE18:1;
  unsigned SE19:1;
  unsigned SE20:1;
  unsigned SE21:1;
  unsigned SE22:1;
  unsigned SE23:1;
} LCDSE2bits;
extern volatile far  unsigned char       LCDSE3;
extern volatile far  struct {
  unsigned SE24:1;
  unsigned SE25:1;
  unsigned SE26:1;
  unsigned SE27:1;
  unsigned SE28:1;
  unsigned SE29:1;
  unsigned SE30:1;
  unsigned SE31:1;
} LCDSE3bits;
extern volatile far  unsigned char       LCDSE4;
extern volatile far  struct {
  unsigned SE32:1;
  unsigned SE33:1;
  unsigned SE34:1;
  unsigned SE35:1;
  unsigned SE36:1;
  unsigned SE37:1;
  unsigned SE38:1;
  unsigned SE39:1;
} LCDSE4bits;
extern volatile far  unsigned char       LCDSE5;
extern volatile far  struct {
  unsigned SE40:1;
  unsigned SE41:1;
  unsigned SE42:1;
  unsigned SE43:1;
  unsigned SE44:1;
  unsigned SE45:1;
  unsigned SE46:1;
  unsigned SE47:1;
} LCDSE5bits;
extern volatile far  unsigned char       LCDSE6;
extern volatile far  struct {
  unsigned SE48:1;
  unsigned SE49:1;
  unsigned SE50:1;
  unsigned SE51:1;
  unsigned SE52:1;
  unsigned SE53:1;
  unsigned SE54:1;
  unsigned SE55:1;
} LCDSE6bits;
extern volatile far  unsigned char       LCDSE7;
extern volatile far  struct {
  unsigned SE56:1;
  unsigned SE57:1;
  unsigned SE58:1;
  unsigned SE59:1;
  unsigned SE60:1;
  unsigned SE61:1;
  unsigned SE62:1;
  unsigned SE63:1;
} LCDSE7bits;
extern volatile far  unsigned char       LCDRL;
extern volatile far  union {
  struct {
    unsigned LRLAT:3;
    unsigned :1;
    unsigned LRLBP:2;
    unsigned LRLAP:2;
  };
  struct {
    unsigned LRLAT0:1;
    unsigned LRLAT1:1;
    unsigned LRLAT2:1;
    unsigned :1;
    unsigned LRLBP0:1;
    unsigned LRLBP1:1;
    unsigned LRLAP0:1;
    unsigned LRLAP1:1;
  };
} LCDRLbits;
extern volatile far  unsigned char       LCDREF;
extern volatile far  union {
  struct {
    unsigned VLCD1PE:1;
    unsigned VLCD2PE:1;
    unsigned VLCD3PE:1;
    unsigned LCDCST:3;
    unsigned :1;
    unsigned LCDIRE:1;
  };
  struct {
    unsigned :3;
    unsigned LCDCST0:1;
    unsigned LCDCST1:1;
    unsigned LCDCST2:1;
  };
} LCDREFbits;
extern volatile far  unsigned char       LCDREG;
extern volatile far  union {
  struct {
    unsigned CLKSEL:2;
    unsigned MODE13:1;
    unsigned BIAS:3;
    unsigned :1;
    unsigned CPEN:1;
  };
  struct {
    unsigned CLKSEL0:1;
    unsigned CLKSEL1:1;
    unsigned :1;
    unsigned BIAS0:1;
    unsigned BIAS1:1;
    unsigned BIAS2:1;
  };
} LCDREGbits;
extern volatile far  unsigned char       LCDCON;
extern volatile far  union {
  struct {
    unsigned LMUX:3;
    unsigned CS:2;
    unsigned WERR:1;
    unsigned SLPEN:1;
    unsigned LCDEN:1;
  };
  struct {
    unsigned LMUX0:1;
    unsigned LMUX1:1;
    unsigned LMUX2:1;
    unsigned CS0:1;
    unsigned CS1:1;
  };
} LCDCONbits;
extern volatile far  unsigned char       LCDPS;
extern volatile far  union {
  struct {
    unsigned LP:4;
    unsigned WA:1;
    unsigned LCDA:1;
    unsigned BIASMD:1;
    unsigned WFT:1;
  };
  struct {
    unsigned LP0:1;
    unsigned LP1:1;
    unsigned LP2:1;
    unsigned LP3:1;
  };
} LCDPSbits;
extern volatile far  unsigned char       REFO2CON3;
extern volatile far  union {
  struct {
    unsigned RODIV:7;
  };
  struct {
    unsigned RODIV8:1;
    unsigned RODIV9:1;
    unsigned RODIV10:1;
    unsigned RODIV11:1;
    unsigned RODIV12:1;
    unsigned RODIV13:1;
    unsigned RODIV14:1;
  };
} REFO2CON3bits;
extern volatile far  unsigned char       REFO2CON2;
extern volatile far  union {
  struct {
    unsigned RODIV:8;
  };
  struct {
    unsigned RODIV0:1;
    unsigned RODIV1:1;
    unsigned RODIV2:1;
    unsigned RODIV3:1;
    unsigned RODIV4:1;
    unsigned RODIV5:1;
    unsigned RODIV6:1;
    unsigned RODIV7:1;
  };
} REFO2CON2bits;
extern volatile far  unsigned char       REFO2CON1;
extern volatile far  union {
  struct {
    unsigned ROSEL:4;
  };
  struct {
    unsigned ROSEL0:1;
    unsigned ROSEL1:1;
    unsigned ROSEL2:1;
    unsigned ROSEL3:1;
  };
} REFO2CON1bits;
extern volatile far  unsigned char       REFO2CON;
extern volatile far  struct {
  unsigned ACTIVE:1;
  unsigned DIVSWEN:1;
  unsigned :1;
  unsigned ROSSLP:1;
  unsigned ROOE:1;
  unsigned ROSIDL:1;
  unsigned :1;
  unsigned ROON:1;
} REFO2CONbits;
extern volatile far  unsigned char       REFO1CON3;
extern volatile far  union {
  struct {
    unsigned RODIV:7;
  };
  struct {
    unsigned RODIV8:1;
    unsigned RODIV9:1;
    unsigned RODIV10:1;
    unsigned RODIV11:1;
    unsigned RODIV12:1;
    unsigned RODIV13:1;
    unsigned RODIV14:1;
  };
} REFO1CON3bits;
extern volatile far  unsigned char       REFO1CON2;
extern volatile far  union {
  struct {
    unsigned RODIV:8;
  };
  struct {
    unsigned RODIV0:1;
    unsigned RODIV1:1;
    unsigned RODIV2:1;
    unsigned RODIV3:1;
    unsigned RODIV4:1;
    unsigned RODIV5:1;
    unsigned RODIV6:1;
    unsigned RODIV7:1;
  };
} REFO1CON2bits;
extern volatile far  unsigned char       REFO1CON1;
extern volatile far  union {
  struct {
    unsigned ROSEL:4;
  };
  struct {
    unsigned ROSEL0:1;
    unsigned ROSEL1:1;
    unsigned ROSEL2:1;
    unsigned ROSEL3:1;
  };
} REFO1CON1bits;
extern volatile far  unsigned char       REFO1CON;
extern volatile far  struct {
  unsigned ACTIVE:1;
  unsigned DIVSWEN:1;
  unsigned :1;
  unsigned ROSSLP:1;
  unsigned ROOE:1;
  unsigned ROSIDL:1;
  unsigned :1;
  unsigned ROON:1;
} REFO1CONbits;
extern volatile far  unsigned char       ODCON2;
extern volatile far  struct {
  unsigned ECCP3OD:1;
  unsigned CCP4OD:1;
  unsigned CCP5OD:1;
  unsigned CCP6OD:1;
  unsigned CCP7OD:1;
  unsigned CCP8OD:1;
  unsigned CCP9OD:1;
  unsigned CCP10OD:1;
} ODCON2bits;
extern volatile far  unsigned char       ODCON1;
extern volatile far  struct {
  unsigned SSP1OD:1;
  unsigned SSP2OD:1;
  unsigned USART1OD:1;
  unsigned USART2OD:1;
  unsigned USART3OD:1;
  unsigned USART4OD:1;
  unsigned ECCP1OD:1;
  unsigned ECCP2OD:1;
} ODCON1bits;
extern volatile far  unsigned char       MDCARL;
extern volatile far  union {
  struct {
    unsigned MDCL:4;
    unsigned :1;
    unsigned MDCLSYNC:1;
    unsigned MDCLPOL:1;
    unsigned MDCLODIS:1;
  };
  struct {
    unsigned MDCL0:1;
    unsigned MDCL1:1;
    unsigned MDCL2:1;
    unsigned MDCL3:1;
  };
} MDCARLbits;
extern volatile far  unsigned char       MDCARH;
extern volatile far  union {
  struct {
    unsigned MDCH:4;
    unsigned :1;
    unsigned MDCHSYNC:1;
    unsigned MDCHPOL:1;
    unsigned MDCHODIS:1;
  };
  struct {
    unsigned MDCH0:1;
    unsigned MDCH1:1;
    unsigned MDCH2:1;
    unsigned MDCH3:1;
  };
} MDCARHbits;
extern volatile far  unsigned char       MDSRC;
extern volatile far  union {
  struct {
    unsigned MDSRC:4;
    unsigned :3;
    unsigned MDSODIS:1;
  };
  struct {
    unsigned MDSRC0:1;
    unsigned MDSRC1:1;
    unsigned MDSRC2:1;
    unsigned MDSRC3:1;
  };
} MDSRCbits;
extern volatile far  unsigned char       MDCON;
extern volatile far  struct {
  unsigned MDBIT:1;
  unsigned :2;
  unsigned MDO:1;
  unsigned MDOPOL:1;
  unsigned MDSLR:1;
  unsigned MDOE:1;
  unsigned MDEN:1;
} MDCONbits;
extern volatile far  unsigned char       PMD4;
extern volatile far  struct {
  unsigned EMBMD:1;
  unsigned :1;
  unsigned LVDMD:1;
  unsigned IOCMD:1;
  unsigned USBMD:1;
  unsigned CMP3MD:1;
  unsigned CMP2MD:1;
  unsigned CMP1MD:1;
} PMD4bits;
extern volatile far  unsigned char       PMD3;
extern volatile far  union {
  struct {
    unsigned REFO2MD:1;
    unsigned REFO1MD:1;
    unsigned PSPMD:1;
    unsigned LCDMD:1;
    unsigned RTCCMD:1;
    unsigned ADCMD:1;
    unsigned CTMUMD:1;
    unsigned MODMD:1;
  };
  struct {
    unsigned :7;
    unsigned TXMMD:1;
  };
} PMD3bits;
extern volatile far  unsigned char       PMD2;
extern volatile far  struct {
  unsigned TMR0MD:1;
  unsigned TMR1MD:1;
  unsigned TMR2MD:1;
  unsigned TMR3MD:1;
  unsigned TMR4MD:1;
  unsigned TMR5MD:1;
  unsigned TMR6MD:1;
  unsigned TMR8MD:1;
} PMD2bits;
extern volatile far  unsigned char       PMD1;
extern volatile far  struct {
  unsigned SSP1MD:1;
  unsigned SSP2MD:1;
  unsigned UART1MD:1;
  unsigned UART2MD:1;
  unsigned UART3MD:1;
  unsigned UART4MD:1;
  unsigned ECCP1MD:1;
  unsigned ECCP2MD:1;
} PMD1bits;
extern volatile far  unsigned char       PMD0;
extern volatile far  struct {
  unsigned ECCP3MD:1;
  unsigned CCP4MD:1;
  unsigned CCP5MD:1;
  unsigned CCP6MD:1;
  unsigned CCP7MD:1;
  unsigned CCP8MD:1;
  unsigned CCP9MD:1;
  unsigned CCP10MD:1;
} PMD0bits;
extern volatile far  unsigned char       CTMUCON4;
extern volatile far  union {
  struct {
    unsigned EDG1STAT:1;
    unsigned EDG2STAT:1;
    unsigned EDG1SEL:4;
    unsigned EDG1POL:1;
    unsigned EDG1EN:1;
  };
  struct {
    unsigned :2;
    unsigned EDG1SEL0:1;
    unsigned EDG1SEL1:1;
    unsigned EDG1SEL2:1;
    unsigned EDG1SEL3:1;
  };
} CTMUCON4bits;
extern volatile far  unsigned char       CTMUCON3;
extern volatile far  union {
  struct {
    unsigned :2;
    unsigned EDG2SEL:4;
    unsigned EDG2POL:1;
    unsigned EDG2EN:1;
  };
  struct {
    unsigned :2;
    unsigned EDG2SEL0:1;
    unsigned EDG2SEL1:1;
    unsigned EDG2SEL2:1;
    unsigned EDG2SEL3:1;
  };
} CTMUCON3bits;
extern volatile far  unsigned char       CTMUCON2;
extern volatile far  union {
  struct {
    unsigned IRNG:2;
    unsigned ITRIM:6;
  };
  struct {
    unsigned IRNG0:1;
    unsigned IRNG1:1;
    unsigned ITRIM0:1;
    unsigned ITRIM1:1;
    unsigned ITRIM2:1;
    unsigned ITRIM3:1;
    unsigned ITRIM4:1;
    unsigned ITRIM5:1;
  };
} CTMUCON2bits;
extern volatile far  unsigned char       CTMUCON1;
extern volatile far  struct {
  unsigned CTTRIG:1;
  unsigned IDISSEN:1;
  unsigned EDGSEQEN:1;
  unsigned EDGEN:1;
  unsigned TGEN:1;
  unsigned CTMUSIDL:1;
  unsigned :1;
  unsigned CTMUEN:1;
} CTMUCON1bits;
extern volatile far  unsigned char       TXREG4;
extern volatile far  unsigned char       RCREG4;
extern volatile far  unsigned char       SPBRG4;
extern volatile far  union {
  struct {
    unsigned SPBRG4:8;
  };
  struct {
    unsigned BRG0:1;
    unsigned BRG1:1;
    unsigned BRG2:1;
    unsigned BRG3:1;
    unsigned BRG4:1;
    unsigned BRG5:1;
    unsigned BRG6:1;
    unsigned BRG7:1;
  };
} SPBRG4bits;
extern volatile far  unsigned char       SPBRGH4;
extern volatile far  union {
  struct {
    unsigned SPBRGH4:8;
  };
  struct {
    unsigned BRG8:1;
    unsigned BRG9:1;
    unsigned BRG10:1;
    unsigned BRG11:1;
    unsigned BRG12:1;
    unsigned BRG13:1;
    unsigned BRG14:1;
    unsigned BRG15:1;
  };
} SPBRGH4bits;
extern volatile far  unsigned char       BAUDCON4;
extern volatile far  struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned IREN:1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCON4bits;
extern volatile far  unsigned char       TXSTA4;
extern volatile far  struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTA4bits;
extern volatile far  unsigned char       RCSTA4;
extern volatile far  struct {
  unsigned RX9D:1;
  unsigned OERR:1;
  unsigned FERR:1;
  unsigned ADDEN:1;
  unsigned CREN:1;
  unsigned SREN:1;
  unsigned RX9:1;
  unsigned SPEN:1;
} RCSTA4bits;
extern volatile far  unsigned char       DMACON2;
extern volatile far  union {
  struct {
    unsigned INTLVL:4;
    unsigned DLYCYC:4;
  };
  struct {
    unsigned INTLVL0:1;
    unsigned INTLVL1:1;
    unsigned INTLVL2:1;
    unsigned INTLVL3:1;
    unsigned DLYCYC0:1;
    unsigned DLYCYC1:1;
    unsigned DLYCYC2:1;
    unsigned DLYCYC3:1;
  };
} DMACON2bits;
extern volatile far  unsigned char       ANCFG;
extern volatile far  struct {
  unsigned VBGEN:1;
  unsigned VBG2EN:1;
  unsigned VBG6EN:1;
} ANCFGbits;
extern volatile far  unsigned char       SSP2ADD;
extern volatile far  unsigned char       SSP2BUF;
extern volatile far  unsigned char       T4CON;
extern volatile far  union {
  struct {
    unsigned T4CKPS:2;
    unsigned TMR4ON:1;
    unsigned T4OUTPS:4;
  };
  struct {
    unsigned T4CKPS0:1;
    unsigned T4CKPS1:1;
    unsigned :1;
    unsigned T4OUTPS0:1;
    unsigned T4OUTPS1:1;
    unsigned T4OUTPS2:1;
    unsigned T4OUTPS3:1;
  };
} T4CONbits;
extern volatile far  unsigned char       PR4;
extern volatile far  unsigned char       TMR4;
extern volatile far  unsigned char       CCP7CON;
extern volatile far  union {
  struct {
    unsigned CCP7M:4;
    unsigned DC7B:2;
  };
  struct {
    unsigned CCP7M0:1;
    unsigned CCP7M1:1;
    unsigned CCP7M2:1;
    unsigned CCP7M3:1;
    unsigned DC7B0:1;
    unsigned DC7B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP7Y:1;
    unsigned CCP7X:1;
  };
} CCP7CONbits;
extern volatile far  unsigned            CCPR7;
extern volatile far  unsigned char       CCPR7L;
extern volatile far  unsigned char       CCPR7H;
extern volatile far  unsigned char       CCP6CON;
extern volatile far  union {
  struct {
    unsigned CCP6M:4;
    unsigned DC6B:2;
  };
  struct {
    unsigned CCP6M0:1;
    unsigned CCP6M1:1;
    unsigned CCP6M2:1;
    unsigned CCP6M3:1;
    unsigned DC6B0:1;
    unsigned DC6B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP6Y:1;
    unsigned CCP6X:1;
  };
} CCP6CONbits;
extern volatile far  unsigned            CCPR6;
extern volatile far  unsigned char       CCPR6L;
extern volatile far  unsigned char       CCPR6H;
extern volatile far  unsigned char       CCP5CON;
extern volatile far  union {
  struct {
    unsigned CCP5M:4;
    unsigned DC5B:2;
  };
  struct {
    unsigned CCP5M0:1;
    unsigned CCP5M1:1;
    unsigned CCP5M2:1;
    unsigned CCP5M3:1;
    unsigned DC5B0:1;
    unsigned DC5B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP5Y:1;
    unsigned CCP5X:1;
  };
} CCP5CONbits;
extern volatile far  unsigned            CCPR5;
extern volatile far  unsigned char       CCPR5L;
extern volatile far  unsigned char       CCPR5H;
extern volatile far  unsigned char       CCP4CON;
extern volatile far  union {
  struct {
    unsigned CCP4M:4;
    unsigned DC4B:2;
  };
  struct {
    unsigned CCP4M0:1;
    unsigned CCP4M1:1;
    unsigned CCP4M2:1;
    unsigned CCP4M3:1;
    unsigned DC4B0:1;
    unsigned DC4B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP4Y:1;
    unsigned CCP4X:1;
  };
} CCP4CONbits;
extern volatile far  unsigned            CCPR4;
extern volatile far  unsigned char       CCPR4L;
extern volatile far  unsigned char       CCPR4H;
extern volatile far  unsigned char       T5GCON;
extern volatile far  union {
  struct {
    unsigned T5GSS:2;
    unsigned T5GVAL:1;
    unsigned T5GGO_NOT_T5DONE:1;
    unsigned T5GSPM:1;
    unsigned T5GTM:1;
    unsigned T5GPOL:1;
    unsigned TMR5GE:1;
  };
  struct {
    unsigned T5GSS0:1;
    unsigned T5GSS1:1;
    unsigned :1;
    unsigned T5GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T5DONE:1;
  };
} T5GCONbits;
extern volatile far  unsigned char       T5CON;
extern volatile far  union {
  struct {
    unsigned TMR5ON:1;
    unsigned RD16:1;
    unsigned NOT_T5SYNC:1;
    unsigned SOSCEN:1;
    unsigned TCKPS:2;
    unsigned TMR5CS:2;
  };
  struct {
    unsigned :4;
    unsigned T5CKPS0:1;
    unsigned T5CKPS1:1;
    unsigned TMR5CS0:1;
    unsigned TMR5CS1:1;
  };
} T5CONbits;
extern volatile far  unsigned char       TMR5L;
extern volatile far  unsigned char       TMR5H;
extern volatile far  unsigned char       SSP2MSK;
extern volatile far  union {
  struct {
    unsigned SSPMSK:8;
  };
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
} SSP2MSKbits;
extern volatile far  unsigned char       SSP2CON2;
extern volatile far  union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK:5;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSP2CON2bits;
extern volatile far  unsigned char       SSP2CON1;
extern volatile far  union {
  struct {
    unsigned SSPM:4;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
  };
} SSP2CON1bits;
extern volatile far  unsigned char       SSP2STAT;
extern volatile far  union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSP2STATbits;
extern volatile far  unsigned char       PSTR3CON;
extern volatile far  union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR3CONbits;
extern volatile far  unsigned char       PSTR2CON;
extern volatile far  union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR2CONbits;
extern volatile far  unsigned char       TXREG2;
extern volatile far  unsigned char       RCREG2;
extern volatile far  unsigned char       SPBRG2;
extern volatile far  union {
  struct {
    unsigned SPBRG2:8;
  };
  struct {
    unsigned BRG0:1;
    unsigned BRG1:1;
    unsigned BRG2:1;
    unsigned BRG3:1;
    unsigned BRG4:1;
    unsigned BRG5:1;
    unsigned BRG6:1;
    unsigned BRG7:1;
  };
} SPBRG2bits;
extern volatile far  unsigned char       SPBRGH2;
extern volatile far  union {
  struct {
    unsigned SPBRGH2:8;
  };
  struct {
    unsigned BRG8:1;
    unsigned BRG9:1;
    unsigned BRG10:1;
    unsigned BRG11:1;
    unsigned BRG12:1;
    unsigned BRG13:1;
    unsigned BRG14:1;
    unsigned BRG15:1;
  };
} SPBRGH2bits;
extern volatile far  unsigned char       DSGPR3;
extern volatile far  unsigned char       DSGPR2;
extern volatile far  unsigned char       DSGPR1;
extern volatile far  unsigned char       DSGPR0;
extern volatile far  unsigned char       DSWAKEH;
extern volatile far  struct {
  unsigned DSINT0:1;
} DSWAKEHbits;
extern volatile far  unsigned char       DSWAKEL;
extern volatile far  struct {
  unsigned DSPOR:1;
  unsigned DSICD:1;
  unsigned DSMCLR:1;
  unsigned DSRTC:1;
  unsigned DSWDT:1;
  unsigned DSULP:1;
  unsigned BOR:1;
  unsigned DSFLT:1;
} DSWAKELbits;
extern volatile far  unsigned char       DSCONH;
extern volatile far  struct {
  unsigned RTCWDIS:1;
  unsigned :6;
  unsigned DSEN:1;
} DSCONHbits;
extern volatile far  unsigned char       DSCONL;
extern volatile far  struct {
  unsigned RELEASE:1;
  unsigned DSBOR:1;
  unsigned ULPWDIS:1;
} DSCONLbits;
extern volatile far  unsigned char       TXREG3;
extern volatile far  unsigned char       RCREG3;
extern volatile far  unsigned char       SPBRG3;
extern volatile far  union {
  struct {
    unsigned SPBRG3:8;
  };
  struct {
    unsigned BRG0:1;
    unsigned BRG1:1;
    unsigned BRG2:1;
    unsigned BRG3:1;
    unsigned BRG4:1;
    unsigned BRG5:1;
    unsigned BRG6:1;
    unsigned BRG7:1;
  };
} SPBRG3bits;
extern volatile far  unsigned char       SPBRGH3;
extern volatile far  union {
  struct {
    unsigned SPBRGH3:8;
  };
  struct {
    unsigned BRG8:1;
    unsigned BRG9:1;
    unsigned BRG10:1;
    unsigned BRG11:1;
    unsigned BRG12:1;
    unsigned BRG13:1;
    unsigned BRG14:1;
    unsigned BRG15:1;
  };
} SPBRGH3bits;
extern volatile far  unsigned char       BAUDCON3;
extern volatile far  struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned IREN:1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCON3bits;
extern volatile far  unsigned char       TXSTA3;
extern volatile far  struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTA3bits;
extern volatile far  unsigned char       RCSTA3;
extern volatile far  struct {
  unsigned RX9D:1;
  unsigned OERR:1;
  unsigned FERR:1;
  unsigned ADDEN:1;
  unsigned CREN:1;
  unsigned SREN:1;
  unsigned RX9:1;
  unsigned SPEN:1;
} RCSTA3bits;
extern volatile far  unsigned char       SPBRGH;
extern volatile far  union {
  struct {
    unsigned SPBRGH1:8;
  };
  struct {
    unsigned BRG8:1;
    unsigned BRG9:1;
    unsigned BRG10:1;
    unsigned BRG11:1;
    unsigned BRG12:1;
    unsigned BRG13:1;
    unsigned BRG14:1;
    unsigned BRG15:1;
  };
} SPBRGHbits;
extern volatile far  unsigned char       SPBRGH1;
extern volatile far  union {
  struct {
    unsigned SPBRGH1:8;
  };
  struct {
    unsigned BRG8:1;
    unsigned BRG9:1;
    unsigned BRG10:1;
    unsigned BRG11:1;
    unsigned BRG12:1;
    unsigned BRG13:1;
    unsigned BRG14:1;
    unsigned BRG15:1;
  };
} SPBRGH1bits;
extern volatile far  unsigned char       BAUDCON2;
extern volatile far  struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned IREN:1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCON2bits;
extern volatile far  unsigned char       TXSTA2;
extern volatile far  struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTA2bits;
extern volatile far  unsigned char       RCSTA2;
extern volatile far  struct {
  unsigned RX9D:1;
  unsigned OERR:1;
  unsigned FERR:1;
  unsigned ADDEN:1;
  unsigned CREN:1;
  unsigned SREN:1;
  unsigned RX9:1;
  unsigned SPEN:1;
} RCSTA2bits;
extern volatile far  unsigned char       CCPTMRS2;
extern volatile far  union {
  struct {
    unsigned C8TSEL:2;
    unsigned C9TSEL:1;
    unsigned :1;
    unsigned C10TSEL:1;
  };
  struct {
    unsigned C8TSEL0:1;
    unsigned C8TSEL1:1;
    unsigned C9TSEL0:1;
    unsigned :1;
    unsigned C10TSEL0:1;
  };
} CCPTMRS2bits;
extern volatile far  unsigned char       CCPTMRS1;
extern volatile far  union {
  struct {
    unsigned C4TSEL:2;
    unsigned C5TSEL:1;
    unsigned :1;
    unsigned C6TSEL:1;
    unsigned :1;
    unsigned C7TSEL:2;
  };
  struct {
    unsigned C4TSEL0:1;
    unsigned C4TSEL1:1;
    unsigned C5TSEL0:1;
    unsigned :1;
    unsigned C6TSEL0:1;
    unsigned :1;
    unsigned C7TSEL0:1;
    unsigned C7TSEL1:1;
  };
} CCPTMRS1bits;
extern volatile far  unsigned char       CCPTMRS0;
extern volatile far  union {
  struct {
    unsigned C1TSEL:3;
    unsigned C2TSEL:3;
    unsigned C3TSEL:2;
  };
  struct {
    unsigned C1TSEL0:1;
    unsigned C1TSEL1:1;
    unsigned C1TSEL2:1;
    unsigned C2TSEL0:1;
    unsigned C2TSEL1:1;
    unsigned C2TSEL2:1;
    unsigned C3TSEL0:1;
    unsigned C3TSEL1:1;
  };
} CCPTMRS0bits;
extern volatile far  unsigned char       CM3CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM3CONbits;
extern volatile far  unsigned char       CM2CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM2CONbits;
extern volatile far  unsigned char       SSP2CON3;
extern volatile far  struct {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP2CON3bits;
extern volatile far  unsigned char       T8CON;
extern volatile far  union {
  struct {
    unsigned T8CKPS:2;
    unsigned TMR8ON:1;
    unsigned T8OUTPS:4;
  };
  struct {
    unsigned T8CKPS0:1;
    unsigned T8CKPS1:1;
    unsigned :1;
    unsigned T8OUTPS0:1;
    unsigned T8OUTPS1:1;
    unsigned T8OUTPS2:1;
    unsigned T8OUTPS3:1;
  };
} T8CONbits;
extern volatile far  unsigned char       PR8;
extern volatile far  unsigned char       TMR8;
extern volatile far  unsigned char       T6CON;
extern volatile far  union {
  struct {
    unsigned T6CKPS:2;
    unsigned TMR6ON:1;
    unsigned T6OUTPS:4;
  };
  struct {
    unsigned T6CKPS0:1;
    unsigned T6CKPS1:1;
    unsigned :1;
    unsigned T6OUTPS0:1;
    unsigned T6OUTPS1:1;
    unsigned T6OUTPS2:1;
    unsigned T6OUTPS3:1;
  };
} T6CONbits;
extern volatile far  unsigned char       PR6;
extern volatile far  unsigned char       TMR6;
extern volatile far  unsigned char       CCP10CON;
extern volatile far  union {
  struct {
    unsigned CCP10M:4;
    unsigned DC10B:2;
  };
  struct {
    unsigned CCP10M0:1;
    unsigned CCP10M1:1;
    unsigned CCP10M2:1;
    unsigned CCP10M3:1;
    unsigned DC10B0:1;
    unsigned DC10B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP10Y:1;
    unsigned CCP10X:1;
  };
} CCP10CONbits;
extern volatile far  unsigned            CCPR10;
extern volatile far  unsigned char       CCPR10L;
extern volatile far  unsigned char       CCPR10H;
extern volatile far  unsigned char       CCP9CON;
extern volatile far  union {
  struct {
    unsigned CCP9M:4;
    unsigned DC9B:2;
  };
  struct {
    unsigned CCP9M0:1;
    unsigned CCP9M1:1;
    unsigned CCP9M2:1;
    unsigned CCP9M3:1;
    unsigned DC9B0:1;
    unsigned DC9B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP9Y:1;
    unsigned CCP9X:1;
  };
} CCP9CONbits;
extern volatile far  unsigned            CCPR9;
extern volatile far  unsigned char       CCPR9L;
extern volatile far  unsigned char       CCPR9H;
extern volatile far  unsigned char       CCP8CON;
extern volatile far  union {
  struct {
    unsigned CCP8M:4;
    unsigned DC8B:2;
  };
  struct {
    unsigned CCP8M0:1;
    unsigned CCP8M1:1;
    unsigned CCP8M2:1;
    unsigned CCP8M3:1;
    unsigned DC8B0:1;
    unsigned DC8B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP8Y:1;
    unsigned CCP8X:1;
  };
} CCP8CONbits;
extern volatile far  unsigned            CCPR8;
extern volatile far  unsigned char       CCPR8L;
extern volatile far  unsigned char       CCPR8H;
extern volatile far  unsigned char       CCP3CON;
extern volatile far  union {
  struct {
    unsigned CCP3M:4;
    unsigned DC3B:2;
    unsigned P3M:2;
  };
  struct {
    unsigned CCP3M0:1;
    unsigned CCP3M1:1;
    unsigned CCP3M2:1;
    unsigned CCP3M3:1;
    unsigned DC3B0:1;
    unsigned DC3B1:1;
    unsigned P3M0:1;
    unsigned P3M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP3Y:1;
    unsigned CCP3X:1;
  };
} CCP3CONbits;
extern volatile far  unsigned            CCPR3;
extern volatile far  unsigned char       CCPR3L;
extern volatile far  unsigned char       CCPR3H;
extern volatile far  unsigned char       ECCP3DEL;
extern volatile far  union {
  struct {
    unsigned P3DC:7;
    unsigned P3RSEN:1;
  };
  struct {
    unsigned P3DC0:1;
    unsigned P3DC1:1;
    unsigned P3DC2:1;
    unsigned P3DC3:1;
    unsigned P3DC4:1;
    unsigned P3DC5:1;
    unsigned P3DC6:1;
  };
} ECCP3DELbits;
extern volatile far  unsigned char       ECCP3AS;
extern volatile far  union {
  struct {
    unsigned PSS3BD:2;
    unsigned PSS3AC:2;
    unsigned ECCP3AS:3;
    unsigned ECCP3ASE:1;
  };
  struct {
    unsigned PSS3BD0:1;
    unsigned PSS3BD1:1;
    unsigned PSS3AC0:1;
    unsigned PSS3AC1:1;
    unsigned ECCP3AS0:1;
    unsigned ECCP3AS1:1;
    unsigned ECCP3AS2:1;
  };
} ECCP3ASbits;
extern volatile far  unsigned char       CCP2CON;
extern volatile far  union {
  struct {
    unsigned CCP2M:4;
    unsigned DC2B:2;
    unsigned P2M:2;
  };
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
    unsigned P2M0:1;
    unsigned P2M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} CCP2CONbits;
extern volatile far  unsigned            CCPR2;
extern volatile far  unsigned char       CCPR2L;
extern volatile far  unsigned char       CCPR2H;
extern volatile far  unsigned char       ECCP2DEL;
extern volatile far  union {
  struct {
    unsigned P2DC:7;
    unsigned P2RSEN:1;
  };
  struct {
    unsigned P2DC0:1;
    unsigned P2DC1:1;
    unsigned P2DC2:1;
    unsigned P2DC3:1;
    unsigned P2DC4:1;
    unsigned P2DC5:1;
    unsigned P2DC6:1;
  };
} ECCP2DELbits;
extern volatile far  unsigned char       ECCP2AS;
extern volatile far  union {
  struct {
    unsigned PSS2BD:2;
    unsigned PSS2AC:2;
    unsigned ECCP2AS:3;
    unsigned ECCP2ASE:1;
  };
  struct {
    unsigned PSS2BD0:1;
    unsigned PSS2BD1:1;
    unsigned PSS2AC0:1;
    unsigned PSS2AC1:1;
    unsigned ECCP2AS0:1;
    unsigned ECCP2AS1:1;
    unsigned ECCP2AS2:1;
  };
} ECCP2ASbits;
extern volatile far  unsigned char       CM1CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM1CONbits;
extern volatile far  unsigned char       PADCFG1;
extern volatile far  struct {
  unsigned RLPU:1;
  unsigned RKPU:1;
  unsigned RJPU:1;
  unsigned RHPU:1;
  unsigned RGPU:1;
  unsigned RFPU:1;
  unsigned REPU:1;
  unsigned RDPU:1;
} PADCFG1bits;
extern volatile far  unsigned char       IOCN;
extern volatile far  struct {
  unsigned IOCN0:1;
  unsigned IOCN1:1;
  unsigned IOCN2:1;
  unsigned IOCN3:1;
  unsigned IOCN4:1;
  unsigned IOCN5:1;
  unsigned IOCN6:1;
  unsigned IOCN7:1;
} IOCNbits;
extern volatile far  unsigned char       IOCP;
extern volatile far  struct {
  unsigned IOCP0:1;
  unsigned IOCP1:1;
  unsigned IOCP2:1;
  unsigned IOCP3:1;
  unsigned IOCP4:1;
  unsigned IOCP5:1;
  unsigned IOCP6:1;
  unsigned IOCP7:1;
} IOCPbits;
extern volatile far  unsigned char       RTCCON2;
extern volatile far  union {
  struct {
    unsigned RTCSECSEL:2;
    unsigned RTCCLKSEL:2;
    unsigned PWCSPRE:1;
    unsigned PWCCPRE:1;
    unsigned PWCPOL:1;
    unsigned PWCEN:1;
  };
  struct {
    unsigned RTCSECSEL0:1;
    unsigned RTCSECSEL1:1;
    unsigned RTCCLKSEL0:1;
    unsigned RTCCLKSEL1:1;
  };
} RTCCON2bits;
extern volatile far  unsigned char       ALRMVALL;
extern volatile far  unsigned char       ALRMVALH;
extern volatile far  unsigned char       ALRMRPT;
extern volatile far  union {
  struct {
    unsigned ARPT:8;
  };
  struct {
    unsigned ARPT0:1;
    unsigned ARPT1:1;
    unsigned ARPT2:1;
    unsigned ARPT3:1;
    unsigned ARPT4:1;
    unsigned ARPT5:1;
    unsigned ARPT6:1;
    unsigned ARPT7:1;
  };
} ALRMRPTbits;
extern volatile far  unsigned char       ALRMCFG;
extern volatile far  union {
  struct {
    unsigned ALRMPTR:2;
    unsigned AMASK:4;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned ALRMPTR0:1;
    unsigned ALRMPTR1:1;
    unsigned AMASK0:1;
    unsigned AMASK1:1;
    unsigned AMASK2:1;
    unsigned AMASK3:1;
  };
} ALRMCFGbits;
extern volatile far  unsigned char       RTCVALL;
extern volatile far  unsigned char       RTCVALH;
extern volatile far  unsigned char       RTCCAL;
extern volatile far  union {
  struct {
    unsigned CAL:8;
  };
  struct {
    unsigned CAL0:1;
    unsigned CAL1:1;
    unsigned CAL2:1;
    unsigned CAL3:1;
    unsigned CAL4:1;
    unsigned CAL5:1;
    unsigned CAL6:1;
    unsigned CAL7:1;
  };
} RTCCALbits;
extern volatile far  unsigned char       RTCCON1;
extern volatile far  union {
  struct {
    unsigned RTCPTR:2;
    unsigned RTCOE:1;
    unsigned HALFSEC:1;
    unsigned RTCSYNC:1;
    unsigned RTCWREN:1;
    unsigned :1;
    unsigned RTCEN:1;
  };
  struct {
    unsigned RTCPTR0:1;
    unsigned RTCPTR1:1;
  };
} RTCCON1bits;
extern volatile near unsigned char       DMACON1;
extern volatile near union {
  struct {
    unsigned DMAEN:1;
    unsigned DLYINTEN:1;
    unsigned DUPLEX:2;
    unsigned RXINC:1;
    unsigned TXINC:1;
    unsigned SSCON:2;
  };
  struct {
    unsigned :2;
    unsigned DUPLEX0:1;
    unsigned DUPLEX1:1;
    unsigned :2;
    unsigned SSCON0:1;
    unsigned SSCON1:1;
  };
} DMACON1bits;
extern volatile near unsigned char       PIE6;
extern volatile near struct {
  unsigned CMP1IE:1;
  unsigned CMP2IE:1;
  unsigned CMP3IE:1;
  unsigned :1;
  unsigned TX3IE:1;
  unsigned RC3IE:1;
  unsigned TX4IE:1;
  unsigned RC4IE:1;
} PIE6bits;
extern volatile near unsigned char       WPUB;
extern volatile near struct {
  unsigned WPUB0:1;
  unsigned WPUB1:1;
  unsigned WPUB2:1;
  unsigned WPUB3:1;
  unsigned WPUB4:1;
  unsigned WPUB5:1;
  unsigned WPUB6:1;
  unsigned WPUB7:1;
} WPUBbits;
extern volatile near unsigned char       ACTCON;
extern volatile near struct {
  unsigned ACTORSPOL:1;
  unsigned ACTORS:1;
  unsigned ACTLOCKPOL:1;
  unsigned ACTLOCK:1;
  unsigned ACTSRC:1;
  unsigned ACTSIDL:1;
  unsigned :1;
  unsigned ACTEN:1;
} ACTCONbits;
extern volatile near unsigned char       OSCCON4;
extern volatile near union {
  struct {
    unsigned :5;
    unsigned PLLEN:1;
    unsigned CPDIV:2;
  };
  struct {
    unsigned :6;
    unsigned CPDIV0:1;
    unsigned CPDIV1:1;
  };
} OSCCON4bits;
extern volatile near unsigned char       OSCCON3;
extern volatile near union {
  struct {
    unsigned IRCF:3;
  };
  struct {
    unsigned IRCF0:1;
    unsigned IRCF1:1;
    unsigned IRCF2:1;
  };
} OSCCON3bits;
extern volatile near unsigned char       OSCCON2;
extern volatile near struct {
  unsigned :1;
  unsigned SOSCGO:1;
  unsigned POSCEN:1;
  unsigned CF:1;
  unsigned :1;
  unsigned LOCK:1;
  unsigned IOLOCK:1;
  unsigned CLKLOCK:1;
} OSCCON2bits;
extern volatile near unsigned char       BAUDCON;
extern volatile near union {
  struct {
    unsigned ABDEN:1;
    unsigned WUE:1;
    unsigned IREN:1;
    unsigned BRG16:1;
    unsigned TXCKP:1;
    unsigned RXDTP:1;
    unsigned RCIDL:1;
    unsigned ABDOVF:1;
  };
  struct {
    unsigned :4;
    unsigned CKTXP:1;
    unsigned DTRXP:1;
  };
  struct {
    unsigned :4;
    unsigned SCKP:1;
    unsigned :1;
    unsigned RCMT:1;
  };
} BAUDCONbits;
extern volatile near unsigned char       BAUDCON1;
extern volatile near union {
  struct {
    unsigned ABDEN:1;
    unsigned WUE:1;
    unsigned IREN:1;
    unsigned BRG16:1;
    unsigned TXCKP:1;
    unsigned RXDTP:1;
    unsigned RCIDL:1;
    unsigned ABDOVF:1;
  };
  struct {
    unsigned :4;
    unsigned CKTXP:1;
    unsigned DTRXP:1;
  };
  struct {
    unsigned :4;
    unsigned SCKP:1;
    unsigned :1;
    unsigned RCMT:1;
  };
} BAUDCON1bits;
extern volatile near unsigned char       SSP1MSK;
extern volatile near union {
  struct {
    unsigned SSPMSK:8;
  };
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
} SSP1MSKbits;
extern volatile near unsigned char       SSP1CON3;
extern volatile near struct {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP1CON3bits;
extern volatile near unsigned char       TXBUF;
extern volatile near union {
  struct {
    unsigned TXBUF:8;
  };
  struct {
    unsigned TXBUF0:1;
    unsigned TXBUF1:1;
    unsigned TXBUF2:1;
    unsigned TXBUF3:1;
    unsigned TXBUF4:1;
    unsigned TXBUF5:1;
    unsigned TXBUF6:1;
    unsigned TXBUF7:1;
  };
} TXBUFbits;
extern volatile near unsigned char       DMABCH;
extern volatile near union {
  struct {
    unsigned DMACNTHB:2;
  };
  struct {
    unsigned BC8:1;
    unsigned BC9:1;
  };
} DMABCHbits;
extern volatile near unsigned char       DMABCL;
extern volatile near union {
  struct {
    unsigned DMACNTLB:8;
  };
  struct {
    unsigned BC0:1;
    unsigned BC1:1;
    unsigned BC2:1;
    unsigned BC3:1;
    unsigned BC4:1;
    unsigned BC5:1;
    unsigned BC6:1;
    unsigned BC7:1;
  };
} DMABCLbits;
extern volatile near unsigned char       RXADDRH;
extern volatile near union {
  struct {
    unsigned DMARCVPTRHB:4;
  };
  struct {
    unsigned RXADDR8:1;
    unsigned RXADDR9:1;
    unsigned RXADDR10:1;
    unsigned RXADDR11:1;
  };
} RXADDRHbits;
extern volatile near unsigned char       RXADDRL;
extern volatile near union {
  struct {
    unsigned DMARCVPTRLB:8;
  };
  struct {
    unsigned RXADDR0:1;
    unsigned RXADDR1:1;
    unsigned RXADDR2:1;
    unsigned RXADDR3:1;
    unsigned RXADDR4:1;
    unsigned RXADDR5:1;
    unsigned RXADDR6:1;
    unsigned RXADDR7:1;
  };
} RXADDRLbits;
extern volatile near unsigned char       TXADDRH;
extern volatile near union {
  struct {
    unsigned DMATXPTRHB:4;
  };
  struct {
    unsigned TXADDR8:1;
    unsigned TXADDR9:1;
    unsigned TXADDR10:1;
    unsigned TXADDR11:1;
  };
} TXADDRHbits;
extern volatile near unsigned char       TXADDRL;
extern volatile near union {
  struct {
    unsigned DMATXPTRLB:8;
  };
  struct {
    unsigned TXADDR0:1;
    unsigned TXADDR1:1;
    unsigned TXADDR2:1;
    unsigned TXADDR3:1;
    unsigned TXADDR4:1;
    unsigned TXADDR5:1;
    unsigned TXADDR6:1;
    unsigned TXADDR7:1;
  };
} TXADDRLbits;
extern volatile near unsigned char       PORTVP;
extern volatile near struct {
  unsigned RVP0:1;
  unsigned RVP1:1;
  unsigned RVP2:1;
  unsigned RVP3:1;
  unsigned RVP4:1;
  unsigned RVP5:1;
  unsigned RVP6:1;
  unsigned RVP7:1;
} PORTVPbits;
extern volatile near unsigned char       LATVP;
extern volatile near struct {
  unsigned LATVP0:1;
  unsigned LATVP1:1;
  unsigned LATVP2:1;
  unsigned LATVP3:1;
  unsigned LATVP4:1;
  unsigned LATVP5:1;
  unsigned LATVP6:1;
  unsigned LATVP7:1;
} LATVPbits;
extern volatile near unsigned char       TRISVP;
extern volatile near struct {
  unsigned TRISVP0:1;
  unsigned TRISVP1:1;
  unsigned TRISVP2:1;
  unsigned TRISVP3:1;
  unsigned TRISVP4:1;
  unsigned TRISVP5:1;
  unsigned TRISVP6:1;
  unsigned TRISVP7:1;
} TRISVPbits;
extern volatile near unsigned char       UADDR;
extern volatile near union {
  struct {
    unsigned ADDR:7;
  };
  struct {
    unsigned ADDR0:1;
    unsigned ADDR1:1;
    unsigned ADDR2:1;
    unsigned ADDR3:1;
    unsigned ADDR4:1;
    unsigned ADDR5:1;
    unsigned ADDR6:1;
  };
} UADDRbits;
extern volatile near unsigned char       UCON;
extern volatile near struct {
  unsigned :1;
  unsigned SUSPND:1;
  unsigned RESUME:1;
  unsigned USBEN:1;
  unsigned PKTDIS:1;
  unsigned SE0:1;
  unsigned PPBRST:1;
} UCONbits;
extern volatile near unsigned char       USTAT;
extern volatile near union {
  struct {
    unsigned :1;
    unsigned PPBI:1;
    unsigned DIR:1;
    unsigned ENDP:4;
  };
  struct {
    unsigned :3;
    unsigned ENDP0:1;
    unsigned ENDP1:1;
    unsigned ENDP2:1;
    unsigned ENDP3:1;
  };
} USTATbits;
extern volatile near unsigned char       UEIR;
extern volatile near struct {
  unsigned PIDEF:1;
  unsigned CRC5EF:1;
  unsigned CRC16EF:1;
  unsigned DFN8EF:1;
  unsigned BTOEF:1;
  unsigned :2;
  unsigned BTSEF:1;
} UEIRbits;
extern volatile near unsigned char       UIR;
extern volatile near struct {
  unsigned URSTIF:1;
  unsigned UERRIF:1;
  unsigned ACTVIF:1;
  unsigned TRNIF:1;
  unsigned IDLEIF:1;
  unsigned STALLIF:1;
  unsigned SOFIF:1;
} UIRbits;
extern volatile near unsigned            UFRM;
extern volatile near unsigned char       UFRMH;
extern volatile near union {
  struct {
    unsigned FRM:3;
  };
  struct {
    unsigned FRM8:1;
    unsigned FRM9:1;
    unsigned FRM10:1;
  };
} UFRMHbits;
extern volatile near unsigned char       UFRML;
extern volatile near union {
  struct {
    unsigned FRM:8;
  };
  struct {
    unsigned FRM0:1;
    unsigned FRM1:1;
    unsigned FRM2:1;
    unsigned FRM3:1;
    unsigned FRM4:1;
    unsigned FRM5:1;
    unsigned FRM6:1;
    unsigned FRM7:1;
  };
} UFRMLbits;
extern volatile near unsigned char       RCON4;
extern volatile near struct {
  unsigned PMSLP:1;
  unsigned :1;
  unsigned DPSLP:1;
  unsigned :1;
  unsigned SRETEN:1;
} RCON4bits;
extern volatile near unsigned char       RCON3;
extern volatile near struct {
  unsigned VBAT:1;
  unsigned VBPOR:1;
  unsigned VDDPOR:1;
  unsigned VDDBOR:1;
  unsigned :3;
  unsigned STKERR:1;
} RCON3bits;
extern volatile near unsigned char       RCON2;
extern volatile near struct {
  unsigned :5;
  unsigned SWDTEN:1;
  unsigned :1;
  unsigned EXTR:1;
} RCON2bits;
extern volatile near unsigned char       EECON2;
extern volatile near unsigned char       EECON1;
extern volatile near struct {
  unsigned :1;
  unsigned WR:1;
  unsigned WREN:1;
  unsigned WRERR:1;
  unsigned FREE:1;
  unsigned WWPROG:1;
} EECON1bits;
extern volatile near unsigned char       PORTA;
extern volatile near struct {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
} PORTAbits;
extern volatile near unsigned char       PORTB;
extern volatile near struct {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
} PORTBbits;
extern volatile near unsigned char       PORTC;
extern volatile near struct {
  unsigned RC0:1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned RC3:1;
  unsigned RC4:1;
  unsigned RC5:1;
  unsigned RC6:1;
  unsigned RC7:1;
} PORTCbits;
extern volatile near unsigned char       PORTD;
extern volatile near struct {
  unsigned RD0:1;
  unsigned RD1:1;
  unsigned RD2:1;
  unsigned RD3:1;
  unsigned RD4:1;
  unsigned RD5:1;
  unsigned RD6:1;
  unsigned RD7:1;
} PORTDbits;
extern volatile near unsigned char       PORTE;
extern volatile near struct {
  unsigned RE0:1;
  unsigned RE1:1;
  unsigned RE2:1;
  unsigned RE3:1;
  unsigned RE4:1;
  unsigned RE5:1;
  unsigned RE6:1;
  unsigned RE7:1;
} PORTEbits;
extern volatile near unsigned char       PORTF;
extern volatile near struct {
  unsigned :2;
  unsigned RF2:1;
  unsigned RF3:1;
  unsigned RF4:1;
  unsigned RF5:1;
  unsigned RF6:1;
  unsigned RF7:1;
} PORTFbits;
extern volatile near unsigned char       PORTG;
extern volatile near struct {
  unsigned RG0:1;
  unsigned RG1:1;
  unsigned RG2:1;
  unsigned RG3:1;
  unsigned RG4:1;
} PORTGbits;
extern volatile near unsigned char       LATA;
extern volatile near struct {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned LATA5:1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATAbits;
extern volatile near unsigned char       LATB;
extern volatile near struct {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
} LATBbits;
extern volatile near unsigned char       LATC;
extern volatile near struct {
  unsigned LATC0:1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned LATC5:1;
  unsigned LATC6:1;
  unsigned LATC7:1;
} LATCbits;
extern volatile near unsigned char       LATD;
extern volatile near struct {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
} LATDbits;
extern volatile near unsigned char       LATE;
extern volatile near struct {
  unsigned LATE0:1;
  unsigned LATE1:1;
  unsigned LATE2:1;
  unsigned LATE3:1;
  unsigned LATE4:1;
  unsigned LATE5:1;
  unsigned LATE6:1;
  unsigned LATE7:1;
} LATEbits;
extern volatile near unsigned char       LATF;
extern volatile near struct {
  unsigned :2;
  unsigned LATF2:1;
  unsigned LATF3:1;
  unsigned LATF4:1;
  unsigned LATF5:1;
  unsigned LATF6:1;
  unsigned LATF7:1;
} LATFbits;
extern volatile near unsigned char       LATG;
extern volatile near struct {
  unsigned LATG0:1;
  unsigned LATG1:1;
  unsigned LATG2:1;
  unsigned LATG3:1;
  unsigned LATG4:1;
} LATGbits;
extern volatile near unsigned char       TRISA;
extern volatile near struct {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned TRISA5:1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
} TRISAbits;
extern volatile near unsigned char       TRISB;
extern volatile near struct {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
} TRISBbits;
extern volatile near unsigned char       TRISC;
extern volatile near struct {
  unsigned TRISC0:1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned TRISC5:1;
  unsigned TRISC6:1;
  unsigned TRISC7:1;
} TRISCbits;
extern volatile near unsigned char       TRISD;
extern volatile near struct {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
} TRISDbits;
extern volatile near unsigned char       TRISE;
extern volatile near struct {
  unsigned TRISE0:1;
  unsigned TRISE1:1;
  unsigned TRISE2:1;
  unsigned TRISE3:1;
  unsigned TRISE4:1;
  unsigned TRISE5:1;
  unsigned TRISE6:1;
  unsigned TRISE7:1;
} TRISEbits;
extern volatile near unsigned char       TRISF;
extern volatile near struct {
  unsigned :2;
  unsigned TRISF2:1;
  unsigned TRISF3:1;
  unsigned TRISF4:1;
  unsigned TRISF5:1;
  unsigned TRISF6:1;
  unsigned TRISF7:1;
} TRISFbits;
extern volatile near unsigned char       TRISG;
extern volatile near struct {
  unsigned TRISG0:1;
  unsigned TRISG1:1;
  unsigned TRISG2:1;
  unsigned TRISG3:1;
  unsigned TRISG4:1;
} TRISGbits;
extern volatile near unsigned char       OSCTUNE;
extern volatile near union {
  struct {
    unsigned TUN:6;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
} OSCTUNEbits;
extern volatile near unsigned char       PSTR1CON;
extern volatile near union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR1CONbits;
extern volatile near unsigned char       PIE1;
extern volatile near struct {
  unsigned TMR1IE:1;
  unsigned TMR2IE:1;
  unsigned TMR1GIE:1;
  unsigned SSP1IE:1;
  unsigned TX1IE:1;
  unsigned RC1IE:1;
  unsigned ADIE:1;
  unsigned PSPIE:1;
} PIE1bits;
extern volatile near unsigned char       PIR1;
extern volatile near struct {
  unsigned TMR1IF:1;
  unsigned TMR2IF:1;
  unsigned TMR1GIF:1;
  unsigned SSP1IF:1;
  unsigned TX1IF:1;
  unsigned RC1IF:1;
  unsigned ADIF:1;
  unsigned PSPIF:1;
} PIR1bits;
extern volatile near unsigned char       IPR1;
extern volatile near struct {
  unsigned TMR1IP:1;
  unsigned TMR2IP:1;
  unsigned TMR1GIP:1;
  unsigned SSP1IP:1;
  unsigned TX1IP:1;
  unsigned RC1IP:1;
  unsigned ADIP:1;
  unsigned PSPIP:1;
} IPR1bits;
extern volatile near unsigned char       PIE2;
extern volatile near struct {
  unsigned TMR3GIE:1;
  unsigned TMR3IE:1;
  unsigned HLVDIE:1;
  unsigned BCL1IE:1;
  unsigned USBIE:1;
  unsigned BCL2IE:1;
  unsigned SSP2IE:1;
  unsigned OSCFIE:1;
} PIE2bits;
extern volatile near unsigned char       PIR2;
extern volatile near union {
  struct {
    unsigned TMR3GIF:1;
    unsigned TMR3IF:1;
    unsigned HLVDIF:1;
    unsigned BCL1IF:1;
    unsigned USBIF:1;
    unsigned BCL2IF:1;
    unsigned SSP2IF:1;
    unsigned OSCFIF:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIF:1;
  };
} PIR2bits;
extern volatile near unsigned char       IPR2;
extern volatile near struct {
  unsigned TMR3GIP:1;
  unsigned TMR3IP:1;
  unsigned HLVDIP:1;
  unsigned BCL1IP:1;
  unsigned USBIP:1;
  unsigned BCL2IP:1;
  unsigned SSP2IP:1;
  unsigned OSCFIP:1;
} IPR2bits;
extern volatile near unsigned char       PIE3;
extern volatile near struct {
  unsigned RTCCIE:1;
  unsigned CCP1IE:1;
  unsigned CCP2IE:1;
  unsigned CTMUIE:1;
  unsigned TX2IE:1;
  unsigned RC2IE:1;
  unsigned LCDIE:1;
  unsigned TMR5GIE:1;
} PIE3bits;
extern volatile near unsigned char       PIR3;
extern volatile near struct {
  unsigned RTCCIF:1;
  unsigned CCP1IF:1;
  unsigned CCP2IF:1;
  unsigned CTMUIF:1;
  unsigned TX2IF:1;
  unsigned RC2IF:1;
  unsigned LCDIF:1;
  unsigned TMR5GIF:1;
} PIR3bits;
extern volatile near unsigned char       IPR3;
extern volatile near struct {
  unsigned RTCCIP:1;
  unsigned CCP1IP:1;
  unsigned CCP2IP:1;
  unsigned CTMUIP:1;
  unsigned TX2IP:1;
  unsigned RC2IP:1;
  unsigned LCDIP:1;
  unsigned TMR5GIP:1;
} IPR3bits;
extern volatile near unsigned char       PIR6;
extern volatile near struct {
  unsigned CMP1IF:1;
  unsigned CMP2IF:1;
  unsigned CMP3IF:1;
  unsigned :1;
  unsigned TX3IF:1;
  unsigned RC3IF:1;
  unsigned TX4IF:1;
  unsigned RC4IF:1;
} PIR6bits;
extern volatile near unsigned char       PSPCON;
extern volatile near struct {
  unsigned :4;
  unsigned PSPMODE:1;
  unsigned IBOV:1;
  unsigned OBF:1;
  unsigned IBF:1;
} PSPCONbits;
extern volatile near unsigned char       HLVDCON;
extern volatile near union {
  struct {
    unsigned HLVDL:4;
    unsigned HLVDEN:1;
    unsigned IRVST:1;
    unsigned BGVST:1;
    unsigned VDIRMAG:1;
  };
  struct {
    unsigned HLVDL0:1;
    unsigned HLVDL1:1;
    unsigned HLVDL2:1;
    unsigned HLVDL3:1;
  };
} HLVDCONbits;
extern volatile near unsigned char       IPR6;
extern volatile near struct {
  unsigned CMP1IP:1;
  unsigned CMP2IP:1;
  unsigned CMP3IP:1;
  unsigned :1;
  unsigned TX3IP:1;
  unsigned RC3IP:1;
  unsigned TX4IP:1;
  unsigned RC4IP:1;
} IPR6bits;
extern volatile near unsigned char       T1GCON;
extern volatile near union {
  struct {
    unsigned T1GSS:2;
    unsigned T1GVAL:1;
    unsigned T1GGO_NOT_T1DONE:1;
    unsigned T1GSPM:1;
    unsigned T1GTM:1;
    unsigned T1GPOL:1;
    unsigned TMR1GE:1;
  };
  struct {
    unsigned T1GSS0:1;
    unsigned T1GSS1:1;
    unsigned :1;
    unsigned T1GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T1DONE:1;
  };
} T1GCONbits;
extern volatile near unsigned char       RCSTA;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned :3;
    unsigned ADEN:1;
  };
} RCSTAbits;
extern volatile near unsigned char       RCSTA1;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned :3;
    unsigned ADEN:1;
  };
} RCSTA1bits;
extern volatile near unsigned char       TXSTA;
extern volatile near struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTAbits;
extern volatile near unsigned char       TXSTA1;
extern volatile near struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTA1bits;
extern volatile near unsigned char       TXREG;
extern volatile near unsigned char       TXREG1;
extern volatile near unsigned char       RCREG;
extern volatile near unsigned char       RCREG1;
extern volatile near unsigned char       SPBRG;
extern volatile near union {
  struct {
    unsigned SPBRG1:8;
  };
  struct {
    unsigned BRG0:1;
    unsigned BRG1:1;
    unsigned BRG2:1;
    unsigned BRG3:1;
    unsigned BRG4:1;
    unsigned BRG5:1;
    unsigned BRG6:1;
    unsigned BRG7:1;
  };
} SPBRGbits;
extern volatile near unsigned char       SPBRG1;
extern volatile near union {
  struct {
    unsigned SPBRG1:8;
  };
  struct {
    unsigned BRG0:1;
    unsigned BRG1:1;
    unsigned BRG2:1;
    unsigned BRG3:1;
    unsigned BRG4:1;
    unsigned BRG5:1;
    unsigned BRG6:1;
    unsigned BRG7:1;
  };
} SPBRG1bits;
extern volatile near unsigned char       T3GCON;
extern volatile near union {
  struct {
    unsigned T3GSS:2;
    unsigned T3GVAL:1;
    unsigned T3GGO_NOT_T3DONE:1;
    unsigned T3GSPM:1;
    unsigned T3GTM:1;
    unsigned T3GPOL:1;
    unsigned TMR3GE:1;
  };
  struct {
    unsigned T3GSS0:1;
    unsigned T3GSS1:1;
    unsigned :1;
    unsigned T3GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T3DONE:1;
  };
} T3GCONbits;
extern volatile near unsigned char       T3CON;
extern volatile near union {
  struct {
    unsigned TMR3ON:1;
    unsigned RD16:1;
    unsigned NOT_T3SYNC:1;
    unsigned SOSCEN:1;
    unsigned TCKPS:2;
    unsigned TMR3CS:2;
  };
  struct {
    unsigned :4;
    unsigned T3CKPS0:1;
    unsigned T3CKPS1:1;
    unsigned TMR3CS0:1;
    unsigned TMR3CS1:1;
  };
} T3CONbits;
extern volatile near unsigned char       TMR3L;
extern volatile near unsigned char       TMR3H;
extern volatile near unsigned char       PIE4;
extern volatile near struct {
  unsigned ECCP3IE:1;
  unsigned CCP4IE:1;
  unsigned CCP5IE:1;
  unsigned CCP6IE:1;
  unsigned CCP7IE:1;
  unsigned CCP8IE:1;
  unsigned CCP9IE:1;
  unsigned CCP10IE:1;
} PIE4bits;
extern volatile near unsigned char       PIR4;
extern volatile near struct {
  unsigned ECCP3IF:1;
  unsigned CCP4IF:1;
  unsigned CCP5IF:1;
  unsigned CCP6IF:1;
  unsigned CCP7IF:1;
  unsigned CCP8IF:1;
  unsigned CCP9IF:1;
  unsigned CCP10IF:1;
} PIR4bits;
extern volatile near unsigned char       IPR4;
extern volatile near struct {
  unsigned ECCP3IP:1;
  unsigned CCP4IP:1;
  unsigned CCP5IP:1;
  unsigned CCP6IP:1;
  unsigned CCP7IP:1;
  unsigned CCP8IP:1;
  unsigned CCP9IP:1;
  unsigned CCP10IP:1;
} IPR4bits;
extern volatile near unsigned char       PIE5;
extern volatile near struct {
  unsigned TMR4IE:1;
  unsigned TMR5IE:1;
  unsigned TMR6IE:1;
  unsigned :1;
  unsigned TMR8IE:1;
  unsigned ACTLOCKIE:1;
  unsigned ACTORSIE:1;
} PIE5bits;
extern volatile near unsigned char       PIR5;
extern volatile near struct {
  unsigned TMR4IF:1;
  unsigned TMR5IF:1;
  unsigned TMR6IF:1;
  unsigned :1;
  unsigned TMR8IF:1;
  unsigned ACTLOCKIF:1;
  unsigned ACTORSIF:1;
} PIR5bits;
extern volatile near unsigned char       CCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M:4;
    unsigned DC1B:2;
    unsigned P1M:2;
  };
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} CCP1CONbits;
extern volatile near unsigned            CCPR1;
extern volatile near unsigned char       CCPR1L;
extern volatile near unsigned char       CCPR1H;
extern volatile near unsigned char       ECCP1DEL;
extern volatile near union {
  struct {
    unsigned P1DC:7;
    unsigned P1RSEN:1;
  };
  struct {
    unsigned P1DC0:1;
    unsigned P1DC1:1;
    unsigned P1DC2:1;
    unsigned P1DC3:1;
    unsigned P1DC4:1;
    unsigned P1DC5:1;
    unsigned P1DC6:1;
  };
} ECCP1DELbits;
extern volatile near unsigned char       ECCP1AS;
extern volatile near union {
  struct {
    unsigned PSS1BD:2;
    unsigned PSS1AC:2;
    unsigned ECCP1AS:3;
    unsigned ECCP1ASE:1;
  };
  struct {
    unsigned PSS1BD0:1;
    unsigned PSS1BD1:1;
    unsigned PSS1AC0:1;
    unsigned PSS1AC1:1;
    unsigned ECCP1AS0:1;
    unsigned ECCP1AS1:1;
    unsigned ECCP1AS2:1;
  };
} ECCP1ASbits;
extern volatile near unsigned char       CVRCONL;
extern volatile near union {
  struct {
    unsigned CVRNSS:1;
    unsigned :3;
    unsigned CVRPSS:2;
    unsigned CVROE:1;
    unsigned CVREN:1;
  };
  struct {
    unsigned :4;
    unsigned CVRPSS0:1;
    unsigned CVRPSS1:1;
  };
} CVRCONLbits;
extern volatile near unsigned char       CVRCONH;
extern volatile near union {
  struct {
    unsigned CVR:5;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
    unsigned CVR4:1;
  };
} CVRCONHbits;
extern volatile near unsigned char       ADCON1L;
extern volatile near union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned :1;
    unsigned SSRC:4;
  };
  struct {
    unsigned :4;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned SSRC3:1;
  };
} ADCON1Lbits;
extern volatile near unsigned char       ADCON1H;
extern volatile near union {
  struct {
    unsigned FORM:2;
    unsigned MODE12:1;
    unsigned :4;
    unsigned ADON:1;
  };
  struct {
    unsigned FORM0:1;
    unsigned FORM1:1;
  };
} ADCON1Hbits;
extern volatile near unsigned            ADCBUF0;
extern volatile near unsigned char       ADCBUF0L;
extern volatile near unsigned char       ADCBUF0H;
extern volatile near unsigned char       CMSTAT;
extern volatile near struct {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned C3OUT:1;
} CMSTATbits;
extern volatile near unsigned char       SSP1CON2;
extern volatile near union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK:5;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSP1CON2bits;
extern volatile near unsigned char       SSP1CON1;
extern volatile near union {
  struct {
    unsigned SSPM:4;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
  };
} SSP1CON1bits;
extern volatile near unsigned char       SSP1STAT;
extern volatile near union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSP1STATbits;
extern volatile near unsigned char       SSP1ADD;
extern volatile near unsigned char       SSP1BUF;
extern volatile near unsigned char       T2CON;
extern volatile near union {
  struct {
    unsigned T2CKPS:2;
    unsigned TMR2ON:1;
    unsigned T2OUTPS:4;
  };
  struct {
    unsigned T2CKPS0:1;
    unsigned T2CKPS1:1;
    unsigned :1;
    unsigned T2OUTPS0:1;
    unsigned T2OUTPS1:1;
    unsigned T2OUTPS2:1;
    unsigned T2OUTPS3:1;
  };
} T2CONbits;
extern volatile near unsigned char       PR2;
extern volatile near unsigned char       TMR2;
extern volatile near unsigned char       T1CON;
extern volatile near union {
  struct {
    unsigned TMR1ON:1;
    unsigned RD16:1;
    unsigned NOT_T1SYNC:1;
    unsigned SOSCEN:1;
    unsigned TCKPS:2;
    unsigned TMR1CS:2;
  };
  struct {
    unsigned :4;
    unsigned T1CKPS0:1;
    unsigned T1CKPS1:1;
    unsigned TMR1CS0:1;
    unsigned TMR1CS1:1;
  };
} T1CONbits;
extern volatile near unsigned char       TMR1L;
extern volatile near unsigned char       TMR1H;
extern volatile near unsigned char       RCON;
extern volatile near union {
  struct {
    unsigned NOT_BOR:1;
    unsigned NOT_POR:1;
    unsigned NOT_PD:1;
    unsigned NOT_TO:1;
    unsigned NOT_RI:1;
    unsigned NOT_CM:1;
    unsigned :1;
    unsigned IPEN:1;
  };
  struct {
    unsigned BOR:1;
    unsigned POR:1;
    unsigned PD:1;
    unsigned TO:1;
    unsigned RI:1;
    unsigned CM:1;
  };
} RCONbits;
extern volatile near unsigned char       IOCF;
extern volatile near struct {
  unsigned IOCF0:1;
  unsigned IOCF1:1;
  unsigned IOCF2:1;
  unsigned IOCF3:1;
  unsigned IOCF4:1;
  unsigned IOCF5:1;
  unsigned IOCF6:1;
  unsigned IOCF7:1;
} IOCFbits;
extern volatile near unsigned char       IPR5;
extern volatile near struct {
  unsigned TMR4IP:1;
  unsigned TMR5IP:1;
  unsigned TMR6IP:1;
  unsigned :1;
  unsigned TMR8IP:1;
  unsigned ACTLOCKIP:1;
  unsigned ACTORSIP:1;
} IPR5bits;
extern volatile near unsigned char       OSCCON;
extern volatile near union {
  struct {
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
    unsigned IDLEN:1;
  };
  struct {
    unsigned NOSC0:1;
    unsigned NOSC1:1;
    unsigned NOSC2:1;
    unsigned :1;
    unsigned COSC0:1;
    unsigned COSC1:1;
    unsigned COSC2:1;
  };
} OSCCONbits;
extern volatile near unsigned char       T0CON;
extern volatile near union {
  struct {
    unsigned T0PS:3;
    unsigned PSA:1;
    unsigned T0CS:2;
    unsigned T08BIT:1;
    unsigned TMR0ON:1;
  };
  struct {
    unsigned T0PS0:1;
    unsigned T0PS1:1;
    unsigned T0PS2:1;
    unsigned :1;
    unsigned T0CS0:1;
    unsigned T0CS1:1;
  };
} T0CONbits;
extern volatile near unsigned char       TMR0L;
extern volatile near unsigned char       TMR0H;
extern          near unsigned char       STATUS;
extern          near struct {
  unsigned C:1;
  unsigned DC:1;
  unsigned Z:1;
  unsigned OV:1;
  unsigned N:1;
} STATUSbits;
extern          near unsigned            FSR2;
extern          near unsigned char       FSR2L;
extern          near unsigned char       FSR2H;
extern volatile near unsigned char       PLUSW2;
extern volatile near unsigned char       PREINC2;
extern volatile near unsigned char       POSTDEC2;
extern volatile near unsigned char       POSTINC2;
extern          near unsigned char       INDF2;
extern          near unsigned char       BSR;
extern          near unsigned            FSR1;
extern          near unsigned char       FSR1L;
extern          near unsigned char       FSR1H;
extern volatile near unsigned char       PLUSW1;
extern volatile near unsigned char       PREINC1;
extern volatile near unsigned char       POSTDEC1;
extern volatile near unsigned char       POSTINC1;
extern          near unsigned char       INDF1;
extern          near unsigned char       WREG;
extern          near unsigned            FSR0;
extern          near unsigned char       FSR0L;
extern          near unsigned char       FSR0H;
extern volatile near unsigned char       PLUSW0;
extern volatile near unsigned char       PREINC0;
extern volatile near unsigned char       POSTDEC0;
extern volatile near unsigned char       POSTINC0;
extern          near unsigned char       INDF0;
extern volatile near unsigned char       INTCON3;
extern volatile near union {
  struct {
    unsigned INT1IF:1;
    unsigned INT2IF:1;
    unsigned INT3IF:1;
    unsigned INT1IE:1;
    unsigned INT2IE:1;
    unsigned INT3IE:1;
    unsigned INT1IP:1;
    unsigned INT2IP:1;
  };
  struct {
    unsigned INT1F:1;
    unsigned INT2F:1;
    unsigned INT3F:1;
    unsigned INT1E:1;
    unsigned INT2E:1;
    unsigned INT3E:1;
    unsigned INT1P:1;
    unsigned INT2P:1;
  };
} INTCON3bits;
extern volatile near unsigned char       INTCON2;
extern volatile near union {
  struct {
    unsigned IOCIP:1;
    unsigned INT3IP:1;
    unsigned TMR0IP:1;
    unsigned INTEDG3:1;
    unsigned INTEDG2:1;
    unsigned INTEDG1:1;
    unsigned INTEDG0:1;
    unsigned NOT_RBPU:1;
  };
  struct {
    unsigned :1;
    unsigned INT3P:1;
    unsigned T0IP:1;
    unsigned :4;
    unsigned RBPU:1;
  };
} INTCON2bits;
extern volatile near unsigned char       INTCON;
extern volatile near union {
  struct {
    unsigned IOCIF:1;
    unsigned INT0IF:1;
    unsigned TMR0IF:1;
    unsigned IOCIE:1;
    unsigned INT0IE:1;
    unsigned TMR0IE:1;
    unsigned PEIE_GIEL:1;
    unsigned GIE_GIEH:1;
  };
  struct {
    unsigned :1;
    unsigned INT0F:1;
    unsigned T0IF:1;
    unsigned :1;
    unsigned INT0E:1;
    unsigned T0IE:1;
    unsigned PEIE:1;
    unsigned GIE:1;
  };
  struct {
    unsigned :6;
    unsigned GIEL:1;
    unsigned GIEH:1;
  };
} INTCONbits;
extern          near unsigned            PROD;
extern          near unsigned char       PRODL;
extern          near unsigned char       PRODH;
extern volatile near unsigned char       TABLAT;
extern volatile near unsigned short long TBLPTR;
extern volatile near unsigned char       TBLPTRL;
extern volatile near unsigned char       TBLPTRH;
extern volatile near unsigned char       TBLPTRU;
extern volatile near unsigned short long PC;
extern volatile near unsigned char       PCL;
extern volatile near unsigned char       PCLATH;
extern volatile near unsigned char       PCLATU;
extern volatile near unsigned char       STKPTR;
extern volatile near union {
  struct {
    unsigned STKPTR:5;
    unsigned :1;
    unsigned STKUNF:1;
    unsigned STKFUL:1;
  };
  struct {
    unsigned SP0:1;
    unsigned SP1:1;
    unsigned SP2:1;
    unsigned SP3:1;
    unsigned SP4:1;
    unsigned :2;
    unsigned STKOVF:1;
  };
} STKPTRbits;
extern          near unsigned short long TOS;
extern          near unsigned char       TOSL;
extern          near unsigned char       TOSH;
extern          near unsigned char       TOSU;

#pragma varlocate 13 UEP0
#pragma varlocate 13 UEP0bits
#pragma varlocate 14 UEP1
#pragma varlocate 14 UEP1bits
#pragma varlocate 14 UEP2
#pragma varlocate 14 UEP2bits
#pragma varlocate 14 UEP3
#pragma varlocate 14 UEP3bits
#pragma varlocate 14 UEP4
#pragma varlocate 14 UEP4bits
#pragma varlocate 14 UEP5
#pragma varlocate 14 UEP5bits
#pragma varlocate 14 UEP6
#pragma varlocate 14 UEP6bits
#pragma varlocate 14 UEP7
#pragma varlocate 14 UEP7bits
#pragma varlocate 14 UEP8
#pragma varlocate 14 UEP8bits
#pragma varlocate 14 UEP9
#pragma varlocate 14 UEP9bits
#pragma varlocate 14 UEP10
#pragma varlocate 14 UEP10bits
#pragma varlocate 14 UEP11
#pragma varlocate 14 UEP11bits
#pragma varlocate 14 UEP12
#pragma varlocate 14 UEP12bits
#pragma varlocate 14 UEP13
#pragma varlocate 14 UEP13bits
#pragma varlocate 14 UEP14
#pragma varlocate 14 UEP14bits
#pragma varlocate 14 UEP15
#pragma varlocate 14 UEP15bits
#pragma varlocate 14 UEIE
#pragma varlocate 14 UEIEbits
#pragma varlocate 14 UIE
#pragma varlocate 14 UIEbits
#pragma varlocate 14 UCFG
#pragma varlocate 14 UCFGbits
#pragma varlocate 14 RPOR0_1
#pragma varlocate 14 RPOR0_1bits
#pragma varlocate 14 RPOR2_3
#pragma varlocate 14 RPOR2_3bits
#pragma varlocate 14 RPOR4_5
#pragma varlocate 14 RPOR4_5bits
#pragma varlocate 14 RPOR6_7
#pragma varlocate 14 RPOR6_7bits
#pragma varlocate 14 RPOR8_9
#pragma varlocate 14 RPOR8_9bits
#pragma varlocate 14 RPOR10_11
#pragma varlocate 14 RPOR10_11bits
#pragma varlocate 14 RPOR12_13
#pragma varlocate 14 RPOR12_13bits
#pragma varlocate 14 RPOR14_15
#pragma varlocate 14 RPOR14_15bits
#pragma varlocate 14 RPOR16_17
#pragma varlocate 14 RPOR16_17bits
#pragma varlocate 14 RPOR18_19
#pragma varlocate 14 RPOR18_19bits
#pragma varlocate 14 RPOR20_21
#pragma varlocate 14 RPOR20_21bits
#pragma varlocate 14 RPOR22_23
#pragma varlocate 14 RPOR22_23bits
#pragma varlocate 14 RPOR24_25
#pragma varlocate 14 RPOR24_25bits
#pragma varlocate 14 RPOR26_27
#pragma varlocate 14 RPOR26_27bits
#pragma varlocate 14 RPOR28_29
#pragma varlocate 14 RPOR28_29bits
#pragma varlocate 14 RPOR30_31
#pragma varlocate 14 RPOR30_31bits
#pragma varlocate 14 RPOR32_33
#pragma varlocate 14 RPOR32_33bits
#pragma varlocate 14 RPOR34_35
#pragma varlocate 14 RPOR34_35bits
#pragma varlocate 14 RPOR36_37
#pragma varlocate 14 RPOR36_37bits
#pragma varlocate 14 RPOR38_39
#pragma varlocate 14 RPOR38_39bits
#pragma varlocate 14 RPOR40_41
#pragma varlocate 14 RPOR40_41bits
#pragma varlocate 14 RPOR42_43
#pragma varlocate 14 RPOR42_43bits
#pragma varlocate 14 RPOR44_45
#pragma varlocate 14 RPOR44_45bits
#pragma varlocate 14 RPOR46
#pragma varlocate 14 RPOR46bits
#pragma varlocate 14 RPINR0_1
#pragma varlocate 14 RPINR0_1bits
#pragma varlocate 14 RPINR2_3
#pragma varlocate 14 RPINR2_3bits
#pragma varlocate 14 RPINR4_5
#pragma varlocate 14 RPINR4_5bits
#pragma varlocate 14 RPINR6_7
#pragma varlocate 14 RPINR6_7bits
#pragma varlocate 14 RPINR8_9
#pragma varlocate 14 RPINR8_9bits
#pragma varlocate 14 RPINR10_11
#pragma varlocate 14 RPINR10_11bits
#pragma varlocate 14 RPINR12_13
#pragma varlocate 14 RPINR12_13bits
#pragma varlocate 14 RPINR14_15
#pragma varlocate 14 RPINR14_15bits
#pragma varlocate 14 RPINR16_17
#pragma varlocate 14 RPINR16_17bits
#pragma varlocate 14 RPINR18_19
#pragma varlocate 14 RPINR18_19bits
#pragma varlocate 14 RPINR20_21
#pragma varlocate 14 RPINR20_21bits
#pragma varlocate 14 RPINR22_23
#pragma varlocate 14 RPINR22_23bits
#pragma varlocate 14 RPINR24_25
#pragma varlocate 14 RPINR24_25bits
#pragma varlocate 14 RPINR26_27
#pragma varlocate 14 RPINR26_27bits
#pragma varlocate 14 RPINR28_29
#pragma varlocate 14 RPINR28_29bits
#pragma varlocate 14 RPINR30_31
#pragma varlocate 14 RPINR30_31bits
#pragma varlocate 14 RPINR32_33
#pragma varlocate 14 RPINR32_33bits
#pragma varlocate 14 RPINR34_35
#pragma varlocate 14 RPINR34_35bits
#pragma varlocate 14 RPINR36_37
#pragma varlocate 14 RPINR36_37bits
#pragma varlocate 14 RPINR38_39
#pragma varlocate 14 RPINR38_39bits
#pragma varlocate 14 RPINR40_41
#pragma varlocate 14 RPINR40_41bits
#pragma varlocate 14 RPINR42_43
#pragma varlocate 14 RPINR42_43bits
#pragma varlocate 14 RPINR44_45
#pragma varlocate 14 RPINR44_45bits
#pragma varlocate 14 RPINR46_47
#pragma varlocate 14 RPINR46_47bits
#pragma varlocate 14 RPINR48_49
#pragma varlocate 14 RPINR48_49bits
#pragma varlocate 14 RPINR50_51
#pragma varlocate 14 RPINR50_51bits
#pragma varlocate 14 RPINR52_53
#pragma varlocate 14 RPINR52_53bits
#pragma varlocate 14 ANCON3
#pragma varlocate 14 ANCON3bits
#pragma varlocate 14 ANCON2
#pragma varlocate 14 ANCON2bits
#pragma varlocate 14 ANCON1
#pragma varlocate 14 ANCON1bits
#pragma varlocate 14 ADCBUF1
#pragma varlocate 14 ADCBUF1L
#pragma varlocate 14 ADCBUF1H
#pragma varlocate 14 ADCBUF2
#pragma varlocate 14 ADCBUF2L
#pragma varlocate 14 ADCBUF2H
#pragma varlocate 14 ADCBUF3
#pragma varlocate 14 ADCBUF3L
#pragma varlocate 14 ADCBUF3H
#pragma varlocate 14 ADCBUF4
#pragma varlocate 14 ADCBUF4L
#pragma varlocate 14 ADCBUF4H
#pragma varlocate 14 ADCBUF5
#pragma varlocate 14 ADCBUF5L
#pragma varlocate 14 ADCBUF5H
#pragma varlocate 14 ADCBUF6
#pragma varlocate 14 ADCBUF6L
#pragma varlocate 14 ADCBUF6H
#pragma varlocate 14 ADCBUF7
#pragma varlocate 14 ADCBUF7L
#pragma varlocate 14 ADCBUF7H
#pragma varlocate 14 ADCBUF8
#pragma varlocate 14 ADCBUF8L
#pragma varlocate 14 ADCBUF8H
#pragma varlocate 14 ADCBUF9
#pragma varlocate 14 ADCBUF9L
#pragma varlocate 14 ADCBUF9H
#pragma varlocate 14 ADCBUF10
#pragma varlocate 14 ADCBUF10L
#pragma varlocate 14 ADCBUF10H
#pragma varlocate 14 ADCBUF11
#pragma varlocate 14 ADCBUF11L
#pragma varlocate 14 ADCBUF11H
#pragma varlocate 14 ADCBUF12
#pragma varlocate 14 ADCBUF12L
#pragma varlocate 14 ADCBUF12H
#pragma varlocate 14 ADCBUF13
#pragma varlocate 14 ADCBUF13L
#pragma varlocate 14 ADCBUF13H
#pragma varlocate 14 ADCBUF14
#pragma varlocate 14 ADCBUF14L
#pragma varlocate 14 ADCBUF14H
#pragma varlocate 14 ADCBUF15
#pragma varlocate 14 ADCBUF15L
#pragma varlocate 14 ADCBUF15H
#pragma varlocate 14 ADCBUF16
#pragma varlocate 14 ADCBUF16L
#pragma varlocate 14 ADCBUF16H
#pragma varlocate 14 ADCBUF17
#pragma varlocate 14 ADCBUF17L
#pragma varlocate 14 ADCBUF17H
#pragma varlocate 14 ADCBUF18
#pragma varlocate 14 ADCBUF18L
#pragma varlocate 14 ADCBUF18H
#pragma varlocate 14 ADCBUF19
#pragma varlocate 14 ADCBUF19L
#pragma varlocate 14 ADCBUF19H
#pragma varlocate 14 ADCBUF20
#pragma varlocate 14 ADCBUF20L
#pragma varlocate 14 ADCBUF20H
#pragma varlocate 14 ADCBUF21
#pragma varlocate 14 ADCBUF21L
#pragma varlocate 14 ADCBUF21H
#pragma varlocate 14 ADCBUF22
#pragma varlocate 14 ADCBUF22L
#pragma varlocate 14 ADCBUF22H
#pragma varlocate 14 ADCBUF23
#pragma varlocate 14 ADCBUF23L
#pragma varlocate 14 ADCBUF23H
#pragma varlocate 14 ADCBUF24
#pragma varlocate 14 ADCBUF24L
#pragma varlocate 14 ADCBUF24H
#pragma varlocate 14 ADCBUF25
#pragma varlocate 14 ADCBUF25L
#pragma varlocate 14 ADCBUF25H
#pragma varlocate 14 ADCTMUEN0L
#pragma varlocate 14 ADCTMUEN0Lbits
#pragma varlocate 14 ADCTMUEN0H
#pragma varlocate 14 ADCTMUEN0Hbits
#pragma varlocate 14 ADCTMUEN1L
#pragma varlocate 14 ADCTMUEN1Lbits
#pragma varlocate 14 ADCTMUEN1H
#pragma varlocate 14 ADCTMUEN1Hbits
#pragma varlocate 14 ADCHIT0L
#pragma varlocate 14 ADCHIT0Lbits
#pragma varlocate 14 ADCHIT0H
#pragma varlocate 14 ADCHIT0Hbits
#pragma varlocate 14 ADCHIT1L
#pragma varlocate 14 ADCHIT1Lbits
#pragma varlocate 14 ADCHIT1H
#pragma varlocate 14 ADCHIT1Hbits
#pragma varlocate 14 ADCSS0L
#pragma varlocate 14 ADCSS0Lbits
#pragma varlocate 14 ADCSS0H
#pragma varlocate 14 ADCSS0Hbits
#pragma varlocate 14 ADCSS1L
#pragma varlocate 14 ADCSS1Lbits
#pragma varlocate 14 ADCSS1H
#pragma varlocate 14 ADCSS1Hbits
#pragma varlocate 14 ADCHS0L
#pragma varlocate 14 ADCHS0Lbits
#pragma varlocate 14 ADCHS0H
#pragma varlocate 14 ADCHS0Hbits
#pragma varlocate 14 ADCON5L
#pragma varlocate 14 ADCON5Lbits
#pragma varlocate 14 ADCON5H
#pragma varlocate 14 ADCON5Hbits
#pragma varlocate 14 ADCON3L
#pragma varlocate 14 ADCON3Lbits
#pragma varlocate 14 ADCON3H
#pragma varlocate 14 ADCON3Hbits
#pragma varlocate 14 ADCON2L
#pragma varlocate 14 ADCON2Lbits
#pragma varlocate 14 ADCON2H
#pragma varlocate 14 ADCON2Hbits
#pragma varlocate 14 LCDDATA0
#pragma varlocate 14 LCDDATA0bits
#pragma varlocate 14 LCDDATA1
#pragma varlocate 14 LCDDATA1bits
#pragma varlocate 14 LCDDATA2
#pragma varlocate 14 LCDDATA2bits
#pragma varlocate 14 LCDDATA3
#pragma varlocate 14 LCDDATA3bits
#pragma varlocate 14 LCDDATA4
#pragma varlocate 14 LCDDATA4bits
#pragma varlocate 14 LCDDATA5
#pragma varlocate 14 LCDDATA5bits
#pragma varlocate 14 LCDDATA6
#pragma varlocate 14 LCDDATA6bits
#pragma varlocate 14 LCDDATA7
#pragma varlocate 14 LCDDATA7bits
#pragma varlocate 14 LCDDATA8
#pragma varlocate 14 LCDDATA8bits
#pragma varlocate 14 LCDDATA9
#pragma varlocate 14 LCDDATA9bits
#pragma varlocate 14 LCDDATA10
#pragma varlocate 14 LCDDATA10bits
#pragma varlocate 14 LCDDATA11
#pragma varlocate 14 LCDDATA11bits
#pragma varlocate 14 LCDDATA12
#pragma varlocate 14 LCDDATA12bits
#pragma varlocate 14 LCDDATA13
#pragma varlocate 14 LCDDATA13bits
#pragma varlocate 14 LCDDATA14
#pragma varlocate 14 LCDDATA14bits
#pragma varlocate 14 LCDDATA15
#pragma varlocate 14 LCDDATA15bits
#pragma varlocate 14 LCDDATA16
#pragma varlocate 14 LCDDATA16bits
#pragma varlocate 14 LCDDATA17
#pragma varlocate 14 LCDDATA17bits
#pragma varlocate 14 LCDDATA18
#pragma varlocate 14 LCDDATA18bits
#pragma varlocate 14 LCDDATA19
#pragma varlocate 14 LCDDATA19bits
#pragma varlocate 14 LCDDATA20
#pragma varlocate 14 LCDDATA20bits
#pragma varlocate 14 LCDDATA21
#pragma varlocate 14 LCDDATA21bits
#pragma varlocate 14 LCDDATA22
#pragma varlocate 14 LCDDATA22bits
#pragma varlocate 14 LCDDATA23
#pragma varlocate 14 LCDDATA23bits
#pragma varlocate 14 LCDDATA24
#pragma varlocate 14 LCDDATA24bits
#pragma varlocate 14 LCDDATA25
#pragma varlocate 14 LCDDATA25bits
#pragma varlocate 14 LCDDATA26
#pragma varlocate 14 LCDDATA26bits
#pragma varlocate 14 LCDDATA27
#pragma varlocate 14 LCDDATA27bits
#pragma varlocate 14 LCDDATA28
#pragma varlocate 14 LCDDATA28bits
#pragma varlocate 14 LCDDATA29
#pragma varlocate 14 LCDDATA29bits
#pragma varlocate 14 LCDDATA30
#pragma varlocate 14 LCDDATA30bits
#pragma varlocate 14 LCDDATA31
#pragma varlocate 14 LCDDATA31bits
#pragma varlocate 14 LCDDATA32
#pragma varlocate 14 LCDDATA32bits
#pragma varlocate 14 LCDDATA33
#pragma varlocate 14 LCDDATA33bits
#pragma varlocate 14 LCDDATA34
#pragma varlocate 14 LCDDATA34bits
#pragma varlocate 14 LCDDATA35
#pragma varlocate 14 LCDDATA35bits
#pragma varlocate 14 LCDDATA36
#pragma varlocate 14 LCDDATA36bits
#pragma varlocate 14 LCDDATA37
#pragma varlocate 14 LCDDATA37bits
#pragma varlocate 14 LCDDATA38
#pragma varlocate 14 LCDDATA38bits
#pragma varlocate 14 LCDDATA39
#pragma varlocate 14 LCDDATA39bits
#pragma varlocate 14 LCDDATA40
#pragma varlocate 14 LCDDATA40bits
#pragma varlocate 14 LCDDATA41
#pragma varlocate 14 LCDDATA41bits
#pragma varlocate 14 LCDDATA42
#pragma varlocate 14 LCDDATA42bits
#pragma varlocate 14 LCDDATA43
#pragma varlocate 14 LCDDATA43bits
#pragma varlocate 14 LCDDATA44
#pragma varlocate 14 LCDDATA44bits
#pragma varlocate 14 LCDDATA45
#pragma varlocate 14 LCDDATA45bits
#pragma varlocate 14 LCDDATA46
#pragma varlocate 14 LCDDATA46bits
#pragma varlocate 14 LCDDATA47
#pragma varlocate 14 LCDDATA47bits
#pragma varlocate 14 LCDDATA48
#pragma varlocate 14 LCDDATA48bits
#pragma varlocate 14 LCDDATA49
#pragma varlocate 14 LCDDATA49bits
#pragma varlocate 14 LCDDATA50
#pragma varlocate 14 LCDDATA50bits
#pragma varlocate 14 LCDDATA51
#pragma varlocate 14 LCDDATA51bits
#pragma varlocate 14 LCDDATA52
#pragma varlocate 14 LCDDATA52bits
#pragma varlocate 14 LCDDATA53
#pragma varlocate 14 LCDDATA53bits
#pragma varlocate 14 LCDDATA54
#pragma varlocate 14 LCDDATA54bits
#pragma varlocate 14 LCDDATA55
#pragma varlocate 14 LCDDATA55bits
#pragma varlocate 14 LCDDATA56
#pragma varlocate 14 LCDDATA56bits
#pragma varlocate 14 LCDDATA57
#pragma varlocate 14 LCDDATA57bits
#pragma varlocate 14 LCDDATA58
#pragma varlocate 14 LCDDATA58bits
#pragma varlocate 14 LCDDATA59
#pragma varlocate 14 LCDDATA59bits
#pragma varlocate 14 LCDDATA60
#pragma varlocate 14 LCDDATA60bits
#pragma varlocate 14 LCDDATA61
#pragma varlocate 14 LCDDATA61bits
#pragma varlocate 14 LCDDATA62
#pragma varlocate 14 LCDDATA62bits
#pragma varlocate 14 LCDDATA63
#pragma varlocate 14 LCDDATA63bits
#pragma varlocate 14 LCDSE0
#pragma varlocate 14 LCDSE0bits
#pragma varlocate 14 LCDSE1
#pragma varlocate 14 LCDSE1bits
#pragma varlocate 14 LCDSE2
#pragma varlocate 14 LCDSE2bits
#pragma varlocate 14 LCDSE3
#pragma varlocate 14 LCDSE3bits
#pragma varlocate 14 LCDSE4
#pragma varlocate 14 LCDSE4bits
#pragma varlocate 14 LCDSE5
#pragma varlocate 14 LCDSE5bits
#pragma varlocate 14 LCDSE6
#pragma varlocate 14 LCDSE6bits
#pragma varlocate 14 LCDSE7
#pragma varlocate 14 LCDSE7bits
#pragma varlocate 14 LCDRL
#pragma varlocate 14 LCDRLbits
#pragma varlocate 14 LCDREF
#pragma varlocate 14 LCDREFbits
#pragma varlocate 14 LCDREG
#pragma varlocate 14 LCDREGbits
#pragma varlocate 14 LCDCON
#pragma varlocate 14 LCDCONbits
#pragma varlocate 14 LCDPS
#pragma varlocate 14 LCDPSbits
#pragma varlocate 14 REFO2CON3
#pragma varlocate 14 REFO2CON3bits
#pragma varlocate 14 REFO2CON2
#pragma varlocate 14 REFO2CON2bits
#pragma varlocate 14 REFO2CON1
#pragma varlocate 14 REFO2CON1bits
#pragma varlocate 14 REFO2CON
#pragma varlocate 14 REFO2CONbits
#pragma varlocate 14 REFO1CON3
#pragma varlocate 14 REFO1CON3bits
#pragma varlocate 14 REFO1CON2
#pragma varlocate 14 REFO1CON2bits
#pragma varlocate 14 REFO1CON1
#pragma varlocate 14 REFO1CON1bits
#pragma varlocate 14 REFO1CON
#pragma varlocate 14 REFO1CONbits
#pragma varlocate 14 ODCON2
#pragma varlocate 14 ODCON2bits
#pragma varlocate 14 ODCON1
#pragma varlocate 14 ODCON1bits
#pragma varlocate 14 MDCARL
#pragma varlocate 14 MDCARLbits
#pragma varlocate 14 MDCARH
#pragma varlocate 14 MDCARHbits
#pragma varlocate 14 MDSRC
#pragma varlocate 14 MDSRCbits
#pragma varlocate 14 MDCON
#pragma varlocate 14 MDCONbits
#pragma varlocate 14 PMD4
#pragma varlocate 14 PMD4bits
#pragma varlocate 14 PMD3
#pragma varlocate 14 PMD3bits
#pragma varlocate 14 PMD2
#pragma varlocate 14 PMD2bits
#pragma varlocate 14 PMD1
#pragma varlocate 14 PMD1bits
#pragma varlocate 14 PMD0
#pragma varlocate 14 PMD0bits
#pragma varlocate 14 CTMUCON4
#pragma varlocate 14 CTMUCON4bits
#pragma varlocate 14 CTMUCON3
#pragma varlocate 14 CTMUCON3bits
#pragma varlocate 14 CTMUCON2
#pragma varlocate 14 CTMUCON2bits
#pragma varlocate 14 CTMUCON1
#pragma varlocate 14 CTMUCON1bits
#pragma varlocate 14 TXREG4
#pragma varlocate 14 RCREG4
#pragma varlocate 14 SPBRG4
#pragma varlocate 14 SPBRG4bits
#pragma varlocate 14 SPBRGH4
#pragma varlocate 14 SPBRGH4bits
#pragma varlocate 14 BAUDCON4
#pragma varlocate 14 BAUDCON4bits
#pragma varlocate 14 TXSTA4
#pragma varlocate 14 TXSTA4bits
#pragma varlocate 14 RCSTA4
#pragma varlocate 14 RCSTA4bits
#pragma varlocate 15 DMACON2
#pragma varlocate 15 DMACON2bits
#pragma varlocate 15 ANCFG
#pragma varlocate 15 ANCFGbits
#pragma varlocate 15 SSP2ADD
#pragma varlocate 15 SSP2BUF
#pragma varlocate 15 T4CON
#pragma varlocate 15 T4CONbits
#pragma varlocate 15 PR4
#pragma varlocate 15 TMR4
#pragma varlocate 15 CCP7CON
#pragma varlocate 15 CCP7CONbits
#pragma varlocate 15 CCPR7
#pragma varlocate 15 CCPR7L
#pragma varlocate 15 CCPR7H
#pragma varlocate 15 CCP6CON
#pragma varlocate 15 CCP6CONbits
#pragma varlocate 15 CCPR6
#pragma varlocate 15 CCPR6L
#pragma varlocate 15 CCPR6H
#pragma varlocate 15 CCP5CON
#pragma varlocate 15 CCP5CONbits
#pragma varlocate 15 CCPR5
#pragma varlocate 15 CCPR5L
#pragma varlocate 15 CCPR5H
#pragma varlocate 15 CCP4CON
#pragma varlocate 15 CCP4CONbits
#pragma varlocate 15 CCPR4
#pragma varlocate 15 CCPR4L
#pragma varlocate 15 CCPR4H
#pragma varlocate 15 T5GCON
#pragma varlocate 15 T5GCONbits
#pragma varlocate 15 T5CON
#pragma varlocate 15 T5CONbits
#pragma varlocate 15 TMR5L
#pragma varlocate 15 TMR5H
#pragma varlocate 15 SSP2MSK
#pragma varlocate 15 SSP2MSKbits
#pragma varlocate 15 SSP2CON2
#pragma varlocate 15 SSP2CON2bits
#pragma varlocate 15 SSP2CON1
#pragma varlocate 15 SSP2CON1bits
#pragma varlocate 15 SSP2STAT
#pragma varlocate 15 SSP2STATbits
#pragma varlocate 15 PSTR3CON
#pragma varlocate 15 PSTR3CONbits
#pragma varlocate 15 PSTR2CON
#pragma varlocate 15 PSTR2CONbits
#pragma varlocate 15 TXREG2
#pragma varlocate 15 RCREG2
#pragma varlocate 15 SPBRG2
#pragma varlocate 15 SPBRG2bits
#pragma varlocate 15 SPBRGH2
#pragma varlocate 15 SPBRGH2bits
#pragma varlocate 15 DSGPR3
#pragma varlocate 15 DSGPR2
#pragma varlocate 15 DSGPR1
#pragma varlocate 15 DSGPR0
#pragma varlocate 15 DSWAKEH
#pragma varlocate 15 DSWAKEHbits
#pragma varlocate 15 DSWAKEL
#pragma varlocate 15 DSWAKELbits
#pragma varlocate 15 DSCONH
#pragma varlocate 15 DSCONHbits
#pragma varlocate 15 DSCONL
#pragma varlocate 15 DSCONLbits
#pragma varlocate 15 TXREG3
#pragma varlocate 15 RCREG3
#pragma varlocate 15 SPBRG3
#pragma varlocate 15 SPBRG3bits
#pragma varlocate 15 SPBRGH3
#pragma varlocate 15 SPBRGH3bits
#pragma varlocate 15 BAUDCON3
#pragma varlocate 15 BAUDCON3bits
#pragma varlocate 15 TXSTA3
#pragma varlocate 15 TXSTA3bits
#pragma varlocate 15 RCSTA3
#pragma varlocate 15 RCSTA3bits
#pragma varlocate 15 SPBRGH
#pragma varlocate 15 SPBRGHbits
#pragma varlocate 15 SPBRGH1
#pragma varlocate 15 SPBRGH1bits
#pragma varlocate 15 BAUDCON2
#pragma varlocate 15 BAUDCON2bits
#pragma varlocate 15 TXSTA2
#pragma varlocate 15 TXSTA2bits
#pragma varlocate 15 RCSTA2
#pragma varlocate 15 RCSTA2bits
#pragma varlocate 15 CCPTMRS2
#pragma varlocate 15 CCPTMRS2bits
#pragma varlocate 15 CCPTMRS1
#pragma varlocate 15 CCPTMRS1bits
#pragma varlocate 15 CCPTMRS0
#pragma varlocate 15 CCPTMRS0bits
#pragma varlocate 15 CM3CON
#pragma varlocate 15 CM3CONbits
#pragma varlocate 15 CM2CON
#pragma varlocate 15 CM2CONbits
#pragma varlocate 15 SSP2CON3
#pragma varlocate 15 SSP2CON3bits
#pragma varlocate 15 T8CON
#pragma varlocate 15 T8CONbits
#pragma varlocate 15 PR8
#pragma varlocate 15 TMR8
#pragma varlocate 15 T6CON
#pragma varlocate 15 T6CONbits
#pragma varlocate 15 PR6
#pragma varlocate 15 TMR6
#pragma varlocate 15 CCP10CON
#pragma varlocate 15 CCP10CONbits
#pragma varlocate 15 CCPR10
#pragma varlocate 15 CCPR10L
#pragma varlocate 15 CCPR10H
#pragma varlocate 15 CCP9CON
#pragma varlocate 15 CCP9CONbits
#pragma varlocate 15 CCPR9
#pragma varlocate 15 CCPR9L
#pragma varlocate 15 CCPR9H
#pragma varlocate 15 CCP8CON
#pragma varlocate 15 CCP8CONbits
#pragma varlocate 15 CCPR8
#pragma varlocate 15 CCPR8L
#pragma varlocate 15 CCPR8H
#pragma varlocate 15 CCP3CON
#pragma varlocate 15 CCP3CONbits
#pragma varlocate 15 CCPR3
#pragma varlocate 15 CCPR3L
#pragma varlocate 15 CCPR3H
#pragma varlocate 15 ECCP3DEL
#pragma varlocate 15 ECCP3DELbits
#pragma varlocate 15 ECCP3AS
#pragma varlocate 15 ECCP3ASbits
#pragma varlocate 15 CCP2CON
#pragma varlocate 15 CCP2CONbits
#pragma varlocate 15 CCPR2
#pragma varlocate 15 CCPR2L
#pragma varlocate 15 CCPR2H
#pragma varlocate 15 ECCP2DEL
#pragma varlocate 15 ECCP2DELbits
#pragma varlocate 15 ECCP2AS
#pragma varlocate 15 ECCP2ASbits
#pragma varlocate 15 CM1CON
#pragma varlocate 15 CM1CONbits
#pragma varlocate 15 PADCFG1
#pragma varlocate 15 PADCFG1bits
#pragma varlocate 15 IOCN
#pragma varlocate 15 IOCNbits
#pragma varlocate 15 IOCP
#pragma varlocate 15 IOCPbits
#pragma varlocate 15 RTCCON2
#pragma varlocate 15 RTCCON2bits
#pragma varlocate 15 ALRMVALL
#pragma varlocate 15 ALRMVALH
#pragma varlocate 15 ALRMRPT
#pragma varlocate 15 ALRMRPTbits
#pragma varlocate 15 ALRMCFG
#pragma varlocate 15 ALRMCFGbits
#pragma varlocate 15 RTCVALL
#pragma varlocate 15 RTCVALH
#pragma varlocate 15 RTCCAL
#pragma varlocate 15 RTCCALbits
#pragma varlocate 15 RTCCON1
#pragma varlocate 15 RTCCON1bits

/*-------------------------------------------------------------------------
 * Some useful defines for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define ACCESS 0
#define BANKED 1

/*-------------------------------------------------------------------------
 * Some useful macros for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define Nop()    {_asm nop _endasm}
#define ClrWdt() {_asm clrwdt _endasm}
#define Sleep()  {_asm sleep _endasm}
#define Reset()  {_asm reset _endasm}

#define Rlcf(f,dest,access)  {_asm movlb f rlcf f,dest,access _endasm}
#define Rlncf(f,dest,access) {_asm movlb f rlncf f,dest,access _endasm}
#define Rrcf(f,dest,access)  {_asm movlb f rrcf f,dest,access _endasm}
#define Rrncf(f,dest,access) {_asm movlb f rrncf f,dest,access _endasm}
#define Swapf(f,dest,access) {_asm movlb f swapf f,dest,access _endasm }

/*-------------------------------------------------------------------------
 * A fairly inclusive set of registers to save for interrupts.
 * These are locations which are commonly used by the compiler.
 *-------------------------------------------------------------------------*/
#define INTSAVELOCS TBLPTR, TABLAT, PROD


#endif
