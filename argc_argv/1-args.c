#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
* main - entry point, prints the number of arguments
* @argc: the number of command line arguments
* @argv: array containing command line arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
