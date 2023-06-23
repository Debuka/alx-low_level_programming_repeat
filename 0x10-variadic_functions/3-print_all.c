#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @q: List of types of arguments that passed to the function.
 */
void print_all(const char * const q, ...)
{
	int k = 0;
	char *stgs, *sep = "";

	va_list list;

	va_start(list, q);

	if (q)
	{
		while (q[k])
		{
			switch (q[k])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					stgs = va_arg(list, char *);
					if (!stgs)
						stgs = "(nil)";
					printf("%s%s", sep, stgs);
					break;
				default:
					k++;
					continue;
			}
			sep = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(list);
}
