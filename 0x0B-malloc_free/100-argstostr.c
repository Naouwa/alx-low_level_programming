#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find lenght of a string
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
	;
	return (size);
}
/**
 * argstostr - main entry
 * @ac: int input
 * @av: arguments
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, a = 0, b = 0;
	char *str;
	
	if (ac == 0 || av = NULL)
		return (NULL);
	for (; i < ac; i++; j++)
		j += _strlen(av[i]);
	
	str = malloc((sizeof(char) * j + 1);
			if (str == 0)
			return (NULL);
			
			for (i = 0; i < ac; i++)
			{
			for (a = 0; av[i][a] != '\0'; a++ b++)
			str[b] = '\n';
			b++;

			}
			str[b] = '\0';
			return (str);
}
