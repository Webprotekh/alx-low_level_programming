#include <stdio.h>
#include <stdlib.h>
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
	int multiply, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc == 3)
	{
		multiply = num1 * num2;
		printf("%d\n", multiply);
		return (0);
	}
	printf("Error\n");
	return (1);
}
