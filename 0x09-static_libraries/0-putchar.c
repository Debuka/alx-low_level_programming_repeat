#include <unistd.h>


/**
 * _putchar - funtion that writes the character c to stdout
 * @c:character
 * Return: 1 (successful)
 * return -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
