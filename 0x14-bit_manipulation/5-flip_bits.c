#include "main.h"

/**
 * flip_bits - calculates the number of bits that need to be flipped
 * to transform one number into another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}

