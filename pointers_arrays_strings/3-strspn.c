#include "main.h"
/**
* _strspn - Gets the length of a prefix substr
* @s: the string being evaluated
* @accept:  bytes being compared
* Return: the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}

	return (i);
}
