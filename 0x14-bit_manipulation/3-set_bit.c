#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer to unsigned int  to change
 * @index: index of the bit to initialise to  1
 *
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

