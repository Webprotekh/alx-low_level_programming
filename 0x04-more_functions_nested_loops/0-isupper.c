#include "main.h"

/**
 * _isupper - Function to ceck for upper
 * @c: Parameter to check
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
