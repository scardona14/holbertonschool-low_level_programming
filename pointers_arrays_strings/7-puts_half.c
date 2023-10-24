#include "main.h"
#include <string.h>
/**
* _strlen - returns the length of a string
* @s: variable being evaluated
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
* puts_half - prints half of string
* @str: string being evaluated
*/
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
