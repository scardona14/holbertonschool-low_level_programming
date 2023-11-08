#include "main.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array using malloc
* @nmemb: number of element
* @size: amount of bytes
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	str = malloc(size * nmemb);
		if (!str)
			return (NULL);
	for (i = 0; i < size * nmemb; ++i)
		*(str + i) = 0;
	return (str);
}
