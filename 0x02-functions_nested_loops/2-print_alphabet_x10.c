#include "main.h"
/**
 * main - Entry point
 * Description: 'print alphabet ten times'
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
