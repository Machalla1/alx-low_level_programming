#include "main.h"

/**
 * char *_strcpy - a function that creates a copy of the string pointed to by src
 * @dest: clone into
 * @src: clone from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;
	int c = 0;


	while (*(src + z) != '\0')
	{
		z++;
	}
	for ( ; c < z ; c++)
	{
		dest[c] = src[c];
	}
	dest[z] = '\0';
	return (dest);
