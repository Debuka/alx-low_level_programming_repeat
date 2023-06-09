#include"main.h"
/**
 * _strlen_recursion - this funtion returns the lenght of a string
 * @s - the string that its lenght will be determined
 * returns the lenght of the string.
 */
void _strlen_recursion(char *s)
{
	int dlenght = 0;
	if (*s)
	{
		dlenght++;
		dlenght += _strlen_recursion(s + 1);
	}
	return dlenght;

}
