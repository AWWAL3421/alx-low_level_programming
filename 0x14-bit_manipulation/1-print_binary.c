#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x = 63, count = 0;
	unsigned long int current;

	while (x >= 0)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		x--;
	}
	if (!count)
		_putchar('0');
}

