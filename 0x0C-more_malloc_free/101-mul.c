#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to be evaluated
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
	int q = 0;

	while (s[q])
	{
		if (s[q] < '0' || s[q] > '9')
			return 0;
		q++;
	}
	return 1;
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int q = 0;

	while (s[q] != '\0')
		q++;
	return q;
}

/**
 * errors - Handles errors for main function
 */
void errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *st1, *st2;
	int ln1, ln2, ln, q, tk, nm1, nm2, *result, z = 0;

	st1 = argv[1], st2 = argv[2];
	if (argc != 3 || !is_digit(st1) || !is_digit(st2))
		errors();
	ln1 = _strlen(st1);
	ln2 = _strlen(st2);
	ln = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * ln);
	if (!result)
		return 1;
	for (q = 0; q <= ln1 + ln2; q++)
		result[q] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		nm1 = st1[ln1] - '0';
		tk = 0;
		for (ln2 = _strlen(st2) - 1; ln2 >= 0; ln2--)
		{
			nm2 = st2[ln2] - '0';
			tk += result[ln1 + ln2 + 1] + (nm1 * nm2);
			result[ln1 + ln2 + 1] = tk % 10;
			tk /= 10;
		}
		if (tk > 0)
			result[ln1 + ln2 + 1] += tk;
	}
	for (q = 0; q < ln - 1; q++)
	{
		if (result[q])
			z = 1;
		if (z)
			putchar(result[q] + '0');
	}
	if (!z)
		putchar('0');
	putchar('\n');
	free(result);
	return 0;
}
