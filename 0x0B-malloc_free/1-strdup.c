#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: String to duplicate
 * Return: 0.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		s[j] = str[j];

	return (s);
}
