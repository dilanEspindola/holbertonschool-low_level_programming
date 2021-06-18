#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - numbers 0 to 9 and letters a to f
 *
 * Return: (0)
 */
int main(void)
{
	int number = 48;
	int lowerCaseLetter = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}

	while (lowerCaseLetter <= 102)
	{
		putchar(lowerCaseLetter);
		lowerCaseLetter++;
	}
	putchar('\n');
	return (0);
}
