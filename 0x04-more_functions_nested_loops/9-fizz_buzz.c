#include <stdio.h>

/**
* main - program that prints the numbers from 1 to 100
*  But for multiples of three print Fizz instead of the number
*  and for the multiples of five print Buzz.
*  For numbers which are multiples of both three and five print FizzBuzz.
*
* Return: Always (0).
*/

int main(void)
{
	int x = 1;


	while (x <= 100)
	{
		if ((x % 5) == 0 && (x % 3) == 0)
			printf("FizzBuzz");
		else if ((x % 5) == 0)
			printf("Buzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else
			printf("%d", x);
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
