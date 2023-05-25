#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: integers to sum
 *
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
