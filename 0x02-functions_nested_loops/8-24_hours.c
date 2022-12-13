#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{

	int term, longterm;

	for (term = 0; term <= 23; term++)
	{
		for (longterm = 0; longterm <= 59; longterm++)
		{
			_putchar((term / 10) + '0');
			_putchar((term % 10) + '0');
			_putchar(':');
			_putchar((longterm / 10) + '0');
			_putchar((longterm % 10) + '0');
			_putchar('\n');
		}
	}
}


