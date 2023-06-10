#include<stdio.h>
#include"main.h"

/**
 * main - funtion that prints arguements name
 * @argc: counts arguements
 * @argv: array of arguements
 * Return: 0 alway on success
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
