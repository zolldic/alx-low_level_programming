#include <stdio.h>

/**
* main -  program that prints the first 98  Fibonacci numbers
* Return: Always (0) on success
*/
int main(void)
{
	long double sum, a = 1, b = 2;
	int x = 3;

	printf("%.LF, %.LF, ", a, b);

	while (x <= 98)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (x == 98)
			printf("%.LF", sum);
		else
			printf("%.LF, ", sum);
		x++;
	}

	putchar('\n');
	return (0);
}
