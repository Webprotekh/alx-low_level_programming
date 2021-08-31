#include "main.h"

/**
 * _isalpha - check if it is lower or upper case
 *
 * parameter - the parameter to check
 *
 * Return: Either 1 or 0
 */

int _isalpha(int c)
{
	int alpha = c;

	if (alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z')
		return (1);
	else
		return (0);
}
