#include "main.h"

/**
 * _isdigit - Functions to check for digit
 * @c: Parameter to checkh
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
