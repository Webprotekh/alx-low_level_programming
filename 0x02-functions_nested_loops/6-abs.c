#include "main.h"

/**
 * _abs - printing the absolute numbers of an integer
 *
 * @i: - parameter
 *
 * Return: Always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		_putchar(i);
	}
	else
		_putchar(i);
	return (0);
}
