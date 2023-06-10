#include "main.h"
/**
 * _strncpy - replicate a string
 * @dest: user input value
 * @src: user input value
 * @n: user input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;


	w = 0;
	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	while (w < n)
	{
		dest[j] = '\0';
		w++;
	}


	return (dest);
}
