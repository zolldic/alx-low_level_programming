#include <stdio.h>


/**
* main - a program that finds and prints
*	the largest prime factor of the number 612852475143
* Return: Always (0) on success
*/


int main(void)
{

	long int prime = 2;
	long int num = 612852475143;
	long int res;

	while (1)
	{
		if ((num % prime) == 0)
		{
			res = num / prime;
			num = res;
			if (num == 1)
				break;
		}
		else
			prime++;

	}

	printf("%ld\n", prime);
	return (0);
}
