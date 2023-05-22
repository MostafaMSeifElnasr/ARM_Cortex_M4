/*************************************************************/
/*************************************************************/
/************     Author    : Mostafa Mahmoud     ************/
/************     file name : NVIC_private.h      ************/
/************     Date      : 10/5/2023           ************/
/*************************************************************/
/*************************************************************/

#ifndef MCAL_NVIC_NVIC_PRIVATE_H_
#define MCAL_NVIC_NVIC_PRIVATE_H_


typedef struct
{
	u32 ISER[8];
	u32 RESERVED[24];
	u32 ICER[32];         //with reserved
	u32 ISPR[32];         //with reserved
	u32 ICPR[32];         //with reserved
	u32 IABR[64];         //with reserved
	u8  IPR[240];
}NVIC_t;

#define NVIC         ((NVIC_t *)(0xE000E100))

/*to configure software priority groups and sub groups*/
#define SCB_AIRCR    (*(volatile u32*)(0xE000ED0C))

#define VECT_KEY     (0x05FA0000)         //vector key


#endif /* MCAL_NVIC_NVIC_PRIVATE_H_ */
