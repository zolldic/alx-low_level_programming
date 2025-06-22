#include <stdio.h>

/**
* main - list all the natural numbers below 1024 that are multiples of 3 or 5
*  and get the sum of these multiples
* Return: always (0) on success.
*/

int main(void)
{
	int n = 0;
	int sum;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
		n++;
	}

	printf("%d\n", sum);
	return (0);
}
