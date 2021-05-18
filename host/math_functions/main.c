/*
 * main.c
 *
 *  Created on: 14-May-2021
 *      Author: Kevin Tom
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Addition : %X\n", math_add(0x0FFF1111, 0X0FFF1111) );

	printf("Multiplication : %I64X\n", math_mul(0x0FFF1111, 0X0FFF1111) );

	printf("Subtraction : %d\n", math_sub(0x0FFF1111, 0X0FFF1111) );

	printf("Division : %f\n", math_div(0x0FFF1111, 0X0FFF1111) );

	//For program to wait
	getchar();


	return 0;
}
