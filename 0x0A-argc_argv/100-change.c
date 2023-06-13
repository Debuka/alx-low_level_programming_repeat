#include<stdlib.h>
#include<stdio.h>
#include"main.h"

/**
 * main - fuyntion that will print the count
 * @argc: counts arguements
 * @argv:the array of arguements passed
 *
 * Return: 0 on sucess, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, j, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc  > 1)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	change = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; i++)
	{
		while (i >= coins[j])
		{
			change++;
			i -= coins[j];
		}
	}
	printf("%d\n", change);
	return (0);
}
