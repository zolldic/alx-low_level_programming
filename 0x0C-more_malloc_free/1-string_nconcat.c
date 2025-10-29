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
	unsigned int x = 0, y = 0;
	char *new;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	total = len1 + n;
	new = (char *)malloc(sizeof(char) * (total + 1));

	if (!new)
		return (NULL);

	for (; x < len1; x++)
		new[x] = s1[x];

	for (; y < (total - len1); y++)
		new[x + y] = s2[y];

	new[x + y] = '\0';

	return (new);
}
