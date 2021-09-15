#include "main"

/**
 * _puts_recursion - To print out string with a newline
 * @s: The parameter to check
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}
	_putchar('\n');
}
