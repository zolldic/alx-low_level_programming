#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the
 *  sum of the two diagonals of a square matrix of integers.
 * @a: the 2D array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int x, y;
  int sum1 = 0;
  int sum2 = 0;
  int count = size - 1;


	for (x = 0; x < size; x++)
		for (y = 0; y < size; y++)
    {
      if (x == y)
        sum1 += a[x * size + y];
      if (y == count)
      {
        sum2 += a[x * size + y];
        count--;
      }
    }
  printf("%d, %d\n", sum1, sum2);
}
