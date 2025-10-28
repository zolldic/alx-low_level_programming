#include <stdlib.h>

/**
* _strdup - function that returns a pointer to
*	a newly allocated space in memory
* @str: a string to be copied to the newly allocated memory
* Return: a pointer to the duplicated string or NULL on failure
*/

char *_strdup(char *str)
{
	int x, len = 0;
	char *duplicate;

	if (!str)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		len++;

	duplicate = (char *) malloc(sizeof(char) * (len + 1));

	if (!duplicate)
		return (NULL);

	for (x = 0; x < len; x++)
		duplicate[x] = str[x];

	duplicate[x] = '\0';

	return (duplicate);
}
