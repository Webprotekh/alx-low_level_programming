#include <stdio.h>
#include "main.h"

/**
 * main - To write a program that print out number of arguments passed to it
 * @argc: Parameter for the program count
 * @argv: The parameter for the array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", (argc - 1));
	return (0);
}
