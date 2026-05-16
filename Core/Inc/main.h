/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define WE_PedesButton_Pin GPIO_PIN_2
#define WE_PedesButton_GPIO_Port GPIOC
#define WE_PedesButton_EXTI_IRQn EXTI2_IRQn
#define NS_PedesButton_Pin GPIO_PIN_3
#define NS_PedesButton_GPIO_Port GPIOC
#define NS_PedesButton_EXTI_IRQn EXTI3_IRQn
#define NS_RED_Pin GPIO_PIN_0
#define NS_RED_GPIO_Port GPIOA
#define NS_YELLOW_Pin GPIO_PIN_1
#define NS_YELLOW_GPIO_Port GPIOA
#define NS_GREEN_Pin GPIO_PIN_4
#define NS_GREEN_GPIO_Port GPIOA
#define WE_GREEN_Pin GPIO_PIN_3
#define WE_GREEN_GPIO_Port GPIOB
#define WE_RED_Pin GPIO_PIN_4
#define WE_RED_GPIO_Port GPIOB
#define WE_YELLOW_Pin GPIO_PIN_5
#define WE_YELLOW_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define NS_GPIO_Port	GPIOA
#define WE_GPIO_Port	GPIOB
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
