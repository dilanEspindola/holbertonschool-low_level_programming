#include <stdio.h>
#inlude "holberton.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number integer
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
