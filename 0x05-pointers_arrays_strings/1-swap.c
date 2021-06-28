#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
*/

void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = 42;
	num2 = 48;

	*a = num1;
	*b = num2;
}
