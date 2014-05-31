        LIST P=18F97J94
        NOLIST
;-------------------------------------------------------------------------
; MPLAB-Cxx  PIC18F97J94 processor definition module
; 
; (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;-------------------------------------------------------------------------

SFR_UNBANKED0       UDATA_ACS H'F60'

DMACON1             
DMACON1bits         RES 1     ; 0xF60
PIE6                
PIE6bits            RES 1     ; 0xF61
WPUB                
WPUBbits            RES 1     ; 0xF62
ACTCON              
ACTCONbits          RES 1     ; 0xF63
OSCCON4             
OSCCON4bits         RES 1     ; 0xF64
OSCCON3             
OSCCON3bits         RES 1     ; 0xF65
OSCCON2             
OSCCON2bits         RES 1     ; 0xF66
BAUDCON             
BAUDCONbits         
BAUDCON1            
BAUDCON1bits        RES 1     ; 0xF67
SSP1MSK             
SSP1MSKbits         RES 1     ; 0xF68
SSP1CON3            
SSP1CON3bits        RES 1     ; 0xF69
TXBUF               
TXBUFbits           RES 1     ; 0xF6A
DMABCH              
DMABCHbits          RES 1     ; 0xF6B
DMABCL              
DMABCLbits          RES 1     ; 0xF6C
RXADDRH             
RXADDRHbits         RES 1     ; 0xF6D
RXADDRL             
RXADDRLbits         RES 1     ; 0xF6E
TXADDRH             
TXADDRHbits         RES 1     ; 0xF6F
TXADDRL             
TXADDRLbits         RES 1     ; 0xF70
PORTVP              
PORTVPbits          RES 1     ; 0xF71
LATVP               
LATVPbits           RES 1     ; 0xF72
TRISVP              
TRISVPbits          RES 1     ; 0xF73
UADDR               
UADDRbits           RES 1     ; 0xF74
UCON                
UCONbits            RES 1     ; 0xF75
USTAT               
USTATbits           RES 1     ; 0xF76
UEIR                
UEIRbits            RES 1     ; 0xF77
UIR                 
UIRbits             RES 1     ; 0xF78
UFRM                
UFRMH               
UFRMHbits           RES 1     ; 0xF79
UFRML               
UFRMLbits           RES 1     ; 0xF7A
RCON4               
RCON4bits           RES 1     ; 0xF7B
RCON3               
RCON3bits           RES 1     ; 0xF7C
RCON2               
RCON2bits           RES 1     ; 0xF7D
EECON2              RES 1     ; 0xF7E
EECON1              
EECON1bits          RES 1     ; 0xF7F
PORTA               
PORTAbits           RES 1     ; 0xF80
PORTB               
PORTBbits           RES 1     ; 0xF81
PORTC               
PORTCbits           RES 1     ; 0xF82
PORTD               
PORTDbits           RES 1     ; 0xF83
PORTE               
PORTEbits           RES 1     ; 0xF84
PORTF               
PORTFbits           RES 1     ; 0xF85
PORTG               
PORTGbits           RES 1     ; 0xF86
PORTH               
PORTHbits           RES 1     ; 0xF87
PORTJ               
PORTJbits           RES 1     ; 0xF88
LATA                
LATAbits            RES 1     ; 0xF89
LATB                
LATBbits            RES 1     ; 0xF8A
LATC                
LATCbits            RES 1     ; 0xF8B
LATD                
LATDbits            RES 1     ; 0xF8C
LATE                
LATEbits            RES 1     ; 0xF8D
LATF                
LATFbits            RES 1     ; 0xF8E
LATG                
LATGbits            RES 1     ; 0xF8F
LATH                
LATHbits            RES 1     ; 0xF90
LATJ                
LATJbits            RES 1     ; 0xF91
TRISA               
TRISAbits           RES 1     ; 0xF92
TRISB               
TRISBbits           RES 1     ; 0xF93
TRISC               
TRISCbits           RES 1     ; 0xF94
TRISD               
TRISDbits           RES 1     ; 0xF95
TRISE               
TRISEbits           RES 1     ; 0xF96
TRISF               
TRISFbits           RES 1     ; 0xF97
TRISG               
TRISGbits           RES 1     ; 0xF98
TRISH               
TRISHbits           RES 1     ; 0xF99
TRISJ               
TRISJbits           RES 1     ; 0xF9A
OSCTUNE             
OSCTUNEbits         RES 1     ; 0xF9B
PSTR1CON            
PSTR1CONbits        RES 1     ; 0xF9C
PIE1                
PIE1bits            RES 1     ; 0xF9D
PIR1                
PIR1bits            RES 1     ; 0xF9E
IPR1                
IPR1bits            RES 1     ; 0xF9F
PIE2                
PIE2bits            RES 1     ; 0xFA0
PIR2                
PIR2bits            RES 1     ; 0xFA1
IPR2                
IPR2bits            RES 1     ; 0xFA2
PIE3                
PIE3bits            RES 1     ; 0xFA3
PIR3                
PIR3bits            RES 1     ; 0xFA4
IPR3                
IPR3bits            RES 1     ; 0xFA5
PIR6                
PIR6bits            RES 1     ; 0xFA6
PSPCON              
PSPCONbits          RES 1     ; 0xFA7
HLVDCON             
HLVDCONbits         RES 1     ; 0xFA8
IPR6                
IPR6bits            RES 1     ; 0xFA9
T1GCON              
T1GCONbits          RES 1     ; 0xFAA
RCSTA               
RCSTAbits           
RCSTA1              
RCSTA1bits          RES 1     ; 0xFAB
TXSTA               
TXSTAbits           
TXSTA1              
TXSTA1bits          RES 1     ; 0xFAC
TXREG               
TXREG1              RES 1     ; 0xFAD
RCREG               
RCREG1              RES 1     ; 0xFAE
SPBRG               
SPBRGbits           
SPBRG1              
SPBRG1bits          RES 1     ; 0xFAF
T3GCON              
T3GCONbits          RES 1     ; 0xFB0
T3CON               
T3CONbits           RES 1     ; 0xFB1
TMR3L               RES 1     ; 0xFB2
TMR3H               RES 1     ; 0xFB3
PIE4                
PIE4bits            RES 1     ; 0xFB4
PIR4                
PIR4bits            RES 1     ; 0xFB5
IPR4                
IPR4bits            RES 1     ; 0xFB6
PIE5                
PIE5bits            RES 1     ; 0xFB7
PIR5                
PIR5bits            RES 1     ; 0xFB8
CCP1CON             
CCP1CONbits         RES 1     ; 0xFB9
CCPR1               
CCPR1L              RES 1     ; 0xFBA
CCPR1H              RES 1     ; 0xFBB
ECCP1DEL            
ECCP1DELbits        RES 1     ; 0xFBC
ECCP1AS             
ECCP1ASbits         RES 1     ; 0xFBD
CVRCONL             
CVRCONLbits         RES 1     ; 0xFBE
CVRCONH             
CVRCONHbits         RES 1     ; 0xFBF
ADCON1L             
ADCON1Lbits         RES 1     ; 0xFC0
ADCON1H             
ADCON1Hbits         RES 1     ; 0xFC1
ADCBUF0             
ADCBUF0L            RES 1     ; 0xFC2
ADCBUF0H            RES 1     ; 0xFC3
CMSTAT              
CMSTATbits          RES 1     ; 0xFC4
SSP1CON2            
SSP1CON2bits        RES 1     ; 0xFC5
SSP1CON1            
SSP1CON1bits        RES 1     ; 0xFC6
SSP1STAT            
SSP1STATbits        RES 1     ; 0xFC7
SSP1ADD             RES 1     ; 0xFC8
SSP1BUF             RES 1     ; 0xFC9
T2CON               
T2CONbits           RES 1     ; 0xFCA
PR2                 RES 1     ; 0xFCB
TMR2                RES 1     ; 0xFCC
T1CON               
T1CONbits           RES 1     ; 0xFCD
TMR1L               RES 1     ; 0xFCE
TMR1H               RES 1     ; 0xFCF
RCON                
RCONbits            RES 1     ; 0xFD0
IOCF                
IOCFbits            RES 1     ; 0xFD1
IPR5                
IPR5bits            RES 1     ; 0xFD2
OSCCON              
OSCCONbits          RES 1     ; 0xFD3
                    RES 1
T0CON               
T0CONbits           RES 1     ; 0xFD5
TMR0L               RES 1     ; 0xFD6
TMR0H               RES 1     ; 0xFD7
STATUS              
STATUSbits          RES 1     ; 0xFD8
FSR2                
FSR2L               RES 1     ; 0xFD9
FSR2H               RES 1     ; 0xFDA
PLUSW2              RES 1     ; 0xFDB
PREINC2             RES 1     ; 0xFDC
POSTDEC2            RES 1     ; 0xFDD
POSTINC2            RES 1     ; 0xFDE
INDF2               RES 1     ; 0xFDF
BSR                 RES 1     ; 0xFE0
FSR1                
FSR1L               RES 1     ; 0xFE1
FSR1H               RES 1     ; 0xFE2
PLUSW1              RES 1     ; 0xFE3
PREINC1             RES 1     ; 0xFE4
POSTDEC1            RES 1     ; 0xFE5
POSTINC1            RES 1     ; 0xFE6
INDF1               RES 1     ; 0xFE7
WREG                RES 1     ; 0xFE8
FSR0                
FSR0L               RES 1     ; 0xFE9
FSR0H               RES 1     ; 0xFEA
PLUSW0              RES 1     ; 0xFEB
PREINC0             RES 1     ; 0xFEC
POSTDEC0            RES 1     ; 0xFED
POSTINC0            RES 1     ; 0xFEE
INDF0               RES 1     ; 0xFEF
INTCON3             
INTCON3bits         RES 1     ; 0xFF0
INTCON2             
INTCON2bits         RES 1     ; 0xFF1
INTCON              
INTCONbits          RES 1     ; 0xFF2
PROD                
PRODL               RES 1     ; 0xFF3
PRODH               RES 1     ; 0xFF4
TABLAT              RES 1     ; 0xFF5
TBLPTR              
TBLPTRL             RES 1     ; 0xFF6
TBLPTRH             RES 1     ; 0xFF7
TBLPTRU             RES 1     ; 0xFF8
PC                  
PCL                 RES 1     ; 0xFF9
PCLATH              RES 1     ; 0xFFA
PCLATU              RES 1     ; 0xFFB
STKPTR              
STKPTRbits          RES 1     ; 0xFFC
TOS                 
TOSL                RES 1     ; 0xFFD
TOSH                RES 1     ; 0xFFE
TOSU                RES 1     ; 0xFFF

SFR_BANKED0         UDATA H'DFF'

UEP0                
UEP0bits            RES 1     ; 0xDFF

SFR_BANKED1         UDATA H'E00'
UEP1                
UEP1bits            RES 1     ; 0xE00
UEP2                
UEP2bits            RES 1     ; 0xE01
UEP3                
UEP3bits            RES 1     ; 0xE02
UEP4                
UEP4bits            RES 1     ; 0xE03
UEP5                
UEP5bits            RES 1     ; 0xE04
UEP6                
UEP6bits            RES 1     ; 0xE05
UEP7                
UEP7bits            RES 1     ; 0xE06
UEP8                
UEP8bits            RES 1     ; 0xE07
UEP9                
UEP9bits            RES 1     ; 0xE08
UEP10               
UEP10bits           RES 1     ; 0xE09
UEP11               
UEP11bits           RES 1     ; 0xE0A
UEP12               
UEP12bits           RES 1     ; 0xE0B
UEP13               
UEP13bits           RES 1     ; 0xE0C
UEP14               
UEP14bits           RES 1     ; 0xE0D
UEP15               
UEP15bits           RES 1     ; 0xE0E
UEIE                
UEIEbits            RES 1     ; 0xE0F
UIE                 
UIEbits             RES 1     ; 0xE10
UCFG                
UCFGbits            RES 1     ; 0xE11
RPOR0_1             
RPOR0_1bits         RES 1     ; 0xE12
RPOR2_3             
RPOR2_3bits         RES 1     ; 0xE13
RPOR4_5             
RPOR4_5bits         RES 1     ; 0xE14
RPOR6_7             
RPOR6_7bits         RES 1     ; 0xE15
RPOR8_9             
RPOR8_9bits         RES 1     ; 0xE16
RPOR10_11           
RPOR10_11bits       RES 1     ; 0xE17
RPOR12_13           
RPOR12_13bits       RES 1     ; 0xE18
RPOR14_15           
RPOR14_15bits       RES 1     ; 0xE19
RPOR16_17           
RPOR16_17bits       RES 1     ; 0xE1A
RPOR18_19           
RPOR18_19bits       RES 1     ; 0xE1B
RPOR20_21           
RPOR20_21bits       RES 1     ; 0xE1C
RPOR22_23           
RPOR22_23bits       RES 1     ; 0xE1D
RPOR24_25           
RPOR24_25bits       RES 1     ; 0xE1E
RPOR26_27           
RPOR26_27bits       RES 1     ; 0xE1F
RPOR28_29           
RPOR28_29bits       RES 1     ; 0xE20
RPOR30_31           
RPOR30_31bits       RES 1     ; 0xE21
RPOR32_33           
RPOR32_33bits       RES 1     ; 0xE22
RPOR34_35           
RPOR34_35bits       RES 1     ; 0xE23
RPOR36_37           
RPOR36_37bits       RES 1     ; 0xE24
RPOR38_39           
RPOR38_39bits       RES 1     ; 0xE25
RPOR40_41           
RPOR40_41bits       RES 1     ; 0xE26
RPOR42_43           
RPOR42_43bits       RES 1     ; 0xE27
RPOR44_45           
RPOR44_45bits       RES 1     ; 0xE28
RPOR46              
RPOR46bits          RES 1     ; 0xE29
RPINR0_1            
RPINR0_1bits        RES 1     ; 0xE2A
RPINR2_3            
RPINR2_3bits        RES 1     ; 0xE2B
RPINR4_5            
RPINR4_5bits        RES 1     ; 0xE2C
RPINR6_7            
RPINR6_7bits        RES 1     ; 0xE2D
RPINR8_9            
RPINR8_9bits        RES 1     ; 0xE2E
RPINR10_11          
RPINR10_11bits      RES 1     ; 0xE2F
RPINR12_13          
RPINR12_13bits      RES 1     ; 0xE30
RPINR14_15          
RPINR14_15bits      RES 1     ; 0xE31
RPINR16_17          
RPINR16_17bits      RES 1     ; 0xE32
RPINR18_19          
RPINR18_19bits      RES 1     ; 0xE33
RPINR20_21          
RPINR20_21bits      RES 1     ; 0xE34
RPINR22_23          
RPINR22_23bits      RES 1     ; 0xE35
RPINR24_25          
RPINR24_25bits      RES 1     ; 0xE36
RPINR26_27          
RPINR26_27bits      RES 1     ; 0xE37
RPINR28_29          
RPINR28_29bits      RES 1     ; 0xE38
RPINR30_31          
RPINR30_31bits      RES 1     ; 0xE39
RPINR32_33          
RPINR32_33bits      RES 1     ; 0xE3A
RPINR34_35          
RPINR34_35bits      RES 1     ; 0xE3B
RPINR36_37          
RPINR36_37bits      RES 1     ; 0xE3C
RPINR38_39          
RPINR38_39bits      RES 1     ; 0xE3D
RPINR40_41          
RPINR40_41bits      RES 1     ; 0xE3E
RPINR42_43          
RPINR42_43bits      RES 1     ; 0xE3F
RPINR44_45          
RPINR44_45bits      RES 1     ; 0xE40
RPINR46_47          
RPINR46_47bits      RES 1     ; 0xE41
RPINR48_49          
RPINR48_49bits      RES 1     ; 0xE42
RPINR50_51          
RPINR50_51bits      RES 1     ; 0xE43
RPINR52_53          
RPINR52_53bits      RES 1     ; 0xE44
ANCON3              
ANCON3bits          RES 1     ; 0xE45
ANCON2              
ANCON2bits          RES 1     ; 0xE46
ANCON1              
ANCON1bits          RES 1     ; 0xE47
ADCBUF1             
ADCBUF1L            RES 1     ; 0xE48
ADCBUF1H            RES 1     ; 0xE49
ADCBUF2             
ADCBUF2L            RES 1     ; 0xE4A
ADCBUF2H            RES 1     ; 0xE4B
ADCBUF3             
ADCBUF3L            RES 1     ; 0xE4C
ADCBUF3H            RES 1     ; 0xE4D
ADCBUF4             
ADCBUF4L            RES 1     ; 0xE4E
ADCBUF4H            RES 1     ; 0xE4F
ADCBUF5             
ADCBUF5L            RES 1     ; 0xE50
ADCBUF5H            RES 1     ; 0xE51
ADCBUF6             
ADCBUF6L            RES 1     ; 0xE52
ADCBUF6H            RES 1     ; 0xE53
ADCBUF7             
ADCBUF7L            RES 1     ; 0xE54
ADCBUF7H            RES 1     ; 0xE55
ADCBUF8             
ADCBUF8L            RES 1     ; 0xE56
ADCBUF8H            RES 1     ; 0xE57
ADCBUF9             
ADCBUF9L            RES 1     ; 0xE58
ADCBUF9H            RES 1     ; 0xE59
ADCBUF10            
ADCBUF10L           RES 1     ; 0xE5A
ADCBUF10H           RES 1     ; 0xE5B
ADCBUF11            
ADCBUF11L           RES 1     ; 0xE5C
ADCBUF11H           RES 1     ; 0xE5D
ADCBUF12            
ADCBUF12L           RES 1     ; 0xE5E
ADCBUF12H           RES 1     ; 0xE5F
ADCBUF13            
ADCBUF13L           RES 1     ; 0xE60
ADCBUF13H           RES 1     ; 0xE61
ADCBUF14            
ADCBUF14L           RES 1     ; 0xE62
ADCBUF14H           RES 1     ; 0xE63
ADCBUF15            
ADCBUF15L           RES 1     ; 0xE64
ADCBUF15H           RES 1     ; 0xE65
ADCBUF16            
ADCBUF16L           RES 1     ; 0xE66
ADCBUF16H           RES 1     ; 0xE67
ADCBUF17            
ADCBUF17L           RES 1     ; 0xE68
ADCBUF17H           RES 1     ; 0xE69
ADCBUF18            
ADCBUF18L           RES 1     ; 0xE6A
ADCBUF18H           RES 1     ; 0xE6B
ADCBUF19            
ADCBUF19L           RES 1     ; 0xE6C
ADCBUF19H           RES 1     ; 0xE6D
ADCBUF20            
ADCBUF20L           RES 1     ; 0xE6E
ADCBUF20H           RES 1     ; 0xE6F
ADCBUF21            
ADCBUF21L           RES 1     ; 0xE70
ADCBUF21H           RES 1     ; 0xE71
ADCBUF22            
ADCBUF22L           RES 1     ; 0xE72
ADCBUF22H           RES 1     ; 0xE73
ADCBUF23            
ADCBUF23L           RES 1     ; 0xE74
ADCBUF23H           RES 1     ; 0xE75
ADCBUF24            
ADCBUF24L           RES 1     ; 0xE76
ADCBUF24H           RES 1     ; 0xE77
ADCBUF25            
ADCBUF25L           RES 1     ; 0xE78
ADCBUF25H           RES 1     ; 0xE79
ADCTMUEN0L          
ADCTMUEN0Lbits      RES 1     ; 0xE7A
ADCTMUEN0H          
ADCTMUEN0Hbits      RES 1     ; 0xE7B
ADCTMUEN1L          
ADCTMUEN1Lbits      RES 1     ; 0xE7C
ADCTMUEN1H          
ADCTMUEN1Hbits      RES 1     ; 0xE7D
ADCHIT0L            
ADCHIT0Lbits        RES 1     ; 0xE7E
ADCHIT0H            
ADCHIT0Hbits        RES 1     ; 0xE7F
ADCHIT1L            
ADCHIT1Lbits        RES 1     ; 0xE80
ADCHIT1H            
ADCHIT1Hbits        RES 1     ; 0xE81
ADCSS0L             
ADCSS0Lbits         RES 1     ; 0xE82
ADCSS0H             
ADCSS0Hbits         RES 1     ; 0xE83
ADCSS1L             
ADCSS1Lbits         RES 1     ; 0xE84
ADCSS1H             
ADCSS1Hbits         RES 1     ; 0xE85
ADCHS0L             
ADCHS0Lbits         RES 1     ; 0xE86
ADCHS0H             
ADCHS0Hbits         RES 1     ; 0xE87
ADCON5L             
ADCON5Lbits         RES 1     ; 0xE88
ADCON5H             
ADCON5Hbits         RES 1     ; 0xE89
ADCON3L             
ADCON3Lbits         RES 1     ; 0xE8A
ADCON3H             
ADCON3Hbits         RES 1     ; 0xE8B
ADCON2L             
ADCON2Lbits         RES 1     ; 0xE8C
ADCON2H             
ADCON2Hbits         RES 1     ; 0xE8D
LCDDATA0            
LCDDATA0bits        RES 1     ; 0xE8E
LCDDATA1            
LCDDATA1bits        RES 1     ; 0xE8F
LCDDATA2            
LCDDATA2bits        RES 1     ; 0xE90
LCDDATA3            
LCDDATA3bits        RES 1     ; 0xE91
LCDDATA4            
LCDDATA4bits        RES 1     ; 0xE92
LCDDATA5            
LCDDATA5bits        RES 1     ; 0xE93
LCDDATA6            
LCDDATA6bits        RES 1     ; 0xE94
LCDDATA7            
LCDDATA7bits        RES 1     ; 0xE95
LCDDATA8            
LCDDATA8bits        RES 1     ; 0xE96
LCDDATA9            
LCDDATA9bits        RES 1     ; 0xE97
LCDDATA10           
LCDDATA10bits       RES 1     ; 0xE98
LCDDATA11           
LCDDATA11bits       RES 1     ; 0xE99
LCDDATA12           
LCDDATA12bits       RES 1     ; 0xE9A
LCDDATA13           
LCDDATA13bits       RES 1     ; 0xE9B
LCDDATA14           
LCDDATA14bits       RES 1     ; 0xE9C
LCDDATA15           
LCDDATA15bits       RES 1     ; 0xE9D
LCDDATA16           
LCDDATA16bits       RES 1     ; 0xE9E
LCDDATA17           
LCDDATA17bits       RES 1     ; 0xE9F
LCDDATA18           
LCDDATA18bits       RES 1     ; 0xEA0
LCDDATA19           
LCDDATA19bits       RES 1     ; 0xEA1
LCDDATA20           
LCDDATA20bits       RES 1     ; 0xEA2
LCDDATA21           
LCDDATA21bits       RES 1     ; 0xEA3
LCDDATA22           
LCDDATA22bits       RES 1     ; 0xEA4
LCDDATA23           
LCDDATA23bits       RES 1     ; 0xEA5
LCDDATA24           
LCDDATA24bits       RES 1     ; 0xEA6
LCDDATA25           
LCDDATA25bits       RES 1     ; 0xEA7
LCDDATA26           
LCDDATA26bits       RES 1     ; 0xEA8
LCDDATA27           
LCDDATA27bits       RES 1     ; 0xEA9
LCDDATA28           
LCDDATA28bits       RES 1     ; 0xEAA
LCDDATA29           
LCDDATA29bits       RES 1     ; 0xEAB
LCDDATA30           
LCDDATA30bits       RES 1     ; 0xEAC
LCDDATA31           
LCDDATA31bits       RES 1     ; 0xEAD
LCDDATA32           
LCDDATA32bits       RES 1     ; 0xEAE
LCDDATA33           
LCDDATA33bits       RES 1     ; 0xEAF
LCDDATA34           
LCDDATA34bits       RES 1     ; 0xEB0
LCDDATA35           
LCDDATA35bits       RES 1     ; 0xEB1
LCDDATA36           
LCDDATA36bits       RES 1     ; 0xEB2
LCDDATA37           
LCDDATA37bits       RES 1     ; 0xEB3
LCDDATA38           
LCDDATA38bits       RES 1     ; 0xEB4
LCDDATA39           
LCDDATA39bits       RES 1     ; 0xEB5
LCDDATA40           
LCDDATA40bits       RES 1     ; 0xEB6
LCDDATA41           
LCDDATA41bits       RES 1     ; 0xEB7
LCDDATA42           
LCDDATA42bits       RES 1     ; 0xEB8
LCDDATA43           
LCDDATA43bits       RES 1     ; 0xEB9
LCDDATA44           
LCDDATA44bits       RES 1     ; 0xEBA
LCDDATA45           
LCDDATA45bits       RES 1     ; 0xEBB
LCDDATA46           
LCDDATA46bits       RES 1     ; 0xEBC
LCDDATA47           
LCDDATA47bits       RES 1     ; 0xEBD
LCDDATA48           
LCDDATA48bits       RES 1     ; 0xEBE
LCDDATA49           
LCDDATA49bits       RES 1     ; 0xEBF
LCDDATA50           
LCDDATA50bits       RES 1     ; 0xEC0
LCDDATA51           
LCDDATA51bits       RES 1     ; 0xEC1
LCDDATA52           
LCDDATA52bits       RES 1     ; 0xEC2
LCDDATA53           
LCDDATA53bits       RES 1     ; 0xEC3
LCDDATA54           
LCDDATA54bits       RES 1     ; 0xEC4
LCDDATA55           
LCDDATA55bits       RES 1     ; 0xEC5
LCDDATA56           
LCDDATA56bits       RES 1     ; 0xEC6
LCDDATA57           
LCDDATA57bits       RES 1     ; 0xEC7
LCDDATA58           
LCDDATA58bits       RES 1     ; 0xEC8
LCDDATA59           
LCDDATA59bits       RES 1     ; 0xEC9
LCDDATA60           
LCDDATA60bits       RES 1     ; 0xECA
LCDDATA61           
LCDDATA61bits       RES 1     ; 0xECB
LCDDATA62           
LCDDATA62bits       RES 1     ; 0xECC
LCDDATA63           
LCDDATA63bits       RES 1     ; 0xECD
LCDSE0              
LCDSE0bits          RES 1     ; 0xECE
LCDSE1              
LCDSE1bits          RES 1     ; 0xECF
LCDSE2              
LCDSE2bits          RES 1     ; 0xED0
LCDSE3              
LCDSE3bits          RES 1     ; 0xED1
LCDSE4              
LCDSE4bits          RES 1     ; 0xED2
LCDSE5              
LCDSE5bits          RES 1     ; 0xED3
LCDSE6              
LCDSE6bits          RES 1     ; 0xED4
LCDSE7              
LCDSE7bits          RES 1     ; 0xED5
LCDRL               
LCDRLbits           RES 1     ; 0xED6
LCDREF              
LCDREFbits          RES 1     ; 0xED7
LCDREG              
LCDREGbits          RES 1     ; 0xED8
LCDCON              
LCDCONbits          RES 1     ; 0xED9
LCDPS               
LCDPSbits           RES 1     ; 0xEDA
REFO2CON3           
REFO2CON3bits       RES 1     ; 0xEDB
REFO2CON2           
REFO2CON2bits       RES 1     ; 0xEDC
REFO2CON1           
REFO2CON1bits       RES 1     ; 0xEDD
REFO2CON            
REFO2CONbits        RES 1     ; 0xEDE
REFO1CON3           
REFO1CON3bits       RES 1     ; 0xEDF
REFO1CON2           
REFO1CON2bits       RES 1     ; 0xEE0
REFO1CON1           
REFO1CON1bits       RES 1     ; 0xEE1
REFO1CON            
REFO1CONbits        RES 1     ; 0xEE2
MEMCON              
MEMCONbits          RES 1     ; 0xEE3
PORTL               
PORTLbits           RES 1     ; 0xEE4
LATL                
LATLbits            RES 1     ; 0xEE5
TRISL               
TRISLbits           RES 1     ; 0xEE6
PORTK               
PORTKbits           RES 1     ; 0xEE7
LATK                
LATKbits            RES 1     ; 0xEE8
TRISK               
TRISKbits           RES 1     ; 0xEE9
ODCON2              
ODCON2bits          RES 1     ; 0xEEA
ODCON1              
ODCON1bits          RES 1     ; 0xEEB
MDCARL              
MDCARLbits          RES 1     ; 0xEEC
MDCARH              
MDCARHbits          RES 1     ; 0xEED
MDSRC               
MDSRCbits           RES 1     ; 0xEEE
MDCON               
MDCONbits           RES 1     ; 0xEEF
PMD4                
PMD4bits            RES 1     ; 0xEF0
PMD3                
PMD3bits            RES 1     ; 0xEF1
PMD2                
PMD2bits            RES 1     ; 0xEF2
PMD1                
PMD1bits            RES 1     ; 0xEF3
PMD0                
PMD0bits            RES 1     ; 0xEF4
CTMUCON4            
CTMUCON4bits        RES 1     ; 0xEF5
CTMUCON3            
CTMUCON3bits        RES 1     ; 0xEF6
CTMUCON2            
CTMUCON2bits        RES 1     ; 0xEF7
CTMUCON1            
CTMUCON1bits        RES 1     ; 0xEF8
TXREG4              RES 1     ; 0xEF9
RCREG4              RES 1     ; 0xEFA
SPBRG4              
SPBRG4bits          RES 1     ; 0xEFB
SPBRGH4             
SPBRGH4bits         RES 1     ; 0xEFC
BAUDCON4            
BAUDCON4bits        RES 1     ; 0xEFD
TXSTA4              
TXSTA4bits          RES 1     ; 0xEFE
RCSTA4              
RCSTA4bits          RES 1     ; 0xEFF

SFR_BANKED2         UDATA H'F00'
DMACON2             
DMACON2bits         RES 1     ; 0xF00
ANCFG               
ANCFGbits           RES 1     ; 0xF01
SSP2ADD             RES 1     ; 0xF02
SSP2BUF             RES 1     ; 0xF03
T4CON               
T4CONbits           RES 1     ; 0xF04
PR4                 RES 1     ; 0xF05
TMR4                RES 1     ; 0xF06
CCP7CON             
CCP7CONbits         RES 1     ; 0xF07
CCPR7               
CCPR7L              RES 1     ; 0xF08
CCPR7H              RES 1     ; 0xF09
CCP6CON             
CCP6CONbits         RES 1     ; 0xF0A
CCPR6               
CCPR6L              RES 1     ; 0xF0B
CCPR6H              RES 1     ; 0xF0C
CCP5CON             
CCP5CONbits         RES 1     ; 0xF0D
CCPR5               
CCPR5L              RES 1     ; 0xF0E
CCPR5H              RES 1     ; 0xF0F
CCP4CON             
CCP4CONbits         RES 1     ; 0xF10
CCPR4               
CCPR4L              RES 1     ; 0xF11
CCPR4H              RES 1     ; 0xF12
T5GCON              
T5GCONbits          RES 1     ; 0xF13
T5CON               
T5CONbits           RES 1     ; 0xF14
TMR5L               RES 1     ; 0xF15
TMR5H               RES 1     ; 0xF16
SSP2MSK             
SSP2MSKbits         RES 1     ; 0xF17
SSP2CON2            
SSP2CON2bits        RES 1     ; 0xF18
SSP2CON1            
SSP2CON1bits        RES 1     ; 0xF19
SSP2STAT            
SSP2STATbits        RES 1     ; 0xF1A
PSTR3CON            
PSTR3CONbits        RES 1     ; 0xF1B
PSTR2CON            
PSTR2CONbits        RES 1     ; 0xF1C
TXREG2              RES 1     ; 0xF1D
RCREG2              RES 1     ; 0xF1E
SPBRG2              
SPBRG2bits          RES 1     ; 0xF1F
SPBRGH2             
SPBRGH2bits         RES 1     ; 0xF20
DSGPR3              RES 1     ; 0xF21
DSGPR2              RES 1     ; 0xF22
DSGPR1              RES 1     ; 0xF23
DSGPR0              RES 1     ; 0xF24
DSWAKEH             
DSWAKEHbits         RES 1     ; 0xF25
DSWAKEL             
DSWAKELbits         RES 1     ; 0xF26
DSCONH              
DSCONHbits          RES 1     ; 0xF27
DSCONL              
DSCONLbits          RES 1     ; 0xF28
TXREG3              RES 1     ; 0xF29
RCREG3              RES 1     ; 0xF2A
SPBRG3              
SPBRG3bits          RES 1     ; 0xF2B
SPBRGH3             
SPBRGH3bits         RES 1     ; 0xF2C
BAUDCON3            
BAUDCON3bits        RES 1     ; 0xF2D
TXSTA3              
TXSTA3bits          RES 1     ; 0xF2E
RCSTA3              
RCSTA3bits          RES 1     ; 0xF2F
SPBRGH              
SPBRGHbits          
SPBRGH1             
SPBRGH1bits         RES 1     ; 0xF30
BAUDCON2            
BAUDCON2bits        RES 1     ; 0xF31
TXSTA2              
TXSTA2bits          RES 1     ; 0xF32
RCSTA2              
RCSTA2bits          RES 1     ; 0xF33
CCPTMRS2            
CCPTMRS2bits        RES 1     ; 0xF34
CCPTMRS1            
CCPTMRS1bits        RES 1     ; 0xF35
CCPTMRS0            
CCPTMRS0bits        RES 1     ; 0xF36
CM3CON              
CM3CONbits          RES 1     ; 0xF37
CM2CON              
CM2CONbits          RES 1     ; 0xF38
SSP2CON3            
SSP2CON3bits        RES 1     ; 0xF39
T8CON               
T8CONbits           RES 1     ; 0xF3A
PR8                 RES 1     ; 0xF3B
TMR8                RES 1     ; 0xF3C
T6CON               
T6CONbits           RES 1     ; 0xF3D
PR6                 RES 1     ; 0xF3E
TMR6                RES 1     ; 0xF3F
CCP10CON            
CCP10CONbits        RES 1     ; 0xF40
CCPR10              
CCPR10L             RES 1     ; 0xF41
CCPR10H             RES 1     ; 0xF42
CCP9CON             
CCP9CONbits         RES 1     ; 0xF43
CCPR9               
CCPR9L              RES 1     ; 0xF44
CCPR9H              RES 1     ; 0xF45
CCP8CON             
CCP8CONbits         RES 1     ; 0xF46
CCPR8               
CCPR8L              RES 1     ; 0xF47
CCPR8H              RES 1     ; 0xF48
CCP3CON             
CCP3CONbits         RES 1     ; 0xF49
CCPR3               
CCPR3L              RES 1     ; 0xF4A
CCPR3H              RES 1     ; 0xF4B
ECCP3DEL            
ECCP3DELbits        RES 1     ; 0xF4C
ECCP3AS             
ECCP3ASbits         RES 1     ; 0xF4D
CCP2CON             
CCP2CONbits         RES 1     ; 0xF4E
CCPR2               
CCPR2L              RES 1     ; 0xF4F
CCPR2H              RES 1     ; 0xF50
ECCP2DEL            
ECCP2DELbits        RES 1     ; 0xF51
ECCP2AS             
ECCP2ASbits         RES 1     ; 0xF52
CM1CON              
CM1CONbits          RES 1     ; 0xF53
PADCFG1             
PADCFG1bits         RES 1     ; 0xF54
IOCN                
IOCNbits            RES 1     ; 0xF55
IOCP                
IOCPbits            RES 1     ; 0xF56
RTCCON2             
RTCCON2bits         RES 1     ; 0xF57
ALRMVALL            RES 1     ; 0xF58
ALRMVALH            RES 1     ; 0xF59
ALRMRPT             
ALRMRPTbits         RES 1     ; 0xF5A
ALRMCFG             
ALRMCFGbits         RES 1     ; 0xF5B
RTCVALL             RES 1     ; 0xF5C
RTCVALH             RES 1     ; 0xF5D
RTCCAL              
RTCCALbits          RES 1     ; 0xF5E
RTCCON1             
RTCCON1bits         RES 1     ; 0xF5F

;*** Set all of memory to zeroes ***/
; Use FSR0 to increment through memory from address 0x0
; to the end of the last bank skipping sfrs and
; unimplemented addresses.

    CODE
__zero_memory
    movlw  0xFA      ;low byte of (end address + 1)
    movwf  PRODL, 0
    lfsr   0, 0x0    ;start address
    movlw  0xD       ;high byte of (end address + 1)
    rcall zero_block
    return 0
zero_block
loop_h
    cpfslt FSR0H, 0
    bra    compare_l
    clrf   POSTINC0, 0
    bra    loop_h
compare_l
    movf   PRODL, 0, 0
loop_l
    cpfslt FSR0L, 0
    return 0
    clrf   POSTINC0, 0
    bra    loop_l

        GLOBAL __zero_memory

        GLOBAL UEP0bits
        GLOBAL UEP0
        GLOBAL UEP1bits
        GLOBAL UEP1
        GLOBAL UEP2bits
        GLOBAL UEP2
        GLOBAL UEP3bits
        GLOBAL UEP3
        GLOBAL UEP4bits
        GLOBAL UEP4
        GLOBAL UEP5bits
        GLOBAL UEP5
        GLOBAL UEP6bits
        GLOBAL UEP6
        GLOBAL UEP7bits
        GLOBAL UEP7
        GLOBAL UEP8bits
        GLOBAL UEP8
        GLOBAL UEP9bits
        GLOBAL UEP9
        GLOBAL UEP10bits
        GLOBAL UEP10
        GLOBAL UEP11bits
        GLOBAL UEP11
        GLOBAL UEP12bits
        GLOBAL UEP12
        GLOBAL UEP13bits
        GLOBAL UEP13
        GLOBAL UEP14bits
        GLOBAL UEP14
        GLOBAL UEP15bits
        GLOBAL UEP15
        GLOBAL UEIEbits
        GLOBAL UEIE
        GLOBAL UIEbits
        GLOBAL UIE
        GLOBAL UCFGbits
        GLOBAL UCFG
        GLOBAL RPOR0_1bits
        GLOBAL RPOR0_1
        GLOBAL RPOR2_3bits
        GLOBAL RPOR2_3
        GLOBAL RPOR4_5bits
        GLOBAL RPOR4_5
        GLOBAL RPOR6_7bits
        GLOBAL RPOR6_7
        GLOBAL RPOR8_9bits
        GLOBAL RPOR8_9
        GLOBAL RPOR10_11bits
        GLOBAL RPOR10_11
        GLOBAL RPOR12_13bits
        GLOBAL RPOR12_13
        GLOBAL RPOR14_15bits
        GLOBAL RPOR14_15
        GLOBAL RPOR16_17bits
        GLOBAL RPOR16_17
        GLOBAL RPOR18_19bits
        GLOBAL RPOR18_19
        GLOBAL RPOR20_21bits
        GLOBAL RPOR20_21
        GLOBAL RPOR22_23bits
        GLOBAL RPOR22_23
        GLOBAL RPOR24_25bits
        GLOBAL RPOR24_25
        GLOBAL RPOR26_27bits
        GLOBAL RPOR26_27
        GLOBAL RPOR28_29bits
        GLOBAL RPOR28_29
        GLOBAL RPOR30_31bits
        GLOBAL RPOR30_31
        GLOBAL RPOR32_33bits
        GLOBAL RPOR32_33
        GLOBAL RPOR34_35bits
        GLOBAL RPOR34_35
        GLOBAL RPOR36_37bits
        GLOBAL RPOR36_37
        GLOBAL RPOR38_39bits
        GLOBAL RPOR38_39
        GLOBAL RPOR40_41bits
        GLOBAL RPOR40_41
        GLOBAL RPOR42_43bits
        GLOBAL RPOR42_43
        GLOBAL RPOR44_45bits
        GLOBAL RPOR44_45
        GLOBAL RPOR46bits
        GLOBAL RPOR46
        GLOBAL RPINR0_1bits
        GLOBAL RPINR0_1
        GLOBAL RPINR2_3bits
        GLOBAL RPINR2_3
        GLOBAL RPINR4_5bits
        GLOBAL RPINR4_5
        GLOBAL RPINR6_7bits
        GLOBAL RPINR6_7
        GLOBAL RPINR8_9bits
        GLOBAL RPINR8_9
        GLOBAL RPINR10_11bits
        GLOBAL RPINR10_11
        GLOBAL RPINR12_13bits
        GLOBAL RPINR12_13
        GLOBAL RPINR14_15bits
        GLOBAL RPINR14_15
        GLOBAL RPINR16_17bits
        GLOBAL RPINR16_17
        GLOBAL RPINR18_19bits
        GLOBAL RPINR18_19
        GLOBAL RPINR20_21bits
        GLOBAL RPINR20_21
        GLOBAL RPINR22_23bits
        GLOBAL RPINR22_23
        GLOBAL RPINR24_25bits
        GLOBAL RPINR24_25
        GLOBAL RPINR26_27bits
        GLOBAL RPINR26_27
        GLOBAL RPINR28_29bits
        GLOBAL RPINR28_29
        GLOBAL RPINR30_31bits
        GLOBAL RPINR30_31
        GLOBAL RPINR32_33bits
        GLOBAL RPINR32_33
        GLOBAL RPINR34_35bits
        GLOBAL RPINR34_35
        GLOBAL RPINR36_37bits
        GLOBAL RPINR36_37
        GLOBAL RPINR38_39bits
        GLOBAL RPINR38_39
        GLOBAL RPINR40_41bits
        GLOBAL RPINR40_41
        GLOBAL RPINR42_43bits
        GLOBAL RPINR42_43
        GLOBAL RPINR44_45bits
        GLOBAL RPINR44_45
        GLOBAL RPINR46_47bits
        GLOBAL RPINR46_47
        GLOBAL RPINR48_49bits
        GLOBAL RPINR48_49
        GLOBAL RPINR50_51bits
        GLOBAL RPINR50_51
        GLOBAL RPINR52_53bits
        GLOBAL RPINR52_53
        GLOBAL ANCON3bits
        GLOBAL ANCON3
        GLOBAL ANCON2bits
        GLOBAL ANCON2
        GLOBAL ANCON1bits
        GLOBAL ANCON1
        GLOBAL ADCBUF1
        GLOBAL ADCBUF1L
        GLOBAL ADCBUF1H
        GLOBAL ADCBUF2
        GLOBAL ADCBUF2L
        GLOBAL ADCBUF2H
        GLOBAL ADCBUF3
        GLOBAL ADCBUF3L
        GLOBAL ADCBUF3H
        GLOBAL ADCBUF4
        GLOBAL ADCBUF4L
        GLOBAL ADCBUF4H
        GLOBAL ADCBUF5
        GLOBAL ADCBUF5L
        GLOBAL ADCBUF5H
        GLOBAL ADCBUF6
        GLOBAL ADCBUF6L
        GLOBAL ADCBUF6H
        GLOBAL ADCBUF7
        GLOBAL ADCBUF7L
        GLOBAL ADCBUF7H
        GLOBAL ADCBUF8
        GLOBAL ADCBUF8L
        GLOBAL ADCBUF8H
        GLOBAL ADCBUF9
        GLOBAL ADCBUF9L
        GLOBAL ADCBUF9H
        GLOBAL ADCBUF10
        GLOBAL ADCBUF10L
        GLOBAL ADCBUF10H
        GLOBAL ADCBUF11
        GLOBAL ADCBUF11L
        GLOBAL ADCBUF11H
        GLOBAL ADCBUF12
        GLOBAL ADCBUF12L
        GLOBAL ADCBUF12H
        GLOBAL ADCBUF13
        GLOBAL ADCBUF13L
        GLOBAL ADCBUF13H
        GLOBAL ADCBUF14
        GLOBAL ADCBUF14L
        GLOBAL ADCBUF14H
        GLOBAL ADCBUF15
        GLOBAL ADCBUF15L
        GLOBAL ADCBUF15H
        GLOBAL ADCBUF16
        GLOBAL ADCBUF16L
        GLOBAL ADCBUF16H
        GLOBAL ADCBUF17
        GLOBAL ADCBUF17L
        GLOBAL ADCBUF17H
        GLOBAL ADCBUF18
        GLOBAL ADCBUF18L
        GLOBAL ADCBUF18H
        GLOBAL ADCBUF19
        GLOBAL ADCBUF19L
        GLOBAL ADCBUF19H
        GLOBAL ADCBUF20
        GLOBAL ADCBUF20L
        GLOBAL ADCBUF20H
        GLOBAL ADCBUF21
        GLOBAL ADCBUF21L
        GLOBAL ADCBUF21H
        GLOBAL ADCBUF22
        GLOBAL ADCBUF22L
        GLOBAL ADCBUF22H
        GLOBAL ADCBUF23
        GLOBAL ADCBUF23L
        GLOBAL ADCBUF23H
        GLOBAL ADCBUF24
        GLOBAL ADCBUF24L
        GLOBAL ADCBUF24H
        GLOBAL ADCBUF25
        GLOBAL ADCBUF25L
        GLOBAL ADCBUF25H
        GLOBAL ADCTMUEN0Lbits
        GLOBAL ADCTMUEN0L
        GLOBAL ADCTMUEN0Hbits
        GLOBAL ADCTMUEN0H
        GLOBAL ADCTMUEN1Lbits
        GLOBAL ADCTMUEN1L
        GLOBAL ADCTMUEN1Hbits
        GLOBAL ADCTMUEN1H
        GLOBAL ADCHIT0Lbits
        GLOBAL ADCHIT0L
        GLOBAL ADCHIT0Hbits
        GLOBAL ADCHIT0H
        GLOBAL ADCHIT1Lbits
        GLOBAL ADCHIT1L
        GLOBAL ADCHIT1Hbits
        GLOBAL ADCHIT1H
        GLOBAL ADCSS0Lbits
        GLOBAL ADCSS0L
        GLOBAL ADCSS0Hbits
        GLOBAL ADCSS0H
        GLOBAL ADCSS1Lbits
        GLOBAL ADCSS1L
        GLOBAL ADCSS1Hbits
        GLOBAL ADCSS1H
        GLOBAL ADCHS0Lbits
        GLOBAL ADCHS0L
        GLOBAL ADCHS0Hbits
        GLOBAL ADCHS0H
        GLOBAL ADCON5Lbits
        GLOBAL ADCON5L
        GLOBAL ADCON5Hbits
        GLOBAL ADCON5H
        GLOBAL ADCON3Lbits
        GLOBAL ADCON3L
        GLOBAL ADCON3Hbits
        GLOBAL ADCON3H
        GLOBAL ADCON2Lbits
        GLOBAL ADCON2L
        GLOBAL ADCON2Hbits
        GLOBAL ADCON2H
        GLOBAL LCDDATA0bits
        GLOBAL LCDDATA0
        GLOBAL LCDDATA1bits
        GLOBAL LCDDATA1
        GLOBAL LCDDATA2bits
        GLOBAL LCDDATA2
        GLOBAL LCDDATA3bits
        GLOBAL LCDDATA3
        GLOBAL LCDDATA4bits
        GLOBAL LCDDATA4
        GLOBAL LCDDATA5bits
        GLOBAL LCDDATA5
        GLOBAL LCDDATA6bits
        GLOBAL LCDDATA6
        GLOBAL LCDDATA7bits
        GLOBAL LCDDATA7
        GLOBAL LCDDATA8bits
        GLOBAL LCDDATA8
        GLOBAL LCDDATA9bits
        GLOBAL LCDDATA9
        GLOBAL LCDDATA10bits
        GLOBAL LCDDATA10
        GLOBAL LCDDATA11bits
        GLOBAL LCDDATA11
        GLOBAL LCDDATA12bits
        GLOBAL LCDDATA12
        GLOBAL LCDDATA13bits
        GLOBAL LCDDATA13
        GLOBAL LCDDATA14bits
        GLOBAL LCDDATA14
        GLOBAL LCDDATA15bits
        GLOBAL LCDDATA15
        GLOBAL LCDDATA16bits
        GLOBAL LCDDATA16
        GLOBAL LCDDATA17bits
        GLOBAL LCDDATA17
        GLOBAL LCDDATA18bits
        GLOBAL LCDDATA18
        GLOBAL LCDDATA19bits
        GLOBAL LCDDATA19
        GLOBAL LCDDATA20bits
        GLOBAL LCDDATA20
        GLOBAL LCDDATA21bits
        GLOBAL LCDDATA21
        GLOBAL LCDDATA22bits
        GLOBAL LCDDATA22
        GLOBAL LCDDATA23bits
        GLOBAL LCDDATA23
        GLOBAL LCDDATA24bits
        GLOBAL LCDDATA24
        GLOBAL LCDDATA25bits
        GLOBAL LCDDATA25
        GLOBAL LCDDATA26bits
        GLOBAL LCDDATA26
        GLOBAL LCDDATA27bits
        GLOBAL LCDDATA27
        GLOBAL LCDDATA28bits
        GLOBAL LCDDATA28
        GLOBAL LCDDATA29bits
        GLOBAL LCDDATA29
        GLOBAL LCDDATA30bits
        GLOBAL LCDDATA30
        GLOBAL LCDDATA31bits
        GLOBAL LCDDATA31
        GLOBAL LCDDATA32bits
        GLOBAL LCDDATA32
        GLOBAL LCDDATA33bits
        GLOBAL LCDDATA33
        GLOBAL LCDDATA34bits
        GLOBAL LCDDATA34
        GLOBAL LCDDATA35bits
        GLOBAL LCDDATA35
        GLOBAL LCDDATA36bits
        GLOBAL LCDDATA36
        GLOBAL LCDDATA37bits
        GLOBAL LCDDATA37
        GLOBAL LCDDATA38bits
        GLOBAL LCDDATA38
        GLOBAL LCDDATA39bits
        GLOBAL LCDDATA39
        GLOBAL LCDDATA40bits
        GLOBAL LCDDATA40
        GLOBAL LCDDATA41bits
        GLOBAL LCDDATA41
        GLOBAL LCDDATA42bits
        GLOBAL LCDDATA42
        GLOBAL LCDDATA43bits
        GLOBAL LCDDATA43
        GLOBAL LCDDATA44bits
        GLOBAL LCDDATA44
        GLOBAL LCDDATA45bits
        GLOBAL LCDDATA45
        GLOBAL LCDDATA46bits
        GLOBAL LCDDATA46
        GLOBAL LCDDATA47bits
        GLOBAL LCDDATA47
        GLOBAL LCDDATA48bits
        GLOBAL LCDDATA48
        GLOBAL LCDDATA49bits
        GLOBAL LCDDATA49
        GLOBAL LCDDATA50bits
        GLOBAL LCDDATA50
        GLOBAL LCDDATA51bits
        GLOBAL LCDDATA51
        GLOBAL LCDDATA52bits
        GLOBAL LCDDATA52
        GLOBAL LCDDATA53bits
        GLOBAL LCDDATA53
        GLOBAL LCDDATA54bits
        GLOBAL LCDDATA54
        GLOBAL LCDDATA55bits
        GLOBAL LCDDATA55
        GLOBAL LCDDATA56bits
        GLOBAL LCDDATA56
        GLOBAL LCDDATA57bits
        GLOBAL LCDDATA57
        GLOBAL LCDDATA58bits
        GLOBAL LCDDATA58
        GLOBAL LCDDATA59bits
        GLOBAL LCDDATA59
        GLOBAL LCDDATA60bits
        GLOBAL LCDDATA60
        GLOBAL LCDDATA61bits
        GLOBAL LCDDATA61
        GLOBAL LCDDATA62bits
        GLOBAL LCDDATA62
        GLOBAL LCDDATA63bits
        GLOBAL LCDDATA63
        GLOBAL LCDSE0bits
        GLOBAL LCDSE0
        GLOBAL LCDSE1bits
        GLOBAL LCDSE1
        GLOBAL LCDSE2bits
        GLOBAL LCDSE2
        GLOBAL LCDSE3bits
        GLOBAL LCDSE3
        GLOBAL LCDSE4bits
        GLOBAL LCDSE4
        GLOBAL LCDSE5bits
        GLOBAL LCDSE5
        GLOBAL LCDSE6bits
        GLOBAL LCDSE6
        GLOBAL LCDSE7bits
        GLOBAL LCDSE7
        GLOBAL LCDRLbits
        GLOBAL LCDRL
        GLOBAL LCDREFbits
        GLOBAL LCDREF
        GLOBAL LCDREGbits
        GLOBAL LCDREG
        GLOBAL LCDCONbits
        GLOBAL LCDCON
        GLOBAL LCDPSbits
        GLOBAL LCDPS
        GLOBAL REFO2CON3bits
        GLOBAL REFO2CON3
        GLOBAL REFO2CON2bits
        GLOBAL REFO2CON2
        GLOBAL REFO2CON1bits
        GLOBAL REFO2CON1
        GLOBAL REFO2CONbits
        GLOBAL REFO2CON
        GLOBAL REFO1CON3bits
        GLOBAL REFO1CON3
        GLOBAL REFO1CON2bits
        GLOBAL REFO1CON2
        GLOBAL REFO1CON1bits
        GLOBAL REFO1CON1
        GLOBAL REFO1CONbits
        GLOBAL REFO1CON
        GLOBAL MEMCONbits
        GLOBAL MEMCON
        GLOBAL PORTLbits
        GLOBAL PORTL
        GLOBAL LATLbits
        GLOBAL LATL
        GLOBAL TRISLbits
        GLOBAL TRISL
        GLOBAL PORTKbits
        GLOBAL PORTK
        GLOBAL LATKbits
        GLOBAL LATK
        GLOBAL TRISKbits
        GLOBAL TRISK
        GLOBAL ODCON2bits
        GLOBAL ODCON2
        GLOBAL ODCON1bits
        GLOBAL ODCON1
        GLOBAL MDCARLbits
        GLOBAL MDCARL
        GLOBAL MDCARHbits
        GLOBAL MDCARH
        GLOBAL MDSRCbits
        GLOBAL MDSRC
        GLOBAL MDCONbits
        GLOBAL MDCON
        GLOBAL PMD4bits
        GLOBAL PMD4
        GLOBAL PMD3bits
        GLOBAL PMD3
        GLOBAL PMD2bits
        GLOBAL PMD2
        GLOBAL PMD1bits
        GLOBAL PMD1
        GLOBAL PMD0bits
        GLOBAL PMD0
        GLOBAL CTMUCON4bits
        GLOBAL CTMUCON4
        GLOBAL CTMUCON3bits
        GLOBAL CTMUCON3
        GLOBAL CTMUCON2bits
        GLOBAL CTMUCON2
        GLOBAL CTMUCON1bits
        GLOBAL CTMUCON1
        GLOBAL TXREG4
        GLOBAL RCREG4
        GLOBAL SPBRG4bits
        GLOBAL SPBRG4
        GLOBAL SPBRGH4bits
        GLOBAL SPBRGH4
        GLOBAL BAUDCON4bits
        GLOBAL BAUDCON4
        GLOBAL TXSTA4bits
        GLOBAL TXSTA4
        GLOBAL RCSTA4bits
        GLOBAL RCSTA4
        GLOBAL DMACON2bits
        GLOBAL DMACON2
        GLOBAL ANCFGbits
        GLOBAL ANCFG
        GLOBAL SSP2ADD
        GLOBAL SSP2BUF
        GLOBAL T4CONbits
        GLOBAL T4CON
        GLOBAL PR4
        GLOBAL TMR4
        GLOBAL CCP7CONbits
        GLOBAL CCP7CON
        GLOBAL CCPR7
        GLOBAL CCPR7L
        GLOBAL CCPR7H
        GLOBAL CCP6CONbits
        GLOBAL CCP6CON
        GLOBAL CCPR6
        GLOBAL CCPR6L
        GLOBAL CCPR6H
        GLOBAL CCP5CONbits
        GLOBAL CCP5CON
        GLOBAL CCPR5
        GLOBAL CCPR5L
        GLOBAL CCPR5H
        GLOBAL CCP4CONbits
        GLOBAL CCP4CON
        GLOBAL CCPR4
        GLOBAL CCPR4L
        GLOBAL CCPR4H
        GLOBAL T5GCONbits
        GLOBAL T5GCON
        GLOBAL T5CONbits
        GLOBAL T5CON
        GLOBAL TMR5L
        GLOBAL TMR5H
        GLOBAL SSP2MSKbits
        GLOBAL SSP2MSK
        GLOBAL SSP2CON2bits
        GLOBAL SSP2CON2
        GLOBAL SSP2CON1bits
        GLOBAL SSP2CON1
        GLOBAL SSP2STATbits
        GLOBAL SSP2STAT
        GLOBAL PSTR3CONbits
        GLOBAL PSTR3CON
        GLOBAL PSTR2CONbits
        GLOBAL PSTR2CON
        GLOBAL TXREG2
        GLOBAL RCREG2
        GLOBAL SPBRG2bits
        GLOBAL SPBRG2
        GLOBAL SPBRGH2bits
        GLOBAL SPBRGH2
        GLOBAL DSGPR3
        GLOBAL DSGPR2
        GLOBAL DSGPR1
        GLOBAL DSGPR0
        GLOBAL DSWAKEHbits
        GLOBAL DSWAKEH
        GLOBAL DSWAKELbits
        GLOBAL DSWAKEL
        GLOBAL DSCONHbits
        GLOBAL DSCONH
        GLOBAL DSCONLbits
        GLOBAL DSCONL
        GLOBAL TXREG3
        GLOBAL RCREG3
        GLOBAL SPBRG3bits
        GLOBAL SPBRG3
        GLOBAL SPBRGH3bits
        GLOBAL SPBRGH3
        GLOBAL BAUDCON3bits
        GLOBAL BAUDCON3
        GLOBAL TXSTA3bits
        GLOBAL TXSTA3
        GLOBAL RCSTA3bits
        GLOBAL RCSTA3
        GLOBAL SPBRGHbits
        GLOBAL SPBRGH
        GLOBAL SPBRGH1bits
        GLOBAL SPBRGH1
        GLOBAL BAUDCON2bits
        GLOBAL BAUDCON2
        GLOBAL TXSTA2bits
        GLOBAL TXSTA2
        GLOBAL RCSTA2bits
        GLOBAL RCSTA2
        GLOBAL CCPTMRS2bits
        GLOBAL CCPTMRS2
        GLOBAL CCPTMRS1bits
        GLOBAL CCPTMRS1
        GLOBAL CCPTMRS0bits
        GLOBAL CCPTMRS0
        GLOBAL CM3CONbits
        GLOBAL CM3CON
        GLOBAL CM2CONbits
        GLOBAL CM2CON
        GLOBAL SSP2CON3bits
        GLOBAL SSP2CON3
        GLOBAL T8CONbits
        GLOBAL T8CON
        GLOBAL PR8
        GLOBAL TMR8
        GLOBAL T6CONbits
        GLOBAL T6CON
        GLOBAL PR6
        GLOBAL TMR6
        GLOBAL CCP10CONbits
        GLOBAL CCP10CON
        GLOBAL CCPR10
        GLOBAL CCPR10L
        GLOBAL CCPR10H
        GLOBAL CCP9CONbits
        GLOBAL CCP9CON
        GLOBAL CCPR9
        GLOBAL CCPR9L
        GLOBAL CCPR9H
        GLOBAL CCP8CONbits
        GLOBAL CCP8CON
        GLOBAL CCPR8
        GLOBAL CCPR8L
        GLOBAL CCPR8H
        GLOBAL CCP3CONbits
        GLOBAL CCP3CON
        GLOBAL CCPR3
        GLOBAL CCPR3L
        GLOBAL CCPR3H
        GLOBAL ECCP3DELbits
        GLOBAL ECCP3DEL
        GLOBAL ECCP3ASbits
        GLOBAL ECCP3AS
        GLOBAL CCP2CONbits
        GLOBAL CCP2CON
        GLOBAL CCPR2
        GLOBAL CCPR2L
        GLOBAL CCPR2H
        GLOBAL ECCP2DELbits
        GLOBAL ECCP2DEL
        GLOBAL ECCP2ASbits
        GLOBAL ECCP2AS
        GLOBAL CM1CONbits
        GLOBAL CM1CON
        GLOBAL PADCFG1bits
        GLOBAL PADCFG1
        GLOBAL IOCNbits
        GLOBAL IOCN
        GLOBAL IOCPbits
        GLOBAL IOCP
        GLOBAL RTCCON2bits
        GLOBAL RTCCON2
        GLOBAL ALRMVALL
        GLOBAL ALRMVALH
        GLOBAL ALRMRPTbits
        GLOBAL ALRMRPT
        GLOBAL ALRMCFGbits
        GLOBAL ALRMCFG
        GLOBAL RTCVALL
        GLOBAL RTCVALH
        GLOBAL RTCCALbits
        GLOBAL RTCCAL
        GLOBAL RTCCON1bits
        GLOBAL RTCCON1
        GLOBAL DMACON1bits
        GLOBAL DMACON1
        GLOBAL PIE6bits
        GLOBAL PIE6
        GLOBAL WPUBbits
        GLOBAL WPUB
        GLOBAL ACTCONbits
        GLOBAL ACTCON
        GLOBAL OSCCON4bits
        GLOBAL OSCCON4
        GLOBAL OSCCON3bits
        GLOBAL OSCCON3
        GLOBAL OSCCON2bits
        GLOBAL OSCCON2
        GLOBAL BAUDCONbits
        GLOBAL BAUDCON
        GLOBAL BAUDCON1bits
        GLOBAL BAUDCON1
        GLOBAL SSP1MSKbits
        GLOBAL SSP1MSK
        GLOBAL SSP1CON3bits
        GLOBAL SSP1CON3
        GLOBAL TXBUFbits
        GLOBAL TXBUF
        GLOBAL DMABCHbits
        GLOBAL DMABCH
        GLOBAL DMABCLbits
        GLOBAL DMABCL
        GLOBAL RXADDRHbits
        GLOBAL RXADDRH
        GLOBAL RXADDRLbits
        GLOBAL RXADDRL
        GLOBAL TXADDRHbits
        GLOBAL TXADDRH
        GLOBAL TXADDRLbits
        GLOBAL TXADDRL
        GLOBAL PORTVPbits
        GLOBAL PORTVP
        GLOBAL LATVPbits
        GLOBAL LATVP
        GLOBAL TRISVPbits
        GLOBAL TRISVP
        GLOBAL UADDRbits
        GLOBAL UADDR
        GLOBAL UCONbits
        GLOBAL UCON
        GLOBAL USTATbits
        GLOBAL USTAT
        GLOBAL UEIRbits
        GLOBAL UEIR
        GLOBAL UIRbits
        GLOBAL UIR
        GLOBAL UFRM
        GLOBAL UFRMHbits
        GLOBAL UFRMH
        GLOBAL UFRMLbits
        GLOBAL UFRML
        GLOBAL RCON4bits
        GLOBAL RCON4
        GLOBAL RCON3bits
        GLOBAL RCON3
        GLOBAL RCON2bits
        GLOBAL RCON2
        GLOBAL EECON2
        GLOBAL EECON1bits
        GLOBAL EECON1
        GLOBAL PORTAbits
        GLOBAL PORTA
        GLOBAL PORTBbits
        GLOBAL PORTB
        GLOBAL PORTCbits
        GLOBAL PORTC
        GLOBAL PORTDbits
        GLOBAL PORTD
        GLOBAL PORTEbits
        GLOBAL PORTE
        GLOBAL PORTFbits
        GLOBAL PORTF
        GLOBAL PORTGbits
        GLOBAL PORTG
        GLOBAL PORTHbits
        GLOBAL PORTH
        GLOBAL PORTJbits
        GLOBAL PORTJ
        GLOBAL LATAbits
        GLOBAL LATA
        GLOBAL LATBbits
        GLOBAL LATB
        GLOBAL LATCbits
        GLOBAL LATC
        GLOBAL LATDbits
        GLOBAL LATD
        GLOBAL LATEbits
        GLOBAL LATE
        GLOBAL LATFbits
        GLOBAL LATF
        GLOBAL LATGbits
        GLOBAL LATG
        GLOBAL LATHbits
        GLOBAL LATH
        GLOBAL LATJbits
        GLOBAL LATJ
        GLOBAL TRISAbits
        GLOBAL TRISA
        GLOBAL TRISBbits
        GLOBAL TRISB
        GLOBAL TRISCbits
        GLOBAL TRISC
        GLOBAL TRISDbits
        GLOBAL TRISD
        GLOBAL TRISEbits
        GLOBAL TRISE
        GLOBAL TRISFbits
        GLOBAL TRISF
        GLOBAL TRISGbits
        GLOBAL TRISG
        GLOBAL TRISHbits
        GLOBAL TRISH
        GLOBAL TRISJbits
        GLOBAL TRISJ
        GLOBAL OSCTUNEbits
        GLOBAL OSCTUNE
        GLOBAL PSTR1CONbits
        GLOBAL PSTR1CON
        GLOBAL PIE1bits
        GLOBAL PIE1
        GLOBAL PIR1bits
        GLOBAL PIR1
        GLOBAL IPR1bits
        GLOBAL IPR1
        GLOBAL PIE2bits
        GLOBAL PIE2
        GLOBAL PIR2bits
        GLOBAL PIR2
        GLOBAL IPR2bits
        GLOBAL IPR2
        GLOBAL PIE3bits
        GLOBAL PIE3
        GLOBAL PIR3bits
        GLOBAL PIR3
        GLOBAL IPR3bits
        GLOBAL IPR3
        GLOBAL PIR6bits
        GLOBAL PIR6
        GLOBAL PSPCONbits
        GLOBAL PSPCON
        GLOBAL HLVDCONbits
        GLOBAL HLVDCON
        GLOBAL IPR6bits
        GLOBAL IPR6
        GLOBAL T1GCONbits
        GLOBAL T1GCON
        GLOBAL RCSTAbits
        GLOBAL RCSTA
        GLOBAL RCSTA1bits
        GLOBAL RCSTA1
        GLOBAL TXSTAbits
        GLOBAL TXSTA
        GLOBAL TXSTA1bits
        GLOBAL TXSTA1
        GLOBAL TXREG
        GLOBAL TXREG1
        GLOBAL RCREG
        GLOBAL RCREG1
        GLOBAL SPBRGbits
        GLOBAL SPBRG
        GLOBAL SPBRG1bits
        GLOBAL SPBRG1
        GLOBAL T3GCONbits
        GLOBAL T3GCON
        GLOBAL T3CONbits
        GLOBAL T3CON
        GLOBAL TMR3L
        GLOBAL TMR3H
        GLOBAL PIE4bits
        GLOBAL PIE4
        GLOBAL PIR4bits
        GLOBAL PIR4
        GLOBAL IPR4bits
        GLOBAL IPR4
        GLOBAL PIE5bits
        GLOBAL PIE5
        GLOBAL PIR5bits
        GLOBAL PIR5
        GLOBAL CCP1CONbits
        GLOBAL CCP1CON
        GLOBAL CCPR1
        GLOBAL CCPR1L
        GLOBAL CCPR1H
        GLOBAL ECCP1DELbits
        GLOBAL ECCP1DEL
        GLOBAL ECCP1ASbits
        GLOBAL ECCP1AS
        GLOBAL CVRCONLbits
        GLOBAL CVRCONL
        GLOBAL CVRCONHbits
        GLOBAL CVRCONH
        GLOBAL ADCON1Lbits
        GLOBAL ADCON1L
        GLOBAL ADCON1Hbits
        GLOBAL ADCON1H
        GLOBAL ADCBUF0
        GLOBAL ADCBUF0L
        GLOBAL ADCBUF0H
        GLOBAL CMSTATbits
        GLOBAL CMSTAT
        GLOBAL SSP1CON2bits
        GLOBAL SSP1CON2
        GLOBAL SSP1CON1bits
        GLOBAL SSP1CON1
        GLOBAL SSP1STATbits
        GLOBAL SSP1STAT
        GLOBAL SSP1ADD
        GLOBAL SSP1BUF
        GLOBAL T2CONbits
        GLOBAL T2CON
        GLOBAL PR2
        GLOBAL TMR2
        GLOBAL T1CONbits
        GLOBAL T1CON
        GLOBAL TMR1L
        GLOBAL TMR1H
        GLOBAL RCONbits
        GLOBAL RCON
        GLOBAL IOCFbits
        GLOBAL IOCF
        GLOBAL IPR5bits
        GLOBAL IPR5
        GLOBAL OSCCONbits
        GLOBAL OSCCON
        GLOBAL T0CONbits
        GLOBAL T0CON
        GLOBAL TMR0L
        GLOBAL TMR0H
        GLOBAL STATUSbits
        GLOBAL STATUS
        GLOBAL FSR2
        GLOBAL FSR2L
        GLOBAL FSR2H
        GLOBAL PLUSW2
        GLOBAL PREINC2
        GLOBAL POSTDEC2
        GLOBAL POSTINC2
        GLOBAL INDF2
        GLOBAL BSR
        GLOBAL FSR1
        GLOBAL FSR1L
        GLOBAL FSR1H
        GLOBAL PLUSW1
        GLOBAL PREINC1
        GLOBAL POSTDEC1
        GLOBAL POSTINC1
        GLOBAL INDF1
        GLOBAL WREG
        GLOBAL FSR0
        GLOBAL FSR0L
        GLOBAL FSR0H
        GLOBAL PLUSW0
        GLOBAL PREINC0
        GLOBAL POSTDEC0
        GLOBAL POSTINC0
        GLOBAL INDF0
        GLOBAL INTCON3bits
        GLOBAL INTCON3
        GLOBAL INTCON2bits
        GLOBAL INTCON2
        GLOBAL INTCONbits
        GLOBAL INTCON
        GLOBAL PROD
        GLOBAL PRODL
        GLOBAL PRODH
        GLOBAL TABLAT
        GLOBAL TBLPTR
        GLOBAL TBLPTRL
        GLOBAL TBLPTRH
        GLOBAL TBLPTRU
        GLOBAL PC
        GLOBAL PCL
        GLOBAL PCLATH
        GLOBAL PCLATU
        GLOBAL STKPTRbits
        GLOBAL STKPTR
        GLOBAL TOS
        GLOBAL TOSL
        GLOBAL TOSH
        GLOBAL TOSU

;-------------------------------------------------------------------------

        LIST
        END
