#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to the program
 *
 * @argv: one-dimensional array of strings
 *
 * Description: Write a program that prints the number of arguments passed into
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
