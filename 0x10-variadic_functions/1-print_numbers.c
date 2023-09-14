#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers -  a function that prints numbers
*@separator: is the string to be printed between numbers
*@n: is the number of integers passed to the function
*Description: Write a function that prints numbers, followed by a new line
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int c;
if (separator == NULL)
{
separator = "";
}
va_start(ptr, n);
for (c = 0; c < n; c++)
{
printf("%d", va_arg(ptr, unsigned int));
if (c < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}
