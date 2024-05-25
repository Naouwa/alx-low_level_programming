#include "search_algos.h"

/**
 * advanced_binary_recurs - earches recursively for a value
 * @array: set of numbers
 * @left: The starting index of the [sub]array
 * @right: The ending index of the [sub]array
 * @value: value to search fo
 *
 * Return: If the value is not present,otherwise -1.
 */
int advanced_binary_recurs(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recurs(array, left, i, value));
	return (advanced_binary_recurs(array, i + 1, right, value));
}

/**
 * advanced_binary - search the first ocurrency of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value to search
 *
 * Return: return the first index located otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
        if (array == NULL || size == 0)
                return (-1);
        return (advanced_binary_recurs(array, 0, size - 1, value));
}
