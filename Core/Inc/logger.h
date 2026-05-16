/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : logger.h
  * @brief          : Header for logger.c file.
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
#ifndef INC_LOGGER_H_
#define INC_LOGGER_H_

/* USER CODE BEGIN Includes */
#include "usart.h"
#include "cmsis_os.h"
#include <string.h>
/* USER CODE END Includes */

void LOG_Message(char* msg);

#endif /* INC_LOGGER_H_ */
