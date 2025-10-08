#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* rot13 - a function that encodes a string using rot13.
* @str: string to encode
* Return: (str) encoded
*/

char *rot13(char *str)
{
	int x;
	int y;
	
	char alpha[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	};
	  /* 0    1    2    3    4    5    6    7    8    9    10   11   12   +13
	   * 13   14   15   16   17   18   19   20   21   22   23   24   25   -13
	   * */
	/*
	char alpha[13][2] = {{'a', 'n'},
		{'b', 'o'}, {'c', 'p'},
		{'d', 'q'}, {'e', 'r'},
		{'f', 's'}, {'g', 't'},
		{'h', 'u'}, {'i', 'v'},	
		{'j', 'w'}, {'k', 'x'},
		{'l', 'y'}, {'m', 'z'}};*/
	

	for (x = 0; x < 20; x++)
	{
	
		if ((str[x] >= 'a' && str[x] <= 'm') ||
			(str[x] >= 'A' && str[x] <= 'M'))
		{
			str[x] = str[x] + 13;
		}
		else if ((str[x] >= 'n' && str[x] <= 'z') ||
			(str[x] >= 'N' && str[x] <= 'Z'))
		{
			str[x] = str[x] - 13;
		}
	}
	return (str);
}
