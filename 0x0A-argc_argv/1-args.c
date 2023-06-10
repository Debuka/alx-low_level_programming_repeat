#include<stdio.h>
#include"main.h"

/**
 * main - prints the number of the arguements passed
 * @argc: counts the number of arguements
 * @argv: the array of arguements passed to the prog.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;/*argv wiil not used*/
	printf("%d\n", argc - 1);
	return (0);
}
