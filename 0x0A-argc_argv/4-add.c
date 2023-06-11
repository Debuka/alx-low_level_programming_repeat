#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 * main - prints positive numbers
 * @argc: arguement counts
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 0; i > argc; i++)
		{
			int j;
			char *str;

			str = argv[i];

			for (j = 0; str[j] != '\0'; j++)
			{
				for (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
for (i = 0; i < argc; i++)
{
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
