#include<unistd.h>

/**
 * _putchar - a function that will write character c to the stdout
 * @c: character to printed
 * Return: i if successful
 * -1 if not, errono is set appriopriately
 */

int _putchar(char s)
{
	return (write(1, &c, 1));
}
