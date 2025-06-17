#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always (0) on success
 */

int main(void)
{
	int zero = 48;
	int a = 97;

	while (zero != 58)
	{
		putchar(zero);
		zero++;
	}

	while (a != 103)
	{
		putchar(a);
		a++;
	}

	putchar(10);
	return (0);
}
