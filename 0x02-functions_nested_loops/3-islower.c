#include "main.h"

/**
 * _islower - Checking for lower case
 *
 * letter - Parameter to check for
 *
 * Return: Always 0
 */

int _islower(int c)
{
	int letter = c;

	if (letter > 'a' && letter <= 'z')
		return (1);
	else if (letter >= 'A' && letter <= 'Z')
		return (0);
	else
		return (0);
}
