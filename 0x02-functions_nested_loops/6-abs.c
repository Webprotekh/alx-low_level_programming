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
	int x = i;

	if (x < 0)
	{
		x = (-1) * x;
		_putchar(x);
	}
	else
		_putchar(x);
	return (0);
}
