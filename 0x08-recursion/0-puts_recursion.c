#include"main.h"

void_put_putchar(char *s)
{
	if(*s =! '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
