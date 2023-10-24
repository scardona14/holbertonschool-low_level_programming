#include "main.h"
/**
* _strcpy - main function to copy
* 
* @dest: destination to copy
* @src: src
*
* Return: a character value
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
