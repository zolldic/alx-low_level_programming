#include <stdio.h>

/**
* main -  program that prints the first 50 Fibonacci numbers
* Return: Always (0) on success
*/

int main(void)
{
	unsigned long int sum, a = 1, b = 2;
	int x = 3;

	printf("%ld, %ld, ", a, b);

	while (x <= 50)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (x == 50)
			printf("%ld", sum);
		else
			printf("%ld, ", sum);
		x++;
	}

	putchar('\n');
	return (0);
}
