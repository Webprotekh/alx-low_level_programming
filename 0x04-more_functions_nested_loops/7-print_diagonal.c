#include "main.h"

/**
 * print_diagonal - Function to print a diagonal
 * @n: The parameter to checkh
 *
 * Return: Nothing to be returned
 */

void print_diagonal(int n)
{
	int row, col;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			_putchar(' ');
			for (col = 1; col < row; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
