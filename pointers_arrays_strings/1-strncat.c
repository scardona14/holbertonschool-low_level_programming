#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: string being concatenated
* @src: string being concatenated
* @n: number of bytes
*
* Return: Pointer resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	
	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
