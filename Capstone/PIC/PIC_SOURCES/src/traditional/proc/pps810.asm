        LIST P=PS810
        NOLIST
;-------------------------------------------------------------------------
; MPLAB-Cxx  PS810 processor definition module
; 
; (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;-------------------------------------------------------------------------

SFR_UNBANKED0       UDATA_ACS H'F80'

PORTA               
PORTAbits           RES 1     ; 0xF80
PORTB               
PORTBbits           RES 1     ; 0xF81

SFR_UNBANKED1       UDATA_ACS H'F8A'
LATB                
LATBbits            RES 1     ; 0xF8A
                    RES 6
PDPB                
PDPBbits            RES 1     ; 0xF91
                    RES 1
TRISB               
TRISBbits           RES 1     ; 0xF93
                    RES 6
REFCAL              
REFCALbits          RES 1     ; 0xF9A
OSCCAL              
OSCCALbits          RES 1     ; 0xF9B
BGCAL               
BGCALbits           RES 1     ; 0xF9C
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
                    RES 3
EECON1              
EECON1bits          RES 1     ; 0xFA6
EECON2              RES 1     ; 0xFA7

SFR_UNBANKED2       UDATA_ACS H'FB1'
T3CON               
T3CONbits           RES 1     ; 0xFB1
TMR3                RES 1     ; 0xFB2
                    RES 1
CMCON               
CMCONbits           RES 1     ; 0xFB4

SFR_UNBANKED3       UDATA_ACS H'FC0'
ADCON2              
ADCON2bits          RES 1     ; 0xFC0
ADCON1              
ADCON1bits          RES 1     ; 0xFC1
ADCON0              
ADCON0bits          RES 1     ; 0xFC2
ADRESL              RES 1     ; 0xFC3
ADRESH              RES 1     ; 0xFC4
ASICON2             
ASICON2bits         RES 1     ; 0xFC5
ASICON1             
ASICON1bits         RES 1     ; 0xFC6
ASISTAT             
ASISTATbits         RES 1     ; 0xFC7
ASIADD              RES 1     ; 0xFC8
ASIBUF              RES 1     ; 0xFC9
T2CON               
T2CONbits           RES 1     ; 0xFCA
                    RES 1
TMR2                RES 1     ; 0xFCC
T1CON               
T1CONbits           RES 1     ; 0xFCD
TMR1                RES 1     ; 0xFCE
                    RES 1
RCON                
RCONbits            RES 1     ; 0xFD0
WDTCON              
WDTCONbits          RES 1     ; 0xFD1
                    RES 1
OSCCON              
OSCCONbits          RES 1     ; 0xFD3
                    RES 1
T0CON               
T0CONbits           RES 1     ; 0xFD5
TMR0L               RES 1     ; 0xFD6
TMR0H               RES 1     ; 0xFD7
STATUS              
STATUSbits          RES 1     ; 0xFD8
FSR2L               RES 1     ; 0xFD9
FSR2H               
FSR2Hbits           RES 1     ; 0xFDA
PLUSW2              RES 1     ; 0xFDB
PREINC2             RES 1     ; 0xFDC
POSTDEC2            RES 1     ; 0xFDD
POSTINC2            RES 1     ; 0xFDE
INDF2               RES 1     ; 0xFDF
BSR                 
BSRbits             RES 1     ; 0xFE0
FSR1L               RES 1     ; 0xFE1
FSR1H               
FSR1Hbits           RES 1     ; 0xFE2
PLUSW1              RES 1     ; 0xFE3
PREINC1             RES 1     ; 0xFE4
POSTDEC1            RES 1     ; 0xFE5
POSTINC1            RES 1     ; 0xFE6
INDF1               RES 1     ; 0xFE7
WREG                RES 1     ; 0xFE8
FSR0L               RES 1     ; 0xFE9
FSR0H               
FSR0Hbits           RES 1     ; 0xFEA
PLUSW0              RES 1     ; 0xFEB
PREINC0             RES 1     ; 0xFEC
POSTDEC0            RES 1     ; 0xFED
POSTINC0            RES 1     ; 0xFEE
INDF0               RES 1     ; 0xFEF
                    RES 1
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
TBLPTRU             
TBLPTRUbits         RES 1     ; 0xFF8
PC                  
PCL                 RES 1     ; 0xFF9
PCLATH              RES 1     ; 0xFFA
PCLATU              
PCLATUbits          RES 1     ; 0xFFB
STKPTR              
STKPTRbits          RES 1     ; 0xFFC
TOS                 
TOSL                RES 1     ; 0xFFD
TOSH                RES 1     ; 0xFFE
TOSU                
TOSUbits            RES 1     ; 0xFFF


;*** Set all of memory to zeroes ***/
; Use FSR0 to increment through memory from address 0x0
; to the end of the last bank skipping sfrs and
; unimplemented addresses.

    CODE
__zero_memory
    movlw  0x80      ;low byte of (end address + 1)
    movwf  PRODL, 0
    lfsr   0, 0x0    ;start address
    movlw  0x0       ;high byte of (end address + 1)
    rcall zero_block
    movlw  0x40      ;low byte of (end address + 1)
    movwf  PRODL, 0
    lfsr   0, 0xE00  ;start address
    movlw  0xE       ;high byte of (end address + 1)
    rcall zero_block
    movlw  0x0       ;low byte of (end address + 1)
    movwf  PRODL, 0
    lfsr   0, 0x80   ;start address
    movlw  0x2       ;high byte of (end address + 1)
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

        GLOBAL PORTAbits
        GLOBAL PORTA
        GLOBAL PORTBbits
        GLOBAL PORTB
        GLOBAL LATBbits
        GLOBAL LATB
        GLOBAL PDPBbits
        GLOBAL PDPB
        GLOBAL TRISBbits
        GLOBAL TRISB
        GLOBAL REFCALbits
        GLOBAL REFCAL
        GLOBAL OSCCALbits
        GLOBAL OSCCAL
        GLOBAL BGCALbits
        GLOBAL BGCAL
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
        GLOBAL EECON1bits
        GLOBAL EECON1
        GLOBAL EECON2
        GLOBAL T3CONbits
        GLOBAL T3CON
        GLOBAL TMR3
        GLOBAL CMCONbits
        GLOBAL CMCON
        GLOBAL ADCON2bits
        GLOBAL ADCON2
        GLOBAL ADCON1bits
        GLOBAL ADCON1
        GLOBAL ADCON0bits
        GLOBAL ADCON0
        GLOBAL ADRESL
        GLOBAL ADRESH
        GLOBAL ASICON2bits
        GLOBAL ASICON2
        GLOBAL ASICON1bits
        GLOBAL ASICON1
        GLOBAL ASISTATbits
        GLOBAL ASISTAT
        GLOBAL ASIADD
        GLOBAL ASIBUF
        GLOBAL T2CONbits
        GLOBAL T2CON
        GLOBAL TMR2
        GLOBAL T1CONbits
        GLOBAL T1CON
        GLOBAL TMR1
        GLOBAL RCONbits
        GLOBAL RCON
        GLOBAL WDTCONbits
        GLOBAL WDTCON
        GLOBAL OSCCONbits
        GLOBAL OSCCON
        GLOBAL T0CONbits
        GLOBAL T0CON
        GLOBAL TMR0L
        GLOBAL TMR0H
        GLOBAL STATUSbits
        GLOBAL STATUS
        GLOBAL FSR2L
        GLOBAL FSR2Hbits
        GLOBAL FSR2H
        GLOBAL PLUSW2
        GLOBAL PREINC2
        GLOBAL POSTDEC2
        GLOBAL POSTINC2
        GLOBAL INDF2
        GLOBAL BSRbits
        GLOBAL BSR
        GLOBAL FSR1L
        GLOBAL FSR1Hbits
        GLOBAL FSR1H
        GLOBAL PLUSW1
        GLOBAL PREINC1
        GLOBAL POSTDEC1
        GLOBAL POSTINC1
        GLOBAL INDF1
        GLOBAL WREG
        GLOBAL FSR0L
        GLOBAL FSR0Hbits
        GLOBAL FSR0H
        GLOBAL PLUSW0
        GLOBAL PREINC0
        GLOBAL POSTDEC0
        GLOBAL POSTINC0
        GLOBAL INDF0
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
        GLOBAL TBLPTRUbits
        GLOBAL TBLPTRU
        GLOBAL PC
        GLOBAL PCL
        GLOBAL PCLATH
        GLOBAL PCLATUbits
        GLOBAL PCLATU
        GLOBAL STKPTRbits
        GLOBAL STKPTR
        GLOBAL TOS
        GLOBAL TOSL
        GLOBAL TOSH
        GLOBAL TOSUbits
        GLOBAL TOSU

;-------------------------------------------------------------------------

        LIST
        END
