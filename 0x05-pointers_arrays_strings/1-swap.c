#include "main.h"

/**
 * swap_int - To swap the value of two integers
 * @a: parameter to swap
 * @b: Second parameter to swap
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	_putchar("%d, %d", *a, *b);
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	_putchar("%d, %d", *a, *b);
}
