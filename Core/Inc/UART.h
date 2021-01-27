/**
  ******************************************************************************

  UART Code For STM32F407VG
  Author:   Mouadh Dahech
  Updated:  1/16/2021

  ******************************************************************************
  Copyright (C) 

  ******************************************************************************
*/
#ifndef __UART_h__
#define __UART_h__
#include "stm32f407xx.h"

void UART_config(void);

void Send_Char(uint8_t ch);

uint8_t GetChar (void);

#endif