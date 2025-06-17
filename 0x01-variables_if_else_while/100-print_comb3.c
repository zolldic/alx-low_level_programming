#include <stdio.h>

/**
 * main - program that prints
 * all possible different combinations of two digits.
 *
 * Return: always (0) on success.
 */

int main(void)
{
	int first = 48;
	int second;

	while (first != 57)
	{
		second  = first + 1;
		while (second < 58)
		{

			putchar(first);
			putchar(second);
			if (first < 56)
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
	}

	putchar(10);

	return (0);
}
