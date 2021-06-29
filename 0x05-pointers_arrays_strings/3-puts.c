#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: is a pointer
*/

void _puts(char *str)
{
	int a;

	for (a = 0; a >= 0; a++)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
	}
}
