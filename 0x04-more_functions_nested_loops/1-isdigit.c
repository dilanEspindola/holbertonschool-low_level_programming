#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 to 9)
 *
 * @c: number integer
 *
 * Return: 1 if it's a digit and zero if it's not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
