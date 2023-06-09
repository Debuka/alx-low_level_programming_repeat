#include "main.h"

/**
 * _isalpha - funtion that checks alphabets
 * @c:what will be checked to determine if alphabet
 * Return: 1 if c is an alphabet or 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
