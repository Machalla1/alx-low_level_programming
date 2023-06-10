#include "main.h"
/**
 * _strncat - combine two strings
 * employing up to n bytes from src
 * @dest: user input
 * @src: user input
 * @n: user input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int x;


	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[z] = src[x];
	z++;
	x++;
	}
	dest[z] = '\0';
	return (dest);
}
