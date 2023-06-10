#include "main.h"
/**
 * _strstr - Starting point
 * @haystack: user input
 * @needle: user input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *z = haystack;
		char *x = needle;


		while (*z == *x && *x != '\0')
		{
			z++;
			x++;
		}


		if (*x == '\0')
			return (haystack);
	}


	return (0);
}
