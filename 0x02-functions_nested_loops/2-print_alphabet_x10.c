#include <stdio.h>
#include "holberton.h"
#include "_putchar.c"
/**
 * print_alphabet_x10 - prtins ten times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
	int i = 1;
	char letter;

	while (i < 11)
	{
		letter = 97;
		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}

/**
 * main - call the function
 *
 * Return: (0)
*/

int main(void)
{
	print_alphabet_x10();

	return (0);
}
