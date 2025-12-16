#include <stdio.h>

/**
* main -  program that prints the first 98  Fibonacci numbers
* Return: Always (0) on success
*/
int main(void)
{
	long double sum, a = 1, b = 2;
	int x = 3;

	printf("%.Lf, %.Lf, ", a, b);

	while (x <= 98)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (x == 98)
			printf("%.Lf", sum);
		else
			printf("%.Lf, ", sum);
		x++;
	}

	putchar('\n');
	return (0);
}
