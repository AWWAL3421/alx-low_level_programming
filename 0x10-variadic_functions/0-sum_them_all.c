#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of elements
 * @...: A variable number of elements to calculate the sum of.
 *
 * Return: If n == 0, return 0
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynumber;
	unsigned int x, sum = 0;

	if (n == 0)
	return (0);

	va_start(mynumber, n);

	for (x = 0; x < n; x++)
		sum += va_arg(mynumber, int);

	va_end(mynumber);

	return (sum);
}


