#include <stdio.h>
#include "holberton.h"

/**
 * print_square - prints a square
 *
 * @size: value integer
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
