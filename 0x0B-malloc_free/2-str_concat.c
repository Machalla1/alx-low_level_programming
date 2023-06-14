#include "main.h"
#include <stdlib.h>
/**
 * str_concat -Retrieve the boundaries of the input and combine them to determine the total size.
 * @s1: user input one to concat s1
 * @s2: user input two to concat s2
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, cm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = cm = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[cm] != '\0')
		cm++;
	conct = malloc(sizeof(char) * (m + cm + 1));

	if (conct == NULL)
		return (NULL);
	m = cm = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}

	while (s2[cm] != '\0')
	{
		conct[m] = s2[cm];
		m++, cm++;
	}
	conct[m] = '\0';
	return (conct);
}


