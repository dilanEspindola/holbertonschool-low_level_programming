#include "holberton.h"
#include "_putchar.c"
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

/**
 * main - call the function
 *
 * Return: (0)
*/

int main(void)
{
	print_alphabet();
	return (0);
}
