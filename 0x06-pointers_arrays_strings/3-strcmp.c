#include "main.h"
#include <stdio.h>
/**
* _strcmp - a function that compares two strings.
* @s1: the first string
* @s2: the second string
* Return: (0) if s1 equals s2
*	a negative value if s1 is less than s2;
*   a positive value if s1 is greater than s2.
*/


int _strcmp(char *s1, char *s2)
{

	int x, res = 0;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			res = s1[x] - s2[x];
			break;
		}
	}

	return (res);
}
