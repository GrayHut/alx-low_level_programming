#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width argument
 * @height: height argument
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tmp = malloc(sizeof(int *) * height);

	if (tmp == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tmp[x] = malloc(sizeof(int) * width);

		if (tmp[x] == NULL)
		{
			for (; x >= 0; x--)
				free(tmp[x]);

			free(tmp);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			tmp[x][y] = 0;
	}

	return (tmp);
}
