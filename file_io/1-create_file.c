#include "main.h"

/**
* _strlen - gets the length of a string
* @s: string being evaluated
*
* Return: legth of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		++i;
	return (i);
}
/**
* create_file - creates a file
* @filename: name of file to create
* @text_content: null terminated string to write
*
* Return: 1 on success
* -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
