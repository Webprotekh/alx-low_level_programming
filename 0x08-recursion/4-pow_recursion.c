#include "main.h"

/**
 * _pow_recursion - To find the power of an integer
 * @x: The parameter base
 * @y: The parameter index
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
