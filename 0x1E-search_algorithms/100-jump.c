#include "search_algos.h"

/**
 * jump_search - It searches for a value in an array
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of value, and if it doesn't exist return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = 0, prev = 0, length = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (step < length && prev < length)
	{
		if (array[step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += step;
		step += (int) sqrt(length);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < length && prev <= step)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[step]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
