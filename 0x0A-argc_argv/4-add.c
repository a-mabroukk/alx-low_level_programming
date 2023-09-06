#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the number of arguments passed to the program
 *
 * @argv: a one-dimensional array of strings
 *
 * Description: Write a program that adds positive numbers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, digit, sum;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
