#include "main.h"

/**
 * clear_bit - sets the value of a particular bit to 0
 * @n: pointer to unsigned int to change
 * @index: index of the bit to set to 0
 *
 * Return: 1 when successiful, -1 when fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

