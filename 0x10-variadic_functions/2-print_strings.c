#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: To be printed between strings.
 * @n: Strings passed to the function.
 * @...: A variable number of strings that will be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list inp;
	char *str;
	unsigned int ijay;

	va_start(inp, n);

	for (ijay = 0; ijay < n; ijay++)
	{
		str = va_arg(inp, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ijay != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(inp);
}
