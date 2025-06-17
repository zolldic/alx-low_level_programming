#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always (0) on success
 */

int main(void)
{
	int a = 97;
	int A = 65;

	/* prints lowercase */
	while (a != 123)
	{
		putchar(a);
		a++;
	}

	/* prints uppercase */
	while (A != 91)
	{
		putchar(A);
		A++;
	}

	/* prints the newline */
	putchar(10);

	return (0);
}
