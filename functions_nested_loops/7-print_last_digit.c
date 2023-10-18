#include "6-abs.c"
#include "main.h"
/**
*print _last_digit - main function
*
* @n: integer to get last digit of
* Return: last digit on n
*
*/
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
