#include <stdio.h>

/**
* main - a program that prints all
* possible different combinations of three digits.
*
* Return: always (0) on success
*/

int main(void)
{
	int first = 48;
	int second;
	int third;

	while (first != 56) /* loop until 7 */
	{
		second = first + 1;
		while (second < 57) /* loop until 8 */
		{
			third = second + 1;
			while (third < 58) /* loop until 9 */
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first < 55)
				{
					putchar(',');
					putchar(' ');
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
