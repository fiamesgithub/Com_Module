/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RS485_1_COM_Pin GPIO_PIN_13
#define RS485_1_COM_GPIO_Port GPIOC
#define RS485_1_RX_Pin GPIO_PIN_6
#define RS485_1_RX_GPIO_Port GPIOF
#define RS485_1_TX_Pin GPIO_PIN_7
#define RS485_1_TX_GPIO_Port GPIOF
#define RS485_2_RX_Pin GPIO_PIN_3
#define RS485_2_RX_GPIO_Port GPIOA
#define GSM_LDO_EN_Pin GPIO_PIN_11
#define GSM_LDO_EN_GPIO_Port GPIOD
#define TEST_LED_Pin GPIO_PIN_6
#define TEST_LED_GPIO_Port GPIOG
#define GSM_TX_Pin GPIO_PIN_6
#define GSM_TX_GPIO_Port GPIOC
#define GSM_RX_Pin GPIO_PIN_7
#define GSM_RX_GPIO_Port GPIOC
#define RS485_2_COM_Pin GPIO_PIN_3
#define RS485_2_COM_GPIO_Port GPIOD
#define RS485_2_TX_Pin GPIO_PIN_5
#define RS485_2_TX_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
