#include <stdlib.h>

/**
* _strlen - calculate string length
* @str: string to calculate its length
* Return: Always return the string length
*/
int _strlen(char *str)
{
	int x = 0;

	if (!str)
		return (0);

	while (str[x] != '\0')
		x++;

	return (x);
}

/**
* string_nconcat - a function that concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: the first bytes of s2
* Return: a pointer to the newly concatenated string
*	or NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total;
	unsigned int x, y;
	char *new;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		total = len1 + len2 + 1;
	else
		total = len1 + n + 1;

	new = (char *) malloc(sizeof(char *) * total);
	if (!new)
		return (NULL);

	for (x = 0; x < len1; x++)
		new[x] = s1[x];
	for (y = 0; y < n; y++)
		new[x + y] = s2[y];

	new[x + y] = '\0';

	return (new);
}
