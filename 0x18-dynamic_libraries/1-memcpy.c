#include "main.h"

/**
  * _memcpy - this copies the  memory area
  * @dest: this is the pointer to return
  * @src: this is the source memory area
  * @n: bytes from memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
