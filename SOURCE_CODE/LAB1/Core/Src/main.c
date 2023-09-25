/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void setNumberOnClock(int num)
{
	if(num==1) HAL_GPIO_WritePin(N1_GPIO_Port , N1_Pin, GPIO_PIN_RESET);
	if(num==2) HAL_GPIO_WritePin(N2_GPIO_Port , N2_Pin, GPIO_PIN_RESET);
	if(num==3) HAL_GPIO_WritePin(N3_GPIO_Port , N3_Pin, GPIO_PIN_RESET);
	if(num==4) HAL_GPIO_WritePin(N4_GPIO_Port , N4_Pin, GPIO_PIN_RESET);
	if(num==5) HAL_GPIO_WritePin(N5_GPIO_Port , N5_Pin, GPIO_PIN_RESET);
	if(num==6) HAL_GPIO_WritePin(N6_GPIO_Port , N6_Pin, GPIO_PIN_RESET);
	if(num==7) HAL_GPIO_WritePin(N7_GPIO_Port , N7_Pin, GPIO_PIN_RESET);
	if(num==8) HAL_GPIO_WritePin(N8_GPIO_Port , N8_Pin, GPIO_PIN_RESET);
	if(num==9) HAL_GPIO_WritePin(N9_GPIO_Port , N9_Pin, GPIO_PIN_RESET);
	if(num==10) HAL_GPIO_WritePin(N10_GPIO_Port , N10_Pin, GPIO_PIN_RESET);
	if(num==11) HAL_GPIO_WritePin(N11_GPIO_Port , N11_Pin, GPIO_PIN_RESET);
	if(num==0) HAL_GPIO_WritePin(N12_GPIO_Port , N12_Pin, GPIO_PIN_RESET);
}
void clearNumberOnClock(int num)
{
	if(num==1) HAL_GPIO_WritePin(N1_GPIO_Port , N1_Pin, GPIO_PIN_SET);
	if(num==2) HAL_GPIO_WritePin(N2_GPIO_Port , N2_Pin, GPIO_PIN_SET);
	if(num==3) HAL_GPIO_WritePin(N3_GPIO_Port , N3_Pin, GPIO_PIN_SET);
	if(num==4) HAL_GPIO_WritePin(N4_GPIO_Port , N4_Pin, GPIO_PIN_SET);
	if(num==5) HAL_GPIO_WritePin(N5_GPIO_Port , N5_Pin, GPIO_PIN_SET);
	if(num==6) HAL_GPIO_WritePin(N6_GPIO_Port , N6_Pin, GPIO_PIN_SET);
	if(num==7) HAL_GPIO_WritePin(N7_GPIO_Port , N7_Pin, GPIO_PIN_SET);
	if(num==8) HAL_GPIO_WritePin(N8_GPIO_Port , N8_Pin, GPIO_PIN_SET);
	if(num==9) HAL_GPIO_WritePin(N9_GPIO_Port , N9_Pin, GPIO_PIN_SET);
	if(num==10) HAL_GPIO_WritePin(N10_GPIO_Port , N10_Pin, GPIO_PIN_SET);
	if(num==11) HAL_GPIO_WritePin(N11_GPIO_Port , N11_Pin, GPIO_PIN_SET);
	if(num==0) HAL_GPIO_WritePin(N12_GPIO_Port , N12_Pin, GPIO_PIN_SET);
}
void clearAllClock()
{
	HAL_GPIO_WritePin(N1_GPIO_Port , N1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N2_GPIO_Port , N2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N3_GPIO_Port , N3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N4_GPIO_Port , N4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N5_GPIO_Port , N5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N6_GPIO_Port , N6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N7_GPIO_Port , N7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N8_GPIO_Port , N8_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N9_GPIO_Port , N9_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N10_GPIO_Port , N10_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N11_GPIO_Port , N11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(N12_GPIO_Port , N12_Pin, GPIO_PIN_SET);
}
void TimeStart(int hour, int minute, int second)
{
	if (hour>=12) hour=hour-12;
	if (hour=12) hour=0;
	setNumberOnClock(hour);
	setNumberOnClock(minute/5);
	setNumberOnClock(second/5);
}
/*void Counting(int h,int m,int s)
{
	setNumberOnClock(counter);
	clearNumberOnClock(counter-1);
	if (counter==12) {setNumberOnClock(0);counter=0;}
	counter++;
	HAL_Delay(1000);
}*/
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  	//int counter=0;
    clearAllClock();
    int hour=24,minute=59,second=50;
    TimeStart(hour,minute,second);
    while (1)
      {
    	// Lab1 Ex7
    	  if(hour>=12) hour=hour-12;
          if (second%5==0)
          {
        	  setNumberOnClock(second/5);
        	  clearNumberOnClock(second/5-1);
        	  if((second/5-1)==minute/5 || (second/5-1)==hour) setNumberOnClock(second/5-1);
        	  if(second==60)
        	  {
        		  setNumberOnClock(0);
        		  second=0;
        		  minute++;
        		  if (minute%5==0)
        		  {
        			  setNumberOnClock(minute/5);
        		      clearNumberOnClock(minute/5-1);
        		      if((minute/5-1)==second/5 || (minute/5-1)==hour) setNumberOnClock(minute/5-1);
        		      if (minute==60)
        		      {
        		    	  setNumberOnClock(0);
        		          minute=0;
        		          hour++;
        		          setNumberOnClock(hour);
        		          clearNumberOnClock(hour-1);
        		          if (hour-1==second/5 || hour-1==minute/5) setNumberOnClock(hour-1);
        		          if (hour==12)
        		          {
        		        	  hour=0;
        		        	  setNumberOnClock(0);
        		          }
        		      }
        		   }
        	  }
          }
    	  HAL_Delay(1000);
    	  second++;
      }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, N1_Pin|N2_Pin|N3_Pin|N4_Pin
                          |N5_Pin|N6_Pin|N7_Pin|N8_Pin
                          |N9_Pin|N10_Pin|N11_Pin|N12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : N1_Pin N2_Pin N3_Pin N4_Pin
                           N5_Pin N6_Pin N7_Pin N8_Pin
                           N9_Pin N10_Pin N11_Pin N12_Pin */
  GPIO_InitStruct.Pin = N1_Pin|N2_Pin|N3_Pin|N4_Pin
                          |N5_Pin|N6_Pin|N7_Pin|N8_Pin
                          |N9_Pin|N10_Pin|N11_Pin|N12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
