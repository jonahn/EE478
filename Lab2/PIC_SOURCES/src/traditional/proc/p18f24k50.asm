        LIST P=18F24K50
        NOLIST
;-------------------------------------------------------------------------
; MPLAB-Cxx  PIC18F24K50 processor definition module
; 
; (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;-------------------------------------------------------------------------

SFR_UNBANKED0       UDATA_ACS H'F60'

UCON                
UCONbits            RES 1     ; 0xF60
USTAT               
USTATbits           RES 1     ; 0xF61
UCFG                
UCFGbits            RES 1     ; 0xF62
UADDR               
UADDRbits           RES 1     ; 0xF63
UIE                 
UIEbits             RES 1     ; 0xF64
UIR                 
UIRbits             RES 1     ; 0xF65
UEIE                
UEIEbits            RES 1     ; 0xF66
UEIR                
UEIRbits            RES 1     ; 0xF67
UFRM                
UFRML               
UFRMLbits           RES 1     ; 0xF68
UFRMH               
UFRMHbits           RES 1     ; 0xF69
UEP0                
UEP0bits            RES 1     ; 0xF6A
UEP1                
UEP1bits            RES 1     ; 0xF6B
UEP2                
UEP2bits            RES 1     ; 0xF6C
UEP3                
UEP3bits            RES 1     ; 0xF6D
UEP4                
UEP4bits            RES 1     ; 0xF6E
UEP5                
UEP5bits            RES 1     ; 0xF6F
UEP6                
UEP6bits            RES 1     ; 0xF70
UEP7                
UEP7bits            RES 1     ; 0xF71
UEP8                
UEP8bits            RES 1     ; 0xF72
UEP9                
UEP9bits            RES 1     ; 0xF73
UEP10               
UEP10bits           RES 1     ; 0xF74
UEP11               
UEP11bits           RES 1     ; 0xF75
UEP12               
UEP12bits           RES 1     ; 0xF76
UEP13               
UEP13bits           RES 1     ; 0xF77
UEP14               
UEP14bits           RES 1     ; 0xF78
UEP15               
UEP15bits           RES 1     ; 0xF79
SLRCON              
SLRCONbits          RES 1     ; 0xF7A
VREFCON2            
VREFCON2bits        RES 1     ; 0xF7B
VREFCON1            
VREFCON1bits        RES 1     ; 0xF7C
VREFCON0            
VREFCON0bits        RES 1     ; 0xF7D
PMD0                
PMD0bits            RES 1     ; 0xF7E
PMD1                
PMD1bits            RES 1     ; 0xF7F
PORTA               
PORTAbits           RES 1     ; 0xF80
PORTB               
PORTBbits           RES 1     ; 0xF81
PORTC               
PORTCbits           RES 1     ; 0xF82
                    RES 1
PORTE               
PORTEbits           RES 1     ; 0xF84
WPUB                
WPUBbits            RES 1     ; 0xF85
IOCB                
IOCBbits            RES 1     ; 0xF86
IOCC                
IOCCbits            RES 1     ; 0xF87
CTMUICON            
CTMUICONbits        RES 1     ; 0xF88
LATA                
LATAbits            RES 1     ; 0xF89
LATB                
LATBbits            RES 1     ; 0xF8A
LATC                
LATCbits            RES 1     ; 0xF8B
                    RES 2
CTMUCON1            
CTMUCON1bits        
CTMUCONL            
CTMUCONLbits        RES 1     ; 0xF8E
CTMUCON0            
CTMUCON0bits        
CTMUCONH            
CTMUCONHbits        RES 1     ; 0xF8F
CCPR2               
CCPR2L              RES 1     ; 0xF90
CCPR2H              RES 1     ; 0xF91
DDRA                
DDRAbits            
TRISA               
TRISAbits           RES 1     ; 0xF92
DDRB                
DDRBbits            
TRISB               
TRISBbits           RES 1     ; 0xF93
DDRC                
DDRCbits            
TRISC               
TRISCbits           RES 1     ; 0xF94
                    RES 2
CCP2CON             
CCP2CONbits         
ECCP2CON            
ECCP2CONbits        RES 1     ; 0xF97
CM1CON0             
CM1CON0bits         RES 1     ; 0xF98
CM2CON0             
CM2CON0bits         RES 1     ; 0xF99
CM2CON1             
CM2CON1bits         RES 1     ; 0xF9A
OSCTUNE             
OSCTUNEbits         RES 1     ; 0xF9B
HLVDCON             
HLVDCONbits         RES 1     ; 0xF9C
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
EECON1              
EECON1bits          RES 1     ; 0xFA6
EECON2              RES 1     ; 0xFA7
EEDATA              RES 1     ; 0xFA8
EEADR               RES 1     ; 0xFA9
                    RES 1
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
SPBRGH              
SPBRGHbits          
SPBRGH1             
SPBRGH1bits         RES 1     ; 0xFB0
T3CON               
T3CONbits           RES 1     ; 0xFB1
TMR3L               RES 1     ; 0xFB2
TMR3H               RES 1     ; 0xFB3
T3GCON              
T3GCONbits          RES 1     ; 0xFB4
ACTCON              
ACTCONbits          
STCON               
STCONbits           RES 1     ; 0xFB5
ECCP1AS             
ECCP1ASbits         RES 1     ; 0xFB6
ECCP1DEL            
ECCP1DELbits        
PWM1CON             
PWM1CONbits         RES 1     ; 0xFB7
BAUDCON             
BAUDCONbits         
BAUDCON1            
BAUDCON1bits        RES 1     ; 0xFB8
PSTR1CON            
PSTR1CONbits        RES 1     ; 0xFB9
T2CON               
T2CONbits           RES 1     ; 0xFBA
PR2                 RES 1     ; 0xFBB
TMR2                RES 1     ; 0xFBC
CCP1CON             
CCP1CONbits         
ECCP1CON            
ECCP1CONbits        RES 1     ; 0xFBD
CCPR1               
CCPR1L              RES 1     ; 0xFBE
CCPR1H              RES 1     ; 0xFBF
ADCON2              
ADCON2bits          RES 1     ; 0xFC0
ADCON1              
ADCON1bits          RES 1     ; 0xFC1
ADCON0              
ADCON0bits          RES 1     ; 0xFC2
ADRESL              RES 1     ; 0xFC3
ADRESH              RES 1     ; 0xFC4
SSP1CON2            
SSP1CON2bits        
SSPCON2             
SSPCON2bits         RES 1     ; 0xFC5
SSP1CON             
SSP1CONbits         
SSP1CON1            
SSP1CON1bits        
SSPCON              
SSPCONbits          RES 1     ; 0xFC6
SSP1STAT            
SSP1STATbits        
SSPSTAT             
SSPSTATbits         RES 1     ; 0xFC7
SSP1ADD             
SSP1ADDbits         
SSPADD              
SSPADDbits          RES 1     ; 0xFC8
SSP1BUF             
SSPBUF              RES 1     ; 0xFC9
SSP1MSK             
SSP1MSKbits         
SSPMSK              
SSPMSKbits          RES 1     ; 0xFCA
SSP1CON3            
SSP1CON3bits        
SSPCON3             
SSPCON3bits         RES 1     ; 0xFCB
T1GCON              
T1GCONbits          RES 1     ; 0xFCC
T1CON               
T1CONbits           RES 1     ; 0xFCD
TMR1L               RES 1     ; 0xFCE
TMR1H               RES 1     ; 0xFCF
RCON                
RCONbits            RES 1     ; 0xFD0
WDTCON              
WDTCONbits          RES 1     ; 0xFD1
OSCCON2             
OSCCON2bits         RES 1     ; 0xFD2
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

SFR_BANKED0         UDATA H'F57'

SRCON1              
SRCON1bits          RES 1     ; 0xF57
SRCON0              
SRCON0bits          RES 1     ; 0xF58
CCPTMRS             
CCPTMRSbits         RES 1     ; 0xF59
VREGCON             
VREGCONbits         RES 1     ; 0xF5A
ANSELA              
ANSELAbits          RES 1     ; 0xF5B
ANSELB              
ANSELBbits          RES 1     ; 0xF5C
ANSELC              
ANSELCbits          RES 1     ; 0xF5D

;*** Set all of memory to zeroes ***/
; Use FSR0 to increment through memory from address 0x0
; to the end of the last bank skipping sfrs and
; unimplemented addresses.

    CODE
__zero_memory
    movlw  0x0       ;low byte of (end address + 1)
    movwf  PRODL, 0
    lfsr   0, 0x0    ;start address
    movlw  0x8       ;high byte of (end address + 1)
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

        GLOBAL SRCON1bits
        GLOBAL SRCON1
        GLOBAL SRCON0bits
        GLOBAL SRCON0
        GLOBAL CCPTMRSbits
        GLOBAL CCPTMRS
        GLOBAL VREGCONbits
        GLOBAL VREGCON
        GLOBAL ANSELAbits
        GLOBAL ANSELA
        GLOBAL ANSELBbits
        GLOBAL ANSELB
        GLOBAL ANSELCbits
        GLOBAL ANSELC
        GLOBAL UCONbits
        GLOBAL UCON
        GLOBAL USTATbits
        GLOBAL USTAT
        GLOBAL UCFGbits
        GLOBAL UCFG
        GLOBAL UADDRbits
        GLOBAL UADDR
        GLOBAL UIEbits
        GLOBAL UIE
        GLOBAL UIRbits
        GLOBAL UIR
        GLOBAL UEIEbits
        GLOBAL UEIE
        GLOBAL UEIRbits
        GLOBAL UEIR
        GLOBAL UFRM
        GLOBAL UFRMLbits
        GLOBAL UFRML
        GLOBAL UFRMHbits
        GLOBAL UFRMH
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
        GLOBAL SLRCONbits
        GLOBAL SLRCON
        GLOBAL VREFCON2bits
        GLOBAL VREFCON2
        GLOBAL VREFCON1bits
        GLOBAL VREFCON1
        GLOBAL VREFCON0bits
        GLOBAL VREFCON0
        GLOBAL PMD0bits
        GLOBAL PMD0
        GLOBAL PMD1bits
        GLOBAL PMD1
        GLOBAL PORTAbits
        GLOBAL PORTA
        GLOBAL PORTBbits
        GLOBAL PORTB
        GLOBAL PORTCbits
        GLOBAL PORTC
        GLOBAL PORTEbits
        GLOBAL PORTE
        GLOBAL WPUBbits
        GLOBAL WPUB
        GLOBAL IOCBbits
        GLOBAL IOCB
        GLOBAL IOCCbits
        GLOBAL IOCC
        GLOBAL CTMUICONbits
        GLOBAL CTMUICON
        GLOBAL LATAbits
        GLOBAL LATA
        GLOBAL LATBbits
        GLOBAL LATB
        GLOBAL LATCbits
        GLOBAL LATC
        GLOBAL CTMUCON1bits
        GLOBAL CTMUCON1
        GLOBAL CTMUCONLbits
        GLOBAL CTMUCONL
        GLOBAL CTMUCON0bits
        GLOBAL CTMUCON0
        GLOBAL CTMUCONHbits
        GLOBAL CTMUCONH
        GLOBAL CCPR2
        GLOBAL CCPR2L
        GLOBAL CCPR2H
        GLOBAL DDRAbits
        GLOBAL DDRA
        GLOBAL TRISAbits
        GLOBAL TRISA
        GLOBAL DDRBbits
        GLOBAL DDRB
        GLOBAL TRISBbits
        GLOBAL TRISB
        GLOBAL DDRCbits
        GLOBAL DDRC
        GLOBAL TRISCbits
        GLOBAL TRISC
        GLOBAL CCP2CONbits
        GLOBAL CCP2CON
        GLOBAL ECCP2CONbits
        GLOBAL ECCP2CON
        GLOBAL CM1CON0bits
        GLOBAL CM1CON0
        GLOBAL CM2CON0bits
        GLOBAL CM2CON0
        GLOBAL CM2CON1bits
        GLOBAL CM2CON1
        GLOBAL OSCTUNEbits
        GLOBAL OSCTUNE
        GLOBAL HLVDCONbits
        GLOBAL HLVDCON
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
        GLOBAL EECON1bits
        GLOBAL EECON1
        GLOBAL EECON2
        GLOBAL EEDATA
        GLOBAL EEADR
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
        GLOBAL SPBRGHbits
        GLOBAL SPBRGH
        GLOBAL SPBRGH1bits
        GLOBAL SPBRGH1
        GLOBAL T3CONbits
        GLOBAL T3CON
        GLOBAL TMR3L
        GLOBAL TMR3H
        GLOBAL T3GCONbits
        GLOBAL T3GCON
        GLOBAL ACTCONbits
        GLOBAL ACTCON
        GLOBAL STCONbits
        GLOBAL STCON
        GLOBAL ECCP1ASbits
        GLOBAL ECCP1AS
        GLOBAL ECCP1DELbits
        GLOBAL ECCP1DEL
        GLOBAL PWM1CONbits
        GLOBAL PWM1CON
        GLOBAL BAUDCONbits
        GLOBAL BAUDCON
        GLOBAL BAUDCON1bits
        GLOBAL BAUDCON1
        GLOBAL PSTR1CONbits
        GLOBAL PSTR1CON
        GLOBAL T2CONbits
        GLOBAL T2CON
        GLOBAL PR2
        GLOBAL TMR2
        GLOBAL CCP1CONbits
        GLOBAL CCP1CON
        GLOBAL ECCP1CONbits
        GLOBAL ECCP1CON
        GLOBAL CCPR1
        GLOBAL CCPR1L
        GLOBAL CCPR1H
        GLOBAL ADCON2bits
        GLOBAL ADCON2
        GLOBAL ADCON1bits
        GLOBAL ADCON1
        GLOBAL ADCON0bits
        GLOBAL ADCON0
        GLOBAL ADRESL
        GLOBAL ADRESH
        GLOBAL SSP1CON2bits
        GLOBAL SSP1CON2
        GLOBAL SSPCON2bits
        GLOBAL SSPCON2
        GLOBAL SSP1CONbits
        GLOBAL SSP1CON
        GLOBAL SSP1CON1bits
        GLOBAL SSP1CON1
        GLOBAL SSPCONbits
        GLOBAL SSPCON
        GLOBAL SSP1STATbits
        GLOBAL SSP1STAT
        GLOBAL SSPSTATbits
        GLOBAL SSPSTAT
        GLOBAL SSP1ADDbits
        GLOBAL SSP1ADD
        GLOBAL SSPADDbits
        GLOBAL SSPADD
        GLOBAL SSP1BUF
        GLOBAL SSPBUF
        GLOBAL SSP1MSKbits
        GLOBAL SSP1MSK
        GLOBAL SSPMSKbits
        GLOBAL SSPMSK
        GLOBAL SSP1CON3bits
        GLOBAL SSP1CON3
        GLOBAL SSPCON3bits
        GLOBAL SSPCON3
        GLOBAL T1GCONbits
        GLOBAL T1GCON
        GLOBAL T1CONbits
        GLOBAL T1CON
        GLOBAL TMR1L
        GLOBAL TMR1H
        GLOBAL RCONbits
        GLOBAL RCON
        GLOBAL WDTCONbits
        GLOBAL WDTCON
        GLOBAL OSCCON2bits
        GLOBAL OSCCON2
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
