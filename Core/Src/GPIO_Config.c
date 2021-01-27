
/**
 * @file <GPIO_Config.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Mouadh Dahech>
 * @date <January 19, 2021>
 *
 */
#include "GPIO_Config.h"

void GPIO_config(void){
//1.Enable the clock	
RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	
//2.config the pin as output	

  GPIOD->MODER = 0X55000000;  	
 
//3.config the output mode 
GPIOD->OTYPER = 0;
GPIOD->OSPEEDR = 0; 	
}