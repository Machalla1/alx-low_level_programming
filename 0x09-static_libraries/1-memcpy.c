#include "main.h"
/**
 *_memcpy - a function that duplicates a memory region
 *@dest: storage location in memory
 *@src: destination memory
 *@n: byte size
 *
 *Return: replicated memory with n bytes altered
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int v = n;


	for (; c < v; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
