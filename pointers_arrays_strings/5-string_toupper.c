#include "main.h"
/**
* _toupper - converts lower case letters to uppercase
* @: pointer of a string
* Return: Pointer to the modify string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -32;
		}
	}
	return s;
}
