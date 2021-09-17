#include <main.h>
#include "main.h"

/**
 * main - To write a program that print out addition of numbers
 * @argc: Parameter for the program count
 * @argv[]: The parameter for the array
 *
 * Return: Always 0 or 1
 */

int main(int argc, char *argv[])
{
        int sum, count;

        sum = 0;
        if (argc > 1)
        {
                for (count = 1; count < argc; count++)
                {
                        printf("%s\n", argv[count]);
                        sum += argv[count];
                }
        }
        else if (argc < 1)
                printf("%d\n", 0);
	else if (argc >= 'a')
		printf("Error\n");
        return (1);
}
