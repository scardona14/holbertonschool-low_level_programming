#include "main.h"
/**
* is_separator - checks if a character is a word separator
* @c: The character to check
* Return: 1 if its a separator, 0 otherwise
*/
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
* cap_string - capitalizes all words in a string
* @str: the string to capitalize
* Return: a pointer to the modified string
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || is_separator(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
