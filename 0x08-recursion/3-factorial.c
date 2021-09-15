#include "main.h"

/**
 * factorial - To get the factorial of any number
 * @n: The parameter to check
 *
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
