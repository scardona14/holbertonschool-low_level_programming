#include "main.h"
#include <stdlib.h>
/**
* free_grid - Frees the memory of 2-D array
* @grid: 2-D array
* @height: dimension of array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(*(grid + i));
	free(grid);
}
