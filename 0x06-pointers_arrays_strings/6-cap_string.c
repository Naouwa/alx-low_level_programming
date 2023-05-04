#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @c: String to capitalize
 * Return: pointer to changed string
 */
char *cap_string(char *c)
{
	int index = 0;

	while (c[index])
	{
		while (!(c[index] >= 97 && c[index] <= 122))
			index++;

		if (c[index - 1] == ' ' ||
		c[index - 1] == '\t' ||
		c[index - 1] == '\n' ||
		c[index - 1] == ',' ||
		c[index - 1] == ';' ||
		c[index - 1] == '.' ||
		c[index - 1] == '!' ||
		c[index - 1] == '?' ||
		c[index - 1] == '"' ||
		c[index - 1] == '(' ||
		c[index - 1] == ')' ||
		c[index - 1] == '{' ||
		c[index - 1] == '}' ||
		index == 0)
			c[index] -= 32;
		index++;
	}
	return (c);
}
