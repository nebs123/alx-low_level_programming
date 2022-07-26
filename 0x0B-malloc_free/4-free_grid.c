#include "main.h"

/**
 * free_grid - frees the memory allocated by counterpart alloc_grid
 * @grid: pointer to the two dimensional array
 * @height: height of the two dimensional grid
 *
 * Return: void(no return)
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(*(grid + x));
	free(grid);
}
