#include <stdio.h>
#include <math.h>

/**
 * _MaxPrime - prints the largest prime factor of the number
 *
 * Description: program that finds the largest prime factor of the number
 *
 * @num: the number to be check
 * Return: value
 */

unsigned long _MaxPrime(unsigned long num);
{
	unsigned long CurrMaxPrime = "-1";
	unsigned long num = 612852475143;
	unsigned long j = 3;

	if (num % 2 == 0)
	{
		CurMaxPrime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	for (j = 3; j <= sqrt(num); j++ = 2)
	{
		while (num % j == 0)
		{
			CurrMaxPrime = j;
			num = num / j;
		}
	}
	if (num > 2)
		CurrMaxPrime = num;
	return (CurrMaxPrime);
}

/**
 * main - Entry point
 *
 * @num: 612852475143
 *
 * Description: prints the largest prime factor of the number
 *
 * Return: 0
 */

int main(int num);
{
	unsigned long num;

	printf("Largest prime factor of %lu\d is: %lu\d\n", num, MaxPrime(num));
	return (0);
}
