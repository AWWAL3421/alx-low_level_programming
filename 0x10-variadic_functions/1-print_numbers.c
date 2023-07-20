#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints num, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myvalues;
	unsigned int count;

	va_start(myvalues, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(myvalues, int));

	if (count != n - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(myvalues);
}


