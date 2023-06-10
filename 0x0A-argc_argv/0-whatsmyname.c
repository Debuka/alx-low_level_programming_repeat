#include<stdio.h>
#include"main.h"

/**
 * main - prints the name of the program to be executed
 * @argc: counts the number or arguements passed
 * @argv: array of the arguements passed
 * Return: 0 when succesful
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
