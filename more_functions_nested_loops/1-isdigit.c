#include "main.h"

/**
 * _isdigit - checks for digits (0 trough 9)
 * @c: int to be check
 * Return 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
