#include <stdio.h>

/**
 * main - program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: always (0) on success
 */

int main(void)
{
	int zero = 48;

	while (zero != 58)
	{
		putchar(zero);
		if (zero != 57)
		{
			putchar(',');
			putchar(' ');
		}
		zero++;

	}
	putchar(10);
	return (0);
}
