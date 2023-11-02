#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)
/**
*is_positive_number - checks if a string is positive number
* @s: string to check
* Return: 1 if its a positive number, 0 otherwise
*/
int is_positive_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
* main - entry point of the program
* @argc: number of command-line arguments
* @argv: array of command-line arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
