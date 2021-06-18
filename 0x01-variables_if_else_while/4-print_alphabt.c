#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - alphabet in lowercase except q and e
 *
 * Return: (0)
 */
int main(void)
{
	int lowerCaseLetter = 97;

	while (lowerCaseLetter <= 122)
	{
		if (lowerCaseLetter != 101 && lowerCaseLetter != 113)
		{
			putchar(lowerCaseLetter);
		}
		lowerCaseLetter++;
	}
	putchar('\n');
	return (0);
}
