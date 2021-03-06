/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_DIS_Pin GPIO_PIN_13
#define LED_DIS_GPIO_Port GPIOC
#define KEY_Pin GPIO_PIN_10
#define KEY_GPIO_Port GPIOB
#define CTRL_12V_Pin GPIO_PIN_12
#define CTRL_12V_GPIO_Port GPIOB
#define CTRL_5V_Pin GPIO_PIN_13
#define CTRL_5V_GPIO_Port GPIOB
#define CTRL_3V3_Pin GPIO_PIN_14
#define CTRL_3V3_GPIO_Port GPIOB
#define CTRL_1V8_Pin GPIO_PIN_15
#define CTRL_1V8_GPIO_Port GPIOB
#define CS_Pin GPIO_PIN_5
#define CS_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_6
#define DC_GPIO_Port GPIOB
#define RES_Pin GPIO_PIN_7
#define RES_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_8
#define SDA_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_9
#define SCL_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
