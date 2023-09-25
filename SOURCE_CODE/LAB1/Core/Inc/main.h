/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#define N1_Pin GPIO_PIN_4
#define N1_GPIO_Port GPIOA
#define N2_Pin GPIO_PIN_5
#define N2_GPIO_Port GPIOA
#define N3_Pin GPIO_PIN_6
#define N3_GPIO_Port GPIOA
#define N4_Pin GPIO_PIN_7
#define N4_GPIO_Port GPIOA
#define N5_Pin GPIO_PIN_8
#define N5_GPIO_Port GPIOA
#define N6_Pin GPIO_PIN_9
#define N6_GPIO_Port GPIOA
#define N7_Pin GPIO_PIN_10
#define N7_GPIO_Port GPIOA
#define N8_Pin GPIO_PIN_11
#define N8_GPIO_Port GPIOA
#define N9_Pin GPIO_PIN_12
#define N9_GPIO_Port GPIOA
#define N10_Pin GPIO_PIN_13
#define N10_GPIO_Port GPIOA
#define N11_Pin GPIO_PIN_14
#define N11_GPIO_Port GPIOA
#define N12_Pin GPIO_PIN_15
#define N12_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
