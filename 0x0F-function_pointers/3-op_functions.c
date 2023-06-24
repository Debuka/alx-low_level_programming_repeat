#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Result of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result  of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulus of two a numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
