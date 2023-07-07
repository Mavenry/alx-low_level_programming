#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int number)
{
	unsigned long int n = number;
	unsigned int binary[64];
	unsigned int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		_putchar(binary[j] + '0');
}

