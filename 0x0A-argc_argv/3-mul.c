#include<stdio.h>
#include"main.h"
/**
 *_atoi -  converts string to integer
 *@s: string that will be converted to integer
 *Return: the result of the coversion
 */
int _atoi(char *s)
{
	int i, j, k, l, m, n;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	n = 0;

	while (s[k] != '\0')
		k++;

	while (i < k && l == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			m = s[i] - '0';
			if (j % 2)
				m = -m;
			n = n * 10 + m;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		l = 0;

		}
		i++;

	}

	if (l == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies the elements
 * @argc: arguments counts
 * @argv: array of the arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, count1, count2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	count1 = _atoi(argv[1]);
	count2 = _atoi(argv[2]);
	sum = count1 * count2;
	printf("%d\n", sum);

	return (0);
}
