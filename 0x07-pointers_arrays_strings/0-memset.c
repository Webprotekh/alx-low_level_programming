#include "main.h"
#include <string.h>

/**
 * _memset - filling memory with constant bytes
 * @s: parameter to print
 * @b: parameter for the constant
 * @n: parameter bytes for the memset
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		if (j % 10)
		{
			_putchar(" ");
		}
		if (!(j % 10) && j)
		{
			_putchar('\n');
		}
		_putchar('0x%01x', buffer[j]);
		j++;
	}
	_putchar('\n');

	return 0;
}
