#include "main.h"
#include <stdio.h>

/**
* print_to_98 - function that prints
*  all natural numbers from n to 98
* @n: start number
*/

void print_to_98(int n)
{
	while (1)
	{
		if (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
				printf("%d, ", n);
			n--;
		}
		else
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
				printf("%d, ", n);
			n++;
		}

	}
	printf("\n");
}
