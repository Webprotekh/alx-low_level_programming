#include "main.h"

/**
 * main - Prints out alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
