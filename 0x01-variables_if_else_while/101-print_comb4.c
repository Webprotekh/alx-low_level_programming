#include <stdio.h>

/**
 * main - comb 4
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j, k, l;

	while (i <= 999)
	{
		j = (i / 100 + '0');
		k = (i / 10 % 10 + '0');
		l = (i % 10 + '0');

		if ((j < k) && (k < l))
		{
			putchar(j);
			putchar(k);
			putchar(l);

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');
	return (0);
}
