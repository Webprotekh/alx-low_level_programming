#include <stdio.h>

/**
 * main - to print numberz using putchar
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 18; n < 28; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
