#include "main.h"

/**
 * print _last_digit - prints thwe last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar (last + '0');

	return (last);
}
