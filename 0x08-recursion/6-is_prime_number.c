#include"main.h"


//is_prime_number: detects if a number is prime or not.
//@n - number to be checked
//@z - itirator

int is_prime(unsigned int n, unsigned int z)
{
	if(n % z == 0)
	{
		if(n == n)
			return 1;
		else
			return 0;
	}
	return (0 + is_prime(n, z + 1));
}

//is_prime_number: checks if an input number is a prime number.
//@n: input number.
//returns 1 if it's a prime number and 0 if otherwise.

int is_prime_number(int n)
{
	if(n <= 0)
		return 0;
	if(n == 1)
		return 0;
	return (is_prime(n, 2));
}
