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

	if (x == -1)
		_putchar(x);
	else if (x < 0)
		_putchar(x);
	else if (x == -i)
		_putchar(x);
	return (0);
}
