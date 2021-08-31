#include "main.h"

/**
 * print_sign - Printing signs for letters
 *
 * @n: parameters to check
 *
 * Return: Either 1 or 0 or -1
 */

int print_sign(int n)
{
	int sign = n;

	if (sign > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (sign == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (sign < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
