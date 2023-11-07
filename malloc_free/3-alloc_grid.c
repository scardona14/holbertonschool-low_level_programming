#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - return pointer to 2-D array
* @width: dimensions of array
* @height: dimensions of array
*
* Return: pointer to 2-D array, NULL if 0 or negative dimension
*/
int **alloc_grid(int width, int height)
{
		int i;
		int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		*(array + 1) = malloc(sizeof(int) * width);
		if (!(*(array + i)))
		{	
			while (i >= 0)
			{		
				free(*(array + i));
				--i;
			}
			free(array);
			return (NULL);
		}	
	}
	return (array);
}
