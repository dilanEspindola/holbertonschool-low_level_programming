#include <stdio.h>
#inlcude "holberton.h"

/**
 * print_sign - prints if the number is greater than 0,
 * iqual or less than zero
 *
 * @n: number integer
 *
 * Return: 1 is greater than 0, -1 is less than 0,
 * and 0 is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
