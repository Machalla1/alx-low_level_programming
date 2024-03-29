#include "main.h"

/**
 * _isalpha - verifies if a character is alphabetic
 * @c: the character to be verified
 * Return: Returns 1 if c is a letter, otherwise returns 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
