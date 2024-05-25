#include "search_algos.h"

/**
 * interpolation_search - search the first ocurrency of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value to search
 *
 * Return: return the first index located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		i = left + (((double)(right - left) / (array[right] - array[left])) *
			    (value - array[left]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
