#include "unistd.h"

/**
* main - Entry point
*
* Return: always 1.
*/

int main(void)
{
	char message[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	write(1, message, sizeof(message));
	return (1);
}
