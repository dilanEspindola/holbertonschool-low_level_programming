#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - prints the
 * last digit
 *
 * @num: number integer
 *
 * Return: the last digit
*/

int print_last_digit(int num)
{
	int lastD;

	lastD = num % 10;

	_putchar('0' + lasD);

	return (lastD);
}
