#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _abs - computes the absolute value
 * of a integer
 *
 * @num: number integer
 *
 * Return: the absolute value
*/

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
