#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int p;

	if (index > 63)
		return (-1);

	x = 1UL << index;

	for (p = 0; p < 64; p++)
	{
	if (p == index)
	*n &= ~x;
	}

	return (1);
}

