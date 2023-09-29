#include "main.h"

/**
*flip_bits - returns the number of bits you would need to flip to
*get from one number to another
*@n: number of bits to be flipped
*@m: number of bits to be gotten
*Return: value
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c = 0;

while (n != m)
{
c += (n ^ m) & 1;
n >>= 1;
m >>= 1;
}
return (c);
}
