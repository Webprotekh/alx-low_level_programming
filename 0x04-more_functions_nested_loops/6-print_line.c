#include "main.h"

/**
 * print_line - The function to print a line
 * @n: The parameter to use
 *
 * Return: Returns nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		int ctr;

		ctr = n;
		for (n = 1; n <= ctr; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
