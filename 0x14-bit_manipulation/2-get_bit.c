#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int bit_val;

	if (index > 63)
	return (-1);
	while (i < index)
	{
	n >>= 1;
	i++;
	}

	bit_val = n & 1;

	return (bit_val);
}
