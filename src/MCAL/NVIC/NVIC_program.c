/*************************************************************/
/*************************************************************/
/************     Author    : Mostafa Mahmoud     ************/
/************     file name : NVIC_program.c      ************/
/************     Date      : 10/5/2023           ************/
/*************************************************************/
/*************************************************************/

#include "../../LIB/STD_LIB.h"
#include "../../LIB/BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void NVIC_voidInit(void)
{
	/*local var for the value of AIRCR*/
	u32 Local_u32RegisterValue;

	/*Set configuration of system SW priorities*/
	Local_u32RegisterValue = VECT_KEY | (PRIORITY_CONFIG << 8);

	/*assign the value to AIRCR*/
	SCB_AIRCR = Local_u32RegisterValue;
}

void NVIC_voidEnableInterrupt(u8 Copy_u8IntID)
{
	NVIC->ISER[Copy_u8IntID/32] = (1<<(Copy_u8IntID % 32));
}

void NVIC_voidDisableInterrupt(u8 Copy_u8IntID)
{
	NVIC->ICER[Copy_u8IntID/32] = (1<<(Copy_u8IntID % 32));
}

void NVIC_voidSetPendingFlag(u8 Copy_u8IntID)
{
	NVIC->ISPR[Copy_u8IntID/32] = (1<<(Copy_u8IntID % 32));
}

void NVIC_voidClearPendingFlag(u8 Copy_u8IntID)
{
	NVIC->ICPR[Copy_u8IntID/32] = (1<<(Copy_u8IntID % 32));
}

u8 NVIC_u8ReadActiveFlag(u8 Copy_u8IntID)
{
	//return NVIC->IABR[Copy_u8IntID/32] >> (Copy_u8IntID % 32);
	return GET_BIT(NVIC->IABR[Copy_u8IntID/32], (Copy_u8IntID % 32));
}

void NVIC_voidSetSWPriority(u8 Copy_u8SWPriority , u8 Copy_u8IntId)
{
    /*setting both group and sub-priority into the high 4 bits */
    NVIC->IPR[Copy_u8IntId]  = (Copy_u8SWPriority<<4);
}
