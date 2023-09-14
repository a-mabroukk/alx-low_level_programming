#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*sum_them_all - a function that returns the sum of all its parameters
*@n: number of numbers to be added
*Description: Write a function that returns the sum of all its parameters
*Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
int sum = 0;
unsigned int c;
if (n == 0)
{
return (0);
}
va_start(ptr, n);
for (c = 0; c < n; c++)
{
sum += va_arg(ptr, const unsigned int);
}
va_end(ptr);
return (sum);
}
