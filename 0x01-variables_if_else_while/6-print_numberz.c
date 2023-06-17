#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all single digit number from base ten'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
