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
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
