#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - prints numberst 0 to 14
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(48 + (j / 10));

			_putchar(48 + (j % 10));
		}
		_putchar('\n');
	}
}
