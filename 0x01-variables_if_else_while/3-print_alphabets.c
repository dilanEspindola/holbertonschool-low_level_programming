#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - alphabet in lowercase and in uppercase
 *
 * Return: (0)
 */
int main(void)
{
	int lowerCaseLetter = 97;
	int upperCaseLetter = 65;

	while (lowerCaseLetter <= 122)
	{
		putchar(lowerCaseLetter);
		lowerCaseLetter++;
	}

	while (upperCaseLetter <= 90)
	{
		putchar(upperCaseLetter);
		upperCaseLetter++;
	}

	putchar('\n');

	return (0);
}
