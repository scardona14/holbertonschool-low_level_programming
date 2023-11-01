#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
* main - entry point, multiplies two numbers
* @argc: number of command line arguments
* @argv: array containing command line arguments
* Return: 0, 1 if more than 2 arguments
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
