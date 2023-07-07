#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific index.
 *
 * @n: The unsigned long integer input.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value (0 or 1) of the bit at the given index.
 *         If the index is out of range (greater than 63),
 *         it returns -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}

	return (-1);
}

