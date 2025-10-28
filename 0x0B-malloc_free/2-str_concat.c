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
* str_concat - a function that concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: a pointer to a newly allocated space in memory
*	which contain the concatenated string of @s1 and @s2
*	or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int x, y;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *new;

	new = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (!new)
		return (NULL);

	for (x = 0; x < len1; x++)
		new[x] = s1[x];
	for (y = 0; y < len2; y++)
		new[x + y] = s2[y];

	new[len1 + len2] = '\0';
	return (new);
}
