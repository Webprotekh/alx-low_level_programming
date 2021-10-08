#include "main.h"

/**
 * print_most_numbers - Function name to use
 * @void: Parameter to use
 *
 * Return: Return no value
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = 48; nums < 58; nums++)
	{
		if ((nums == 50) || (nums == 52))
			continue;
		_putchar(nums);
	}
	_putchar('\n');
}
