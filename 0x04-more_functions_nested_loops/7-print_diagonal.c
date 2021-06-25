#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: number integer
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
}
