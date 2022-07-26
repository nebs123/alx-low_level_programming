#include "main.h"

/**
 * alloc_grid - allocates a two dimensional grid and assigns 0 to each cell
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 *
 * Return: on success returns a pointer to the dimensional array otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **outer, *inner;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	outer = (int **) malloc(sizeof(int *) * height);
	if (outer == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		inner = (int *) malloc(sizeof(int) * width);
		if (inner == NULL)
		{
			int z;

			for (z = 0; z < x; z++)
				free(*(outer + z));
			free(outer);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			*(inner + y) = 0;
		*(outer + x) = inner;
	}
	return (outer);
}
