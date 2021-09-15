#include "main.h"

/**
 * _sqrt_recursion - Finding the square root of an integer
 * @n: Parameter to check
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || n == 0)
		return (-1);
	return (n ** (1/2) * _sqrt_recursion(n);
}
