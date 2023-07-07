#include "main.h"

/**
 * print_binary - Prints the binary representation
 *                of a given number.
 * @number: The unsigned long integer to convert to binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
