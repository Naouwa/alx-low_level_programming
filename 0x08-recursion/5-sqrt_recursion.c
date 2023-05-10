#include "main.h"
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: Number to calculate square root of
 * @i: square root
 *
 * Return: The resulting square root
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - Returns the natural square root of a number
 * @n: Number to calculate square root of
 * @i: Square root
 *
 * Return: The resulting square root
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
