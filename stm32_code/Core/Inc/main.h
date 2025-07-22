/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32h5xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ML_ENC_B_Pin GPIO_PIN_0
#define ML_ENC_B_GPIO_Port GPIOA
#define ML_ENC_A_Pin GPIO_PIN_1
#define ML_ENC_A_GPIO_Port GPIOA
#define MR_PWM_Pin GPIO_PIN_2
#define MR_PWM_GPIO_Port GPIOA
#define ML_PWM_Pin GPIO_PIN_3
#define ML_PWM_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_7
#define SPI1_CS_GPIO_Port GPIOA
#define MR_ENC_A_Pin GPIO_PIN_10
#define MR_ENC_A_GPIO_Port GPIOB
#define MR_ENC_B_Pin GPIO_PIN_15
#define MR_ENC_B_GPIO_Port GPIOB
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define MR_FWD_Pin GPIO_PIN_5
#define MR_FWD_GPIO_Port GPIOB
#define MR_BWD_Pin GPIO_PIN_6
#define MR_BWD_GPIO_Port GPIOB
#define ML_BWD_Pin GPIO_PIN_7
#define ML_BWD_GPIO_Port GPIOB
#define ML_FWD_Pin GPIO_PIN_8
#define ML_FWD_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
