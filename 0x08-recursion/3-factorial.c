#include "main.h"
/**
 * factorial - Returns te factorial of a given number
 * @n: The number to calculate
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
