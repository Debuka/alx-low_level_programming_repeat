#include"main.h"
/**
 *  _isupper - determines uppercase letters.
 *  @c: character to be evaluated.
 *  Return: 1 success or 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
