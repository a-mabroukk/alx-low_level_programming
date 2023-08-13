#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	while (num < 10)
	{
		printf("%d \n", num);
		num++;
	}
	return (0);
}
