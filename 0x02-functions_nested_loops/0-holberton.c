#include "holberton.h"

/**
 * main - prints holberton
 *
 * Return: (0)
*/
int main(void)
{
	int name[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i;

	for (i = 0; i < 9; i++)
		_putchar(name[i]);

	_putchar('\n');

	return (0);
}
