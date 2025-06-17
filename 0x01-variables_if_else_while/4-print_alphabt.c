#include <stdio.h>


/**
 * main - program that prints the alphabet except q and e in lowercase
 *
 * Return: Always (0) on success
 */

int main(void)
{
	int a = 97;

	while (a != 123)
	{
		if ((a != 101) && (a != 113))
			putchar(a);
		a++;
	}


	putchar(10);
	return (0);
}
