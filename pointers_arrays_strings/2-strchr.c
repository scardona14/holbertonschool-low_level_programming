#include "main.h"
/**
* _strchr - locates a charcter in the string
* @s: the string to search for the character
* @c: the character to find in the string
* Return: character value
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	if (s[i] == c)
		return (s + 1);
	return (0);
}

