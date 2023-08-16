#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Despription: function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int min;

	for (min = 0; min <= 60; min++)
	{
		while (min >= 0 && min <= 60)
		{
			_putchar(min);
		}
	}
}
