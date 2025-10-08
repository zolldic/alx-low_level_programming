#include "main.h"
#include <stdio.h>
/**
* leet - a function that encodes a string into 1337 "Leet"
* @str: the string to encode it
* Return: (str) encoded into leet.
*/

char *leet(char *str)
{
	int x, y;
	int encodes[5][3] = {
		{65, 97, '4'},
		{69, 101, '3'},
		{79, 111, '0'},
		{84, 116, '7'},
		{76, 108, '1'}
	};

	for (x = 0; x < 5; x++)
		for (y = 0; str[y] != '\0'; y++)
			if (
				str[y] == encodes[x][0] ||
				str[y] == encodes[x][1]
			)
				str[y] = encodes[x][2];

	return (str);
}
