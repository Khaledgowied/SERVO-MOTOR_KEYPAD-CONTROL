/*
 * SERVO_prog.c
 *
 *  Created on: Jul 11, 2018
 *      Author: Sedra Frimware
 */
#include"../lib/std_types.h"
#include"../lib/macros.h"
#include"DIO_interface.h"
#include<avr/io.h>
#include<util/delay.h>
#include"SERVO_interface.h"


void SERVO_voidGetAngle(u8 Num){
	u8 i ;
	if(Num==0){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(1850);

		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(18150);

		}
	}else if (Num==30){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(1500);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(18500);
		}
	}else if (Num==60){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(1300);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(18700);
		}
	}else if (Num==90){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(900);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(19100);
		}
	}else if (Num==120){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(600);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(19400);
		}
	}else if (Num==150){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(300);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(19700);
		}

	}else if (Num==180){
		for (i=0;i<50;i++){
		DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_HIGH);
				_delay_us(80);
			DIO_voidSetPinValue(DIO_PORTA, DIO_PIN_0, DIO_LOW);
			    _delay_us(19920);

		}
	}


}

