/*************************************************************/
/*************************************************************/
/************     Author    : Mostafa Mahmoud     ************/
/************     file name : EXTI_interface.h    ************/
/************     Date      : 10/5/2023           ************/
/*************************************************************/
/*************************************************************/


#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_

/*16 macros for EXTI */


/*3 sense signal macros*/
#define FALLING_EDGE         1
#define RISING_EDGE          2
#define ON_CHANGE            3

void EXTI_voidEnableInt(u8 Copy_u8IntID, void(*Copy_PtrToFunc)(void));

void EXTI_voidDisableInt(u8 Copy_u8IntID);

void EXTI_voidSetSenseSignal(u8 Copy_u8SenseSignal, u8 Copy_u8IntID);

void EXTI_voidSetLinePort(u8 Copy_u8IntID, u8 Copy_u8PortID);

#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
