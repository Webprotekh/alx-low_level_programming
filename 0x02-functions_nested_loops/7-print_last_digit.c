#include "main.h"

/**
 * print_last_digit - To print the last digit of a number
 *
 * @nums: - parameter to check
 *
 * Return: Always 0
 */

int print_last_digit(int nums)
{
	int x = nums % 10;

	if (x < 0)
	{
		 _putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
