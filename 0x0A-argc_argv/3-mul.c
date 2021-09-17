#include <stdio.h>
#include "main.h"

/**
 * main - To write a program that print out multiplication of two numbers
 * @argc: Parameter for the program count
 * @argv: The parameter for the array
 *
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	int multiply, count;
	
	multiply = 1;
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			multiply *= atoi(argv[count]);
			printf("%d\n", multiply);
		}
	}
	else
		printf("Error\n");
	return (1);
}
