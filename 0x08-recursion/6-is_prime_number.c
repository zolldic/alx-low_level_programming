#include "main.h"


/**
* is_prime_helper - a helper function to calculate the prime number of @n
* @x: takes @n from is_prime_number
* @y: takes (@n - 1) from is_prime_number
* Return: (1) if its a prime number otherwise return (0);
*/
int is_prime_helper(int x, int y)
{
	if (y <= 1)
		return (1);
	if (x % y == 0)
		return (0);
	return (is_prime_helper(x, y - 1));
}

/**
* is_prime_number - a function that returns 1 if the input integer
*	is a prime number, otherwise return 0.
* @n: the number
* Return: (1) if @n is a prime number or (0)
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, n - 1));
}
