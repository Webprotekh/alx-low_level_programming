#include "main.h"

/**
 * more_numbers - Function name to find more numbers
 * @void: Parameter is void
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
    int ctr, nums;

    for (ctr = 0; ctr <= 10; ctr++)
    {
        for (nums = 0; nums <= 14; nums++)
        {
            if (nums <= 9)putchar(nums + '0');else if (nums > 9){_putchar(nums / 10 + '0');putchar(nums % 10 + '0');}putchar('\n');}putchar('\n');}
