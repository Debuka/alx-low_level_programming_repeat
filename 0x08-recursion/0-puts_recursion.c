#include"main.h"
/**
 *  _puts_recursion - a funtion that prints a strings
 *  @s - string
 *  returns nothing
 */
void_put_putchar(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
