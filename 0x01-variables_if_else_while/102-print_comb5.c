#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always (0) on success
 */


int main(void)
{
	int first;
	int second;
	int third;
	int forth;
	int loop;

	loop = 0;

	while (loop < 999)
	{
		first = 48;
		while (first < 53)
		{
			second = 48;
			while (second < 58)
			{
				third = first;
				while (third < 58)
				{
					forth = second;
					while (forth < 58)
					{
						putchar(first);
						putchar(second);
						putchar(' ');
						putchar(third);
						putchar(forth);
						if ((first != 57) || (second != 56))
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
		loop++;
	}

	putchar(10);
	return (0);
}
