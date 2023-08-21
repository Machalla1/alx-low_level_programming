#include "main.h"

/**
 * *_strcpy -  This copies the string pointed to by src
 * @dest: This is the char type string
 * @src: this is the char type string
 * Description: this Copies the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
