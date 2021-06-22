#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - returns 1 if c is lowercase and returns 0 if it's not
 *
 * @c: the value to check if it's a lowercase
 *
 * Return: 1 it's lowercase and 0 if it's not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
