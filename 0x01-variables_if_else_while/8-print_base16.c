#include <stdio.h>

/**
 * main - printing numbers in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = 48; nums <= 58; nums++)
		putchar(nums);
	for (nums = 'a'; nums <= 'f'; nums++)
		putchar(nums);
	putchar('\n');
	return (0);
}
