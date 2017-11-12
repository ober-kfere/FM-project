
**************
* THIS IS IT *
**************


attack update vypada

ar = (new_value << 4) | 0x0F;
adsr &= ar;

decay update vypada

dr = new value | 0xF0;
adsr &= dr;



**************
* THIS IS *not* IT *
**************


attack + decay vypada

uint8_t ar = (new_attack_value << 4) | 0x0F;
uint8_t dr = new_decay_value | 0xF0;

adenv &= ar & dr;

!!! do vystupu musi ist vzdy kompozitne cislo attack+decay, inak sa jeden z nich vzdy premaze






kazdy operator ma 8 registrov

r1 - AM VIB EGT KSR MULT

r2 - KLS       TL

r3 -   AR        DR

r4 -   SR        RR

r5 -     FNUM - L

r6 - KON BLOCK FNUM - H

r7 - CHD CHC CHB CHA  FB  CNT

r8 -               WS

kazdy operator aj jeho register ma adresu



struct operator

op1 mult 13
op1 ar 12




















