#include <stdio.h>

/**
 * add - add numbers
 * @a: first number
 * @b: second number
 * Return: value
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub numbers
 * @a: first number
 * @b: second number
 * Return: value
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply numbers
 * @a: first number
 * @b: second number
 * Return: value
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divide numbers
 * @a: first number
 * @b: second number
 * Return: value
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - modi numbers
 * @a: first number
 * @b: second number
 * Return: value
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a % b);
}
