/*
 *
 *	It is simple template project.
 *	This project doesnt have SystemInit function.
 *  So after Reset_Handler starts main.
 *  RCC configured in config.c file.
 *
 */


#include "config.h"
int main(void)
{
	rcc_config();	
	while(1)
	{
	}
}
