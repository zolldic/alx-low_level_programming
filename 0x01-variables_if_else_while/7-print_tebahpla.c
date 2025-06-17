#include <stdio.h>

/**
* main - program that prints the lowercase alphabet in reverse
*
* Return: Always (0) on success.
*/

int main(void)
{
	int z = 122;

	while (z != 96)
	{
		putchar(z);
		z--;
	}
	putchar(10);

	return (0);
}

