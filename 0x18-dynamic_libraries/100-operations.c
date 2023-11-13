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
 * mul - multiply numbers
 * @a: first number
 * @b: second number to multiply
 * Return: value
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divided numbers
 * @a: first number
 * @b: secnd number
 * Return: value
 */
int div(int a, int b)
 {
	if (b == 0)
	{
		printf("Error: division by 0\n");
	}
	return (a / b);
 }
 /**
 * mol - divided numbers
 * @a: first number
 * @b: secnd number
 * Return: 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by 0\n");
		return (0);
	}
	return (a % b);
}
