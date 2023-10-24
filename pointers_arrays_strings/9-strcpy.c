#include "main.h"
/**
* _strcpy - copies string pointed to by src
* @dest: array being copied to
* @src: string to be copied
*
* return: the value of pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len;
	int i = 0;

	while (*src++)
		i++;
	len = i;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
