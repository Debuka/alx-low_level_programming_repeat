#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints.
 * @argc: The input arguements.
 * @argv: An array of pointers.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int nm1, nm2;
	char *opx;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nm1 = atoi(argv[1]);
	opx = argv[2];
	nm2 = atoi(argv[3]);

	if (get_op_func(opx) == NULL || opx[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opx == '/' && nm2 == 0) || (*opx == '%' && nm2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opx)(nm1, nm2));

	return (0);
}
