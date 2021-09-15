#include "main.h"

/**
 * _strlen_recursion - To print the length of a string
 * @*s: The parameter to check
 *
 * Return: The length of the string should be returned
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_strlen_recursion(s + 1);
}
