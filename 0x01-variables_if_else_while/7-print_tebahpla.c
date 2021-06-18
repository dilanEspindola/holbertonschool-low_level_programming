#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - lowercase alphabet in reverse
 *
 * Return: (0)
 */
int main(void)
{
	int lowerCaseLetter = 122;

	while (lowerCaseLetter >= 97)
	{
		putchar(lowerCaseLetter);
		lowerCaseLetter--;
	}
	putchar('\n');
	return (0);
}
