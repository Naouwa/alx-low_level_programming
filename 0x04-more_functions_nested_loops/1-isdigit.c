#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: The number in ASCII code
 * Return: 1 for a character that will be a digit or 0 for the rest.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
