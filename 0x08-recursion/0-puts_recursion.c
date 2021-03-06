#include "main.h"

/**
 * _puts_recursion - To print out string with a newline
 * @s: The parameter to check
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
