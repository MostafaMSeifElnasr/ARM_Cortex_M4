/*************************************************************/
/*************************************************************/
/************     Author    : Mostafa Mahmoud     ************/
/************     file name : EXTI_private.h      ************/
/************     Date      : 10/5/2023           ************/
/*************************************************************/
/*************************************************************/

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_


typedef struct
{
	u32 IMR;
	u32 EMR;
	u32 RTSR;
	u32 FTSR;
	u32 SWIER;
	u32 PR;
}EXTI_t;

#define EXTI    ((EXTI_t *)(0x40013C00))


#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
