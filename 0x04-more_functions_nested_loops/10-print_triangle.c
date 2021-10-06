#include "main.h"

/**
 * print_triangle - Function to print triangle
 * @size: The parameter to check the size
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
    if (size > 0)
    {
        int row, col, i;

        for (i = 0; i < size; i++)
        {
            for (row = size; row > i; row--)
            {
                _putchar(' ');
            }
            for (col = 0; col <= row; col++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
        _putchar('\n');
    }
    else if (size <= 0)
    {
        _putchar('\n');
    }
    return (0);
}
