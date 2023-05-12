#include "../../LIB/STD_LIB.h"
#include "../../LIB/BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


void GPIO_voidInitOutputPin(u8 copy_u8PortID, u8 Copy_u8PinID
		, u8 Copy_u8PinType, u8 Copy_u8PinSpeed)
{
	/*switch the PORT ID*/
	switch(copy_u8PortID)
	{
	case GPIO_PORTA:
		/*Set the direction of pin to be output (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOA->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOA->MODER |= (0b01<<(Copy_u8PinID*2));

		/*Set Speed of output pins (Bit Masking)*/
		GPIOA->OSPEEDR &= ~(0b11<<(Copy_u8PinID*2));
		GPIOA->OSPEEDR |= (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set type of output pins (Bit Masking)*/
		WRT_BIT(GPIOA->OTYPER, Copy_u8PinID, Copy_u8PinType);
		break;
	case GPIO_PORTB:
		/*Set the direction of pin to be output (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOB->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOB->MODER |= (0b01<<(Copy_u8PinID*2));

		/*Set Speed of output pins (Bit Masking)*/
		GPIOB->OSPEEDR &= ~(0b11<<(Copy_u8PinID*2));
		GPIOB->OSPEEDR |= (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set type of output pins (Bit Masking)*/
		WRT_BIT(GPIOB->OTYPER, Copy_u8PinID, Copy_u8PinType);
		break;
	case GPIO_PORTC:
		/*Set the direction of pin to be output (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOC->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOC->MODER |= (0b01<<(Copy_u8PinID*2));

		/*Set Speed of output pins (Bit Masking)*/
		GPIOC->OSPEEDR &= ~(0b11<<(Copy_u8PinID*2));
		GPIOC->OSPEEDR |= (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set type of output pins (Bit Masking)*/
		WRT_BIT(GPIOC->OTYPER, Copy_u8PinID, Copy_u8PinType);
		break;
	}
}

void GPIO_voidInitInputPin(u8 copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8PullMode)
{
	/*switch the PORT ID*/
	switch(copy_u8PortID)
	{
	case GPIO_PORTA:
		/*Set the direction of pin to be input (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOA->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOA->MODER |= (0b00<<(Copy_u8PinID*2));

		/*Set pull-up or pull-down*/
		/*clear PUPDR pins*/
		GPIOA->PUPDR &= ~(0b11<<(Copy_u8PinID*2));
		/*set PUPDR values*/
		GPIOA->PUPDR |= (Copy_u8PullMode<<(Copy_u8PinID*2));
		break;
	case GPIO_PORTB:
		/*Set the direction of pin to be input (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOA->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOA->MODER |= (0b00<<(Copy_u8PinID*2));

		/*Set pull-up or pull-down*/
		/*clear PUPDR pins*/
		GPIOA->PUPDR &= ~(0b11<<(Copy_u8PinID*2));
		/*set PUPDR values*/
		GPIOA->PUPDR |= (Copy_u8PullMode<<(Copy_u8PinID*2));
		break;
	case GPIO_PORTC:
		/*Set the direction of pin to be input (Bit Masking)*/
		/*clear the required MODER pins*/
		GPIOA->MODER &= ~(0b11<<(Copy_u8PinID*2));
		/*set pin mode in MODER (output)*/
		GPIOA->MODER |= (0b00<<(Copy_u8PinID*2));

		/*Set pull-up or pull-down*/
		/*clear PUPDR pins*/
		GPIOA->PUPDR &= ~(0b11<<(Copy_u8PinID*2));
		/*set PUPDR values*/
		GPIOA->PUPDR |= (Copy_u8PullMode<<(Copy_u8PinID*2));
		break;
	}
}

void GPIO_voidSetOutputPinValue(u8 copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value)
{
	/*switch the PORT ID*/
	switch(copy_u8PortID)
	{
	case GPIO_PORTA:
		WRT_BIT(GPIOA->ODR, Copy_u8PinID, Copy_u8Value);
		break;
	case GPIO_PORTB:
		WRT_BIT(GPIOB->ODR, Copy_u8PinID, Copy_u8Value);
		break;
	case GPIO_PORTC:
		WRT_BIT(GPIOC->ODR, Copy_u8PinID, Copy_u8Value);
		break;
	}
}

u8 GPIO_voidGetInputPinValue(u8 copy_u8PortID, u8 Copy_u8PinID)
{
	u8 Local_u8PinValue = 0;
	/*switch the PORT ID*/
	switch(copy_u8PortID)
	{
	case GPIO_PORTA:
		Local_u8PinValue = GET_BIT(GPIOA->IDR, Copy_u8PinID);
		break;
	case GPIO_PORTB:
		Local_u8PinValue = GET_BIT(GPIOB->IDR, Copy_u8PinID);
		break;
	case GPIO_PORTC:
		Local_u8PinValue = GET_BIT(GPIOC->IDR, Copy_u8PinID);
		break;
	}
	return Local_u8PinValue;
}
