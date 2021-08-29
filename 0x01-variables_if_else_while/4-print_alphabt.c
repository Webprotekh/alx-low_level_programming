#include <stdio.h>

/**
 * main - printing out all alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char missalpha;

	for (missalpha = 'a'; missalpha <= 'z'; missalpha++)
	{
		if (missalpha == 'e' || missalpha == 'q')
			continue;
		putchar(missalpha);
	}
	putchar('\n');
	return (0);
}
