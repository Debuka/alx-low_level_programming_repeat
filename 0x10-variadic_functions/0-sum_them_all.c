#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of the  parameters.
 * @n: parameters passed to the function.
 * @...: parameters to calculate the sum of
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i, result = 0;

	va_start(k, n);

	for (i = 0; i < n; i++)
		result += va_arg(k, int);

	va_end(k);

	return result;
}
