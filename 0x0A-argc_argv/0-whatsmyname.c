#include <stdio.h>
#include "main.h"

/**
 * main - To write a program that print out its name
 * @argc: Parameter for the program count
 * @argv: The parameter for the array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
	{
		for (count = 0; count < argc; count++)
			printf("./%s\n", argv[count]);
	}
	return (0);
}
