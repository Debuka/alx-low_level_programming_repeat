#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create 2D array
 * @width: the width
 * @height:the height
 * Return: Pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **dog;
	int t, g;

	if (width <= 0 || height <= 0)
		return (NULL);

	dog = malloc(sizeof(int *) * height);

	if (dog == NULL)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		dog[t] = malloc(sizeof(int) * width);

		if (dog[t] == NULL)
		{
			for (; t >= 0; t--)
				free(dog[t]);

			free(dog);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (g = 0; g < width; g++)
			dog[t][g] = 0;
	}

	return (dog);
}
