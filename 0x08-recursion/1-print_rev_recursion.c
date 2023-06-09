#include"main.h"
/**
 * _print_rev_recursion - funtion that prints the reverse of a string
 * @s - the string that will be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
