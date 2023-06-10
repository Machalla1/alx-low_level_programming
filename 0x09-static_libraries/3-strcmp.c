#include "main.h"
/**
 * _strcmp - examine string values
 * @s1: user input value
 * @s2: user input value
 *
 * Return: s1[d] - s2[d]
 */
int _strcmp(char *s1, char *s2)
{
	int d;


	d = 0;
	while (s1[d] != '\0' && s2[d] != '\0')
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
	d++;
	}
	return (0);
}
