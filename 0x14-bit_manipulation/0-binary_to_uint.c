#include "main.h"

/**
*binary_to_uint -  converts a binary number to an unsigned int
*
*@b: is pointing to a string of 0 and 1 chars
*
*Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int d_num = 0;
unsigned int pow = 0;
int c;
int len;

if (b == NULL)
{
return (0);
}
for (len = 0; b[len] != '\0'; len++)
{
;
}
for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
{
return (0);
}
if (b[c] == '1')
{
d_num += 1 << pow;
}
pow++;
}
return (d_num);
}
