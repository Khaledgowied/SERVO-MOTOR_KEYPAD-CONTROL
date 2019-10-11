/*
 * main.c
 *
 *  Created on: Jul 10, 2018
 *      Author: Sedra Frimware
 */
#include"../lib/std_types.h"
#include"../lib/macros.h"
#include"DIO_interface.h"
#include"INT0_interface.h"
#include"INT1_interface.h"
#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>    //pwm by software
#include"SERVO_interface.h"  //done


u8 i ;
s16 ang;
int main(void){

	INT0_Inits();
	INT1_Inits();

	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN_0, DIO_OUTPUT);

    SERVO_voidGetAngle(SERVO_0_ANGLE+ang);


while(1);


return 0;
}
ISR(INT0_vect){
	ang+=30;              // if i want to stop increasing after 210???????????

if(ang>=210){
	SERVO_voidGetAngle(SERVO_180_ANGLE);
ang+=30;
}else{
	SERVO_voidGetAngle(SERVO_0_ANGLE+ang);

}
}
ISR(INT1_vect){
ang-=30;
if(ang<=-30){
	SERVO_voidGetAngle(SERVO_0_ANGLE);
	ang-=30;
}
else{
	SERVO_voidGetAngle(SERVO_0_ANGLE+ang);

}
}

