#include "main.h"

/**
* read_textfile - reads a text file and prints it to the
* POSIX standard output
* @filename: pointer to address of text file
* @letters: number of letters to read and print
* * Return: actual number of letters read and printed
* 0 if file name is NULL
* 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t b;
	char *buf = malloc(sizeof(char) * letters + 1);

	if (fd == -1)
		return (0);
	if (!buf | !filename)
		return (0);
	b = read(fd, buf, letters);
	if (b == -1)
		return (0);
	buf[b] = '\0';
	b = write(STDOUT_FILENO, buf, b);
	if (b == -1)
		return (0);
	close(fd);
	free(buf);
	return (b);
}
