#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <string.h>

/**
read_textfile - reads a text file and prints it to the POSIX standard output
@filename: Name of the file to read
@letters: The number of letters to read and print
Return: The number of letters read and printed, or -1 on error
*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
