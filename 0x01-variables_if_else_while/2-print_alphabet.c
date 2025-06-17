#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always (0) on success
 */

int main(void)
{
	int x = 97;

	while (x != 123)
	{
		putchar(x);
		x++;
	}

	putchar(10);

	return (0);
}
