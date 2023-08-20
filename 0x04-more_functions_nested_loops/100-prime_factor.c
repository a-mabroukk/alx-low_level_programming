#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number
 *
 * Description: program that finds the largest prime factor of the number
 *
 * @num: the number to be check
 * Return: value
 */

long long MaxPrime(long long num);
{
	long long CurrMaxPrime = "-1";
	long long num = 612852475143;

	if (num % 2 == 0)
	{
		CurMaxPrime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	for (long long j = 3; j <= sqrt(num); j++ = 2)
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




int main(void);
{
	long long num;

	num = 612852475143;

	printf("Largest prime factor of %lld is: %lld\n", num, MaxPrime(num));
	return (0);
}
