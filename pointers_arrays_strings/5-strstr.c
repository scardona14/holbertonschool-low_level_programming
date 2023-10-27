#include "main.h"
/**
* _strstr - Locates a substring
* @haystack: string to search in
* @needle: substring to look for
*
* Return: pointer to beginning of located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[i] == needle[j]; i++, j++)
				;
			if (needle[j] == '\0')
				return (haystack + i - j);
		}
	}
	return (0);
}
