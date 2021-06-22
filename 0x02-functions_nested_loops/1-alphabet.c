#include "holberton.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
*/

void print_alphabet(void)
{
	int lowerCaseLetter = 97;

	while (lowerCaseLetter <= 122)
	{
		_putchar(lowerCaseLetter);
		lowerCaseLetter++;
	}
	_putchar('\n');

}
