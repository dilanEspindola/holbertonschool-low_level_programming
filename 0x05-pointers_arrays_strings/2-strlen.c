#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: is a pointer
 * Return: length of a string
*/

int _strlen(char *s)
{
	int lengthString = 0;

	while (*(s + lengthString) != '\0')
		lengthString++;

	return (lengthString);
}
