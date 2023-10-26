#include "main.h"
/**
 * string_toupper - change all lower case to uppercase
 * @s: characcter to make upper
 * Return: return value to upper
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
