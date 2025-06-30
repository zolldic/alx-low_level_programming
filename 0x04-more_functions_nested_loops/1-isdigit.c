#include "main.h"

/**
* _isdigit - function that checks for a digit
* @c: parameter to check if its a digit
* Return: always (1) if its a digit, otherwise (0)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '1')
		return (1);
	return (0);
}
