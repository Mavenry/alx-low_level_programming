#include "main.h"

/**
 * print_binary - prints the binary representation
 * of an unsigned long integer.
 * @num: the unsigned long integer to be printed in binary.
 *
 * Return: no return value.
 */
void print_binary(unsigned long int num)
{
	if (num > 0)
	{
		if (num > 1)
			print_binary(num >> 1);
		_putchar((num & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

