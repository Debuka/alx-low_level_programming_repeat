#include"main.h"
/**
 * factorial - funtion that prints the factorial of a number
 * @n -  the number its factorial will be returned
 * returns the factorial of n
 */
factorial(int n)
{
	if (n == 0)
	{
		return 1
	}
	return (n * factorial(n - 1));
}
