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

unsigned long _MaxPrime(unsigned long num)
{
	unsigned long CurrMaxPrime = -1;
	unsigned long j = 3;

	if (num % 2 == 0)
	{
		CurrMaxPrime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	for (j = 3; j <= sqrt(num); j += 2)
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
 * Description: prints the largest prime factor of the number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n = 612852475143;

	printf("%lu\n", _MaxPrime(n));
	return (0);
}
