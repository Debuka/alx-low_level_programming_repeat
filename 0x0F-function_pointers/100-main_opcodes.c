#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints.
 * @argc: Number of args.
 * @argv: Array of args.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int bt, q;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (q = 0; q < bt; q++)
	{
		if (q == bt - 1)
		{
			printf("%02hhx\n", ar[q]);
			break;
		}
		printf("%02hhx ", ar[q]);
	}

	return (0);
}
