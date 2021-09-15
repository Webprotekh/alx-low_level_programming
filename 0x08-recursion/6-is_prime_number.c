#include "main.h"

/**
 * is_prime_number - To find prime number
 * @n: Parameter to check
 *
 * Return: Either 1 or 0
 */

int is_prime_number(int n)
{
	if ((n/n == 1) && (n/1 == n))
		return (1);
	return (is_prime_number(n));
}
