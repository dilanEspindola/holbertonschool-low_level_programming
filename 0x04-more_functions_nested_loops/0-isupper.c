#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: number integer
 *
 * Return: 1 if it's uppercase nad zero if it's not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
