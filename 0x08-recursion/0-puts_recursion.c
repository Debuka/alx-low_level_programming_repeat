#include"main.h"
/**
 *  _puts_recursion - a funtion that prints a strings
 *  @s - string
 *  returns nothing
 */
void _puts_recursion(char *s)
{
	if(*s != '0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
