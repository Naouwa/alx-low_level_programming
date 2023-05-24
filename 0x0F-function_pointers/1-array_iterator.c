#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: int array
 * @size: size of array
 * @action: pointer to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array && size && action)
		while (array <= i)
			action(*array++);
}
