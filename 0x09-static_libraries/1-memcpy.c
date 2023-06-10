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
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
