#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit to be set.
 *
 * Return: 1 if the bit was successfully set, -1 if it failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}

