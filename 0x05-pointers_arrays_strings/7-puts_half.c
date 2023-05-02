#include "main.h"
/**
 * puts_half - prints half of a string
 * if num of chars odd, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return half string
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
