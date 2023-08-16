#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Despription: function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour = 00, min;

	for (hour = 00; hour <= 23; hour++)
	{
		for (min = 00; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
