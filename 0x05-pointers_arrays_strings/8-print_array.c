#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integer
 * @n: Number of elements pf the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (i - 1))
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
