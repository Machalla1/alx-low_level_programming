#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int b = 0;
	int n = 0;
	int m = 0;
	int v = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (n = 0; av[b][n]; n++)
			v++;
	}
	v += ac;

	str = malloc(sizeof(char) * v + 1);
	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (n = 0; av[b][n]; n++)
	{
		str[m] = av[b][n];
		m++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}


