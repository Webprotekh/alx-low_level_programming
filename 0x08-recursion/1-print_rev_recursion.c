#include "main.h"

/**
 * _print_rev_recursion - A function to print the reverse of a string
 * @s: The parameter to check
 *
 * Return: The reverse string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
