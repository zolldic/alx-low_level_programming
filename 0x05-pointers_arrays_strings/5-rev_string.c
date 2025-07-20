#include "main.h"
#include <stdio.h>

/**
* rev_string - a function that reverses a string
* @s: the string to reverse
*/

void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	len = len - 1;

	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
