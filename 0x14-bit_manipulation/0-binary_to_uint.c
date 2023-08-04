#include "main.h"

/**
 * binary_to_uint - converts a binary value to unsigned int
 * @b: string containing the binary value
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[x] - '0');
		x++;
	}

	return (dec_val);
}

