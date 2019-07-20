#include "main.h"

void delay(){
	for(int index = 0; index < 1000000; index++){

	}
}

int main(void) {
	 RCC->AHB4ENR |= RCC_AHB4ENR_GPIOBEN;
	 GPIOB->MODER = 0;
	 GPIOB->MODER |= GPIO_MODER_MODE14_0;
	 GPIOB->MODER |= GPIO_MODER_MODE7_0;
//	 GPIOB->OSPEEDR &= GPIO_OSPEEDR_OSPEED14_0;
//	 GPIOB->ODR &= GPIO_ODR_OD14;
///
	while(1){
		 GPIOB->BSRR |= GPIO_BSRR_BS14;
		 GPIOB->BSRR |= GPIO_BSRR_BR7;
		delay();
		 GPIOB->BSRR |= GPIO_BSRR_BR14;
		 GPIOB->BSRR |= GPIO_BSRR_BS7;
		 delay();
	}

	// start
}
