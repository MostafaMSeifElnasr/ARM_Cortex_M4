/*************************************************************/
/*************************************************************/
/************     Author    : Mostafa Mahmoud     ************/
/************     file name : NVIC_interface.h    ************/
/************     Date      : 10/5/2023           ************/
/*************************************************************/
/*************************************************************/

#ifndef MCAL_NVIC_NVIC_INTERFACE_H_
#define MCAL_NVIC_NVIC_INTERFACE_H_

#define GROUP4SUB0       (0)     //16 groups (16 levels of nesting)
#define GROUP3SUB1       (4)     //8 groups and 2 subgroups
#define GROUP2SUB2       (5)     //4 groups and 4 subgroups
#define GROUP1SUB3       (6)     //2 groups and 8 subgroups
#define GROUP0SUB4       (7)     //0 groups and 16 subgroups (No nesting)

/*initialize NVIC, set priority configurations*/
void NVIC_voidInit(void);

void NVIC_voidEnableInterrupt(u8 Copy_u8IntID);

void NVIC_voidDisableInterrupt(u8 Copy_u8IntID);

void NVIC_voidSetPendingFlag(u8 Copy_u8IntID);

void NVIC_voidClearPendingFlag(u8 Copy_u8IntID);

u8 NVIC_u8ReadActiveFlag(u8 Copy_u8IntID);


#endif /* MCAL_NVIC_NVIC_INTERFACE_H_ */
