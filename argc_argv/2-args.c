#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
* main - entry point, prints all the arguments
* @argc: the number of command line arguments
* @argv: array containing command line arguments
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
}
