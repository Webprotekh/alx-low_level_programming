#include "main.h"

/**
 * print_square - Function to print a square
 * @size: The parameter to checkh
 *
 * Return: Nothing to be returned
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = o; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
