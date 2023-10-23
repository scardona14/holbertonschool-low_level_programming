#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: first integer being swapped
* @b: second integer being swapped
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
