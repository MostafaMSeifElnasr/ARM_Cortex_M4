
#ifndef MCAL_GPIO_GPIO_PRIVATE_H_
#define MCAL_GPIO_GPIO_PRIVATE_H_


/*Registers struct*/
typedef struct
{
	u32 MODER    ;   /*this register is to set the mode of any pin*/
	u32 OTYPER   ;   /*this register is to set type pf output pins(PP/OD)*/
	u32 OSPEEDR  ;   /*this register is to set the speed of output pins*/
	u32 PUPDR    ;   /*this register is to select pullup or pulldown input*/
	u32 IDR      ;   /*this register is to set the value of input pins*/
	u32 ODR      ;   /*this register is to set the value of output pins*/
}GPIO_REG_t;

#define GPIOA   ((GPIO_REG_t *)(0x40020000))
#define GPIOB   ((GPIO_REG_t *)(0x40020400))
#define GPIOC   ((GPIO_REG_t *)(0x40020800))



#endif /* MCAL_GPIO_GPIO_PRIVATE_H_ */
