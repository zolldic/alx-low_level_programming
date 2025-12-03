#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(const char *str);

char *revstr(char *s);
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of binary number
* Return: the converted number or 0 on failure
*/

unsigned int binary_to_uint(const char *b)
{
	int idx = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	b = revstr((char *)b);

	for (idx = 0 ; b[idx]; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		sum += (b[idx] - '0') << idx;
	}
	return (sum);
}

/**
* revstr - reverse a string
* @s: string of binary number
* Return: awlays return a string reversed
*/

char *revstr(char *s)
{
	int len, idx = 0;
	char *rev;

	len = _strlen(s) - 1;
	rev = (char *) malloc(sizeof(char) * (len + 1));


	while (len >= 0)
	{
		rev[idx] = s[len];
		len--;
		idx++;
	}

	rev[idx] = '\0';

	return (rev);
}
/**
* _strlen - calculate the length of a string
* @str: string to calculate its length
* Return: length of a string
*/
int _strlen(const char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
		idx++;
	return (idx);
}
