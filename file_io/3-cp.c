#include "main.h"

/**
* main - copies content of a file to another
* @argc: number of command line arguments
* @argv: array containing command line arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int f1, f2, n;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n = read(f1, buf, 1024)) > 0)
		if ((write(f2, buf, n)) != n || f2 < 0)
		dprintf(STDERR_FILENO, "Enter: cant write to %s\n", argv[2]), exit(99);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f1))
		dprintf(STDERR_FILENO, "Error cant close fd %d\n", f1), exit(100);
	if (close(f2))
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", f2), exit(100);
	return (0);
}
