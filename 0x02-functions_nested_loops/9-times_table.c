#include "holberton.h"
#include <stdio.h>

/**
 * times_table - prints the multiplication
 * table 0 to 9
*/

void times_table(void)
{
	int i, j;

	int result = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result <= 9)
			{
				if (j > 1)
				{
					putchar(' ');
				}

				putchar('0' + result);

				if (j < 9)
				{
					putchar(', ');
					putchar(' ');
				}
			}
			else
			{
				putchar('0' + result / 10);
				putchar('0' + result % 10);

				if (j < 9)
				{
					putchar(', ');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	putchar('\n');
}
