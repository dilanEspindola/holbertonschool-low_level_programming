#include <stdio.h>

/**
 * puts2 - prints every other caracter of a string
 * @str: is a pointer
*/

void puts2(char *str)
{
	int a;

	for (a = 0; a >= 0; a++)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
}
