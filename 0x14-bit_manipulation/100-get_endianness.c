#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if the system is big endian, 1 if it's little endian
 */
int get_endianness(void)
{
    unsigned int y;
    char *t;

    y = 1;
    t = (char *) &y;

    return ((int)*t);
}

