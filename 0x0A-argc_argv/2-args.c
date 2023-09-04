#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: the number of arguments passed to the program
 *
 * @argv: a one-dimensional array of strings
 *
 * Description: Write a program that prints all arguments it receives
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
