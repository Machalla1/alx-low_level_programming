#include "main.h"
#include<string.h>
/**
 * _strcmp -  this is the function that compares two strings.
 * @s1:this is the string1 to compare.
 * @s2: this string two to compare.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
