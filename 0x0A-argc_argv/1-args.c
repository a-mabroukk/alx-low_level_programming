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

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
