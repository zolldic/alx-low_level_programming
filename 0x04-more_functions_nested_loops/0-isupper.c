#include "main.h"

/**
* _isupper -  function that checks for uppercase character
* @c: character 
* Return: always (1) if its uppercase, otherwise (0)
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
