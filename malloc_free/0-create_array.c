#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an of chars then initialises
* @size: size of the memory
* @c: char to initialize the array in C
* Return: pointer to array, NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (!size)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
