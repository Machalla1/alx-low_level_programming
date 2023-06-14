#include <stdlib.h>
#include "main.h"

/**
 * @s: string to evaluate
 * count_word - A function that helps count word of a given string.
 *
 * Return: total numbers of phrase
 */
int count_word(char *s)
{
	int cat, n, m;

	cat = 0;
	m = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
		cat = 0;
		else if (cat == 0)
		{
			cat = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - seperate a string into words
 * @str: string to seperate
 *
 * Return: pointer to an array of strings to be (Successful)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int g, h = 0, pad = 0, words, j = 0, start, end;

	while (*(str + pad))
		pad++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (g = 0; g <= cat; g++)
	{
		if (str[g] == ' ' || str[g] == '\0')
		{
			if (j)
	{
		end = g;
	tmp = (char *) malloc(sizeof(char) * (j + 1));
		if (tmp == NULL)
		return (NULL);
		while (start < end)
		*tmp++ = str[start++];
			*tmp = '\0';
			matrix[h] = tmp - j;
				h++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = g;
	}

	matrix[h] = NULL;

	return (matrix);
}

