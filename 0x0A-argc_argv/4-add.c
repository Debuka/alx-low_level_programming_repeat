#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * check_num - function that can numbers in a string
 * @str: an array of strings to be checked
 * Return: 0 on success.
 */
int check_num(char *str)
{
	unsigned int j = 0;

	while (j < strlen(str))

	{
		if (!isdigit(str[j]))
		{
			return (0);
		}
		j++
	}
	return (1);
}
/**
 * main - prints the program's name
 * @argc: counts the numbers of arguements passed
 * @argv: array of arguements passed
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int j = 1;
	int st;


	while (j < argc)
	{
		if (check_num(argv[j]))
		{
			st = atoi(argv[j]);/**atoi: converts strings to int*/
			sum += st;
		}
		else
		{
			printf("error\n");
			return (1);
		}
		j++
	}
	printf("%d\n", sum);
	return (0);
}