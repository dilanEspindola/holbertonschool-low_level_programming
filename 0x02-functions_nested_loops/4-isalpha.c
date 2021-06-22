#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - returns 1 if c is lowercase or uppercase
 *
 * @c: the value to check if it's a lowercase or uppercase
 *
 * Return: 1 it's lowercaseor uppercase and 0 if it's not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
