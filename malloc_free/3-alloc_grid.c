#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: columns
 * @height: rows
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
int **mas, i, j;

if (width < 1 || height < 1)
return (NULL);

mas = malloc(height * sizeof(int *));
if (!mas)
return (NULL);

for (i = 0; i < height; i++)
{
mas[i] = malloc(width * sizeof(int));
if (!mas[i])
{
while (--i >= 0)
free(mas[i]);
free(mas);
return (NULL);
}
for (j = 0; j < width; j++)
mas[i][j] = 0;
}
return (mas);
}

