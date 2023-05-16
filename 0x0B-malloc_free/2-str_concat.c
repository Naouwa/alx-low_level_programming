#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates twwo strings of any size
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

		if (s1 == NULL)
			s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);
}
