#include "main.h"
/**
 * _strlen - returns the count of characters in a string
 * @s: text string
 * Return: size or length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
