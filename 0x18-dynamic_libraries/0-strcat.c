#include "main.h"

/**
 * _strcat - this appends src to the dest string
 * @dest: this is the string to append by src
 * @src: This is the string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
       int j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
