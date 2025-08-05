#include "main.h"
#include <stdio.h>

/**
* _atoi - a function that convert a string to an integer
* @s: a string
* Return: the (number) in the string, otherwise (0).
*/

int _atoi(char *s)
{
	int i;
	int sign = 0;
	unsigned int total = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign += 1;

		if (s[i] >= '0' && s[i] <= '9')
		{

			total = (total * 10) + (s[i] - '0');

			if (s[i + 1] == ' ')
				break;
		}
	}

	if ((sign  % 2) != 0)
		return (-total);

	return (total);
}
