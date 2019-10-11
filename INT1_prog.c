/*
 * INT1_prog.c
 *
 *  Created on: Jul 10, 2018
 *      Author: Sedra Frimware
 */
#include"../lib/std_types.h"
#include"../lib/macros.h"
#include<avr/io.h>
#include<avr/interrupt.h>
#include"INT1_interface.h"


void INT1_Inits(void){
	//***********************PIF configurable***************when this event occured ***********************


CLEAR_BIT(DDRD,3);// input
SET_BIT(PORTD,3);  //pull up resistance //INT0 at  PD2 in atmega32,(datasheet)

//PB0 output

//select low level //pulse
CLEAR_BIT(MCUCR,2);                //interrupt sense control (datasheet)
CLEAR_BIT(MCUCR,3);                //when low flag will raise then interruppt will occured

//*********************************************************************

//enable interrupt request of INT0 (PIE->1)
SET_BIT(GICR,7);         //bit 6 for INT0

//enable global interrupt  (GIE->1)
SET_BIT(SREG,7);     // bit ,7 only can

}

