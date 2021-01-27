
/**
  ******************************************************************************

  UART Code For STM32F407VG
  Author:   Mouadh Dahech
  Updated:  1/16/2021

  ******************************************************************************
  Copyright (C) 

  ******************************************************************************
*/
#include "main.h"

void SystemClock(void);
volatile uint8_t Rxval = 0; 

int main(void)
{
  SystemClock();
  GPIO_config();
  UART_config();

  while (1)
  {
     
     Rxval = GetChar();
     if(Rxval == 128)
       GPIOD->ODR = 0x0000;
     else if(Rxval == 129)
       GPIOD->ODR = 0xF000;
       
  }
  return 0 ; 
}