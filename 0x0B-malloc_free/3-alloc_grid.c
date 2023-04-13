#include "main.h"

/**
 * alloc_grid - allocates a two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2 dim array or NULL
 */

int **alloc_grid(int width, int height)
{
	int k, l;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(height * sizeof(int *));

	if (mat == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		mat[k] = malloc(width * sizeof(int));

		if (mat[k] == NULL)
		{
			while (k > 0)
				free(mat[--k]);
			free(mat);
			return (NULL);
		}

		for (l = 0; l < width; l++)
			mat[k][l] = 0;
	}

	return (mat);
}
