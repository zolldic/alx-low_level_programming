#include "main.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an array of integers
* @a: an array of element
* @n: number of element to print
*/


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}

}
