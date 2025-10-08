#include "main.h"
#include <stdio.h>

/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: array of integer which its content should be reversed
* @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int tmp, x;

	for (x = 0; x < (n / 2); x++)
	{
		tmp = a[x];
		a[x] = a[(n - 1) - x];
		a[(n - 1) - x] = tmp;
	}
}
