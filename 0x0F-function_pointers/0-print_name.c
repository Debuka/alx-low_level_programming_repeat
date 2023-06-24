#include "function_pointers.h"

/**
 * print_name - Prints a name through  pointer to function
 * @name: The string
 * @f: Pointer to function
 *
 * Description: This function takes a string and a pointer to a function
 *              as parameters and prints it's name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
