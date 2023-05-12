/*
 * GPIO_interface.h
 *
 *  Created on: May 11, 2023
 *      Author: lenovo
 */

#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

/*MC's ports*/
#define GPIO_PORTA                   1
#define GPIO_PORTB                   2
#define GPIO_PORTC                   3

/*output pin modes*/
#define GPIO_PUSH_PULL               0
#define GPIO_OPEN_DRAIN              1

/*output pin speed*/
#define GPIO_LOW_SPEED               0
#define GPIO_MID_SPEED               1
#define GPIO_HIGH_SPEED              2
#define GPIO_VERY_HIGH_SPEED         3

/*Output pin value*/
#define GPIO_OUTPUT_HIGH             1
#define GPIO_OUTPUT_LOW              0

#define GPIO_INPUT_NOPULL            0b00
#define GPIO_INPUT_PULLUP            0b01
#define GPIO_INPUT_PULLDOWN          0b10

#define GPIO_PIN0                    0
#define GPIO_PIN1                    1
#define GPIO_PIN2                    2
#define GPIO_PIN3                    3
#define GPIO_PIN4                    4
#define GPIO_PIN5                    5
#define GPIO_PIN6                    6
#define GPIO_PIN7                    7
#define GPIO_PIN8                    8
#define GPIO_PIN9                    9
#define GPIO_PIN10                   10
#define GPIO_PIN11                   11
#define GPIO_PIN12                   12
#define GPIO_PIN13                   13
#define GPIO_PIN14                   14
#define GPIO_PIN15                   15

/*this function is used to initialize any pin as an output pin*/
void GPIO_voidInitOutputPin(u8 copy_u8PortID, u8 Copy_u8PinID
		, u8 Copy_u8PinType, u8 Copy_u8PinSpeed);

/*this function is used to initialize any pin as an input pin*/
void GPIO_voidInitInputPin(u8 copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8PullMode);

/*this function is used to set the value of any output pin(high,low)*/
void GPIO_voidSetOutputPinValue(u8 copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);

/*this function is used to get the value of any input pin*/
u8 GPIO_voidGetInputPinValue(u8 copy_u8PortID, u8 Copy_u8PinID);

#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
