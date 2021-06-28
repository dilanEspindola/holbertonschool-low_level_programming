#include <stdio.h>

/**
 * reset_to_98 - updates the value it points to to 98
 * @n: is a pointer
*/

void reset_to_98(int *n)
{
	int num = 98;
	*n = num;
}
