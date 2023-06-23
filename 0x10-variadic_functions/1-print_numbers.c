#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to print
 * @n: Integers passed to the function.
 * @...: A variable number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list di;
	unsigned int ijay;

	va_start(di, n);

	for (ijay = 0; ijay < n; ijay++)
	{
		printf("%d", va_arg(di, int));

		if (ijay != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(di);
}
