#include "main.h"
/**
 * *string _toupper - change all lower case to uppercase
 * @s: pointer
 * Return: s
 */
char *string_toupper(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
