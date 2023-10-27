#include "main.h"
/**
* _strspn - Gets the length of a prefix substring
* @s: the string being evaluated
* @accept: the set of bytes being compared
* return: the number of bytes in the prefix substring
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
