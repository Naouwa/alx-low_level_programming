#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: Minimum
 * @max: Maximum
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int a, length;
	int *p;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	p = malloc(sizeof(int) * length);

	if (p == NULL)
		return (NULL);

	for (a = 0; min < max; a++)
		p[a] = min++;

	return (p);
}
