#include "main.h"
/**
* alloc_grid - 2D array
* @width: width of arary
* @height: height of array
* Return: pointer to the 2D array of int
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
