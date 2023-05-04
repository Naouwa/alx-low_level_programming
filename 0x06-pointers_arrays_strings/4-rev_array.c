#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
