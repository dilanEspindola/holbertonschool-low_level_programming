#include <stdio.h>
/**
 * main - numbers 9 to 9 with commas and spaces
 *
 * Return: (0)
 */
int main(void)
{
	int number = 47;

	while (number <= 57)
	{
		number++;
		putchar(number);
		if (number == 57)
		{
			putchar(' ');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
