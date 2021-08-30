#include <stdio.h>

/**
 * main - printing combinations of number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int combs;

	for (combs = 48; combs < 58; combs++)
	{
		putchar(combs);
		if (combs <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
