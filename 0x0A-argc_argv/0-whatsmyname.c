#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: the number of arguments passed to the program
 *
 * @arv: a one-dimensional array of stringsa
 *
 * Description: Write a program that prints its name, followed by a new line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
