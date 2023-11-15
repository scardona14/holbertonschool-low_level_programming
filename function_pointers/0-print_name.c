#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name
* @name: pointer to name being printed
* @f: pointer to function printing
*/
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
