#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -Utilize a loop within another loop to create a grid structure.
 * @width:user input width
 * @height:user input height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pee;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	pee = malloc(sizeof(int *) * height);

	if (pee == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		pee[n] = malloc(sizeof(int) * width);

		if (pee[n] == NULL)
		{
			for (; n >= 0; n--)
				free(mee[n]);

			free(pee);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			mee[n][m] = 0;
	}

	return (pee);
}

