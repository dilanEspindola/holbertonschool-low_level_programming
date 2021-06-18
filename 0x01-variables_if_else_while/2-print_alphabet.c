#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - the alphabet
 *
 * Return: (0)
*/
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
