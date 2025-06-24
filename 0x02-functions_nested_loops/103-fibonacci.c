#include <stdio.h>

/**
* main -  program that finds and prints the sum of the even-valued terms
* Return: Always (0) on success
*/

int main(void)
{
	unsigned long int next, sum = 0, a = 0, b = 1;

	while (1)
	{
		next = a + b;
		a = b;
		b = next;

		if ((next %  2) == 0)
			sum += next;

		if (next >= 4000000)
			break;
	}
	printf("%ld\n", sum);
	return (0);
}
