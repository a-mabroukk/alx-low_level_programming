#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print quote with write function
 * write(int fd, const void *buffer,size_t)
 *
 * Return: 1 (not success)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(1, quo, 59);
	return (1);
}
