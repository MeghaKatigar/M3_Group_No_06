#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>
#define BTN_PRESSED SET

void delay(void);
void Switch_One_Time_Press(void);
void Switch_Two_Times_Press(void);
void Switch_Three_Times_Press(void);
void Switch_Four_Times_Press(void);
int main(void)
{
	
	GPIO_Handle_t GpioLed, GpioLed1, GpioLed2, GpioLed3, GpioBtn;

	// Initializing GPIO Pin number 12
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	// Initializing GPIO Pin number 13
	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed1);

	// Initializing GPIO Pin number 14
	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed2);

	// Initializing GPIO Pin number 15
	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed3);

	// Initializing GPIO Button
	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioBtn);

	uint32_t count = 0;
	uint32_t previous_state = 0;

	while (1)
	{
		GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_0, 0);
		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == 1)
		{

			delay();
			count++;
			if ((count == 1) && (previous_state != 1) && (previous_state != 2) && previous_state != 3)
			{
				Switch_One_Time_Press();
				previous_state = count;
				count = 0;
			}
			else if ((count == 2) && (previous_state != 2) && previous_state != 3)
			{
				Switch_Two_Times_Press();
				previous_state = count;
				count = 0;
			}
			else if ((count == 3) && previous_state != 3)
			{
				Switch_Three_Times_Press();
				previous_state = count;
				count = 0;
			}
			else if (count == 4)
			{
				Switch_Four_Times_Press();
				previous_state = 0;
				count = 0;
			}
		}
	}
}
void delay(void)
{
	for (uint32_t i = 0; i < 50000000; i++)
		;
}

void Switch_One_Time_Press(void)
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, SET);
}

void Switch_Two_Times_Press(void)
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, RESET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, RESET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, RESET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, RESET);
}
void Switch_Three_Times_Press(void)
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, RESET);
}

void Switch_Four_Times_Press(void)
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, RESET);

	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, SET);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, RESET);
}
