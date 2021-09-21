#include <stdio.h>
#include "main.h"

/**
 * create_array - To creat an array
 * @size: Parameter one
 * @c: Parameter two
 *
 * Return: Null or 0 or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size, sizeof(c));
	if (size == 0)
		return (NULL);
	return (ar);
}
