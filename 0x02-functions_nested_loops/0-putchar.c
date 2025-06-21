#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: always (0) on success
 */

int main(void)
{
	char string[8] = "_putchar";
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
