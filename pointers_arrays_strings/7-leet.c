#include "main.h"
/**
* leet - encodes a string into 1337
* @s: string to be encoded
*
* Return: converted string
*/
char *leet(char *s)
{
	int i, j;

	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; letter[j]; j++)
			if (letter[j] == s[i])
				s[i] = number[j];
	return (s);
}
