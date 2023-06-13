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
int check_num(char *str) /*check_num - checks for positive numbers*/
			   /*str: pointer to the array of string*/
	{
		unsigned int num;


		num = 0;

		while (num < strlen(str)) /*numbring the string*/


		{
			if (!isdigit(str[num])) /*check if str there are digit*/
			{
				return (0);
			}


			num++;
		}
		return (1);
	}

/**
	 * main - Print the name of the program
	 * @argc: Count arguments
	 * @argv: Arguments
	 *
	 * Return: Always 0 (Success)
	 */


	int main(int argc, char *argv[])


	{
		/*Declaring variables*/
		int num;
		int str_to_int;
		int resut = 0;


		num = 1;
		while (num < argc) /*Goes through the whole array*/
		{
			if (check_num(argv[num]))


			{
				str_to_int = atoi(argv[num]); /*atoi --> converts string to int*/
				result += str_to_int;/* stores the converted string*/
			}


			/*If one of there's symbols not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}


			num++;
		}


		printf("%d\n", result); /*prints result*/


		return (0);
	}
