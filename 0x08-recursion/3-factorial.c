#include "main.h"

/**
 * factorial - To get the factorial of any number
 * @n: The parameter to check
 *
 * Return: Always 0
 */

int factorial(int n)
{
	int i;
	
	if (n < 0)
		return (-1);
	i = (n * factorial(n - 1));
	return (i);
}
