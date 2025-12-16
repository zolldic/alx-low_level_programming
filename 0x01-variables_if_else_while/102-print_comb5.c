#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always (0) on success
 */


int main(void)
{
	int first, second, third, forth;

	first = 0;
	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			third = first;
			while (third < 10)
			{
				forth = second + 1;
				while (forth < 10)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(' ');
					putchar(third + '0');
					putchar(forth + '0');

					if (!(first == 9 &&
						second == 8 &&
						third == 9 &&
						forth == 9))
					{
						putchar(',');
						putchar(' ');
					}
					forth++;
				}
				third++;
			}
			second++;
		}
		first++;
	}

	putchar(10);
	return (0);
}
