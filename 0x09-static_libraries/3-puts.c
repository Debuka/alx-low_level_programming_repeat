#include "main.h"
/**
 * _puts - funtion that prints a string followed by a new line to std output
 * @str: string that will be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
