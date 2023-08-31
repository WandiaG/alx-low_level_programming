#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: 1st  number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = x  >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}

