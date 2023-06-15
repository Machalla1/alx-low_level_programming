#include <stdio.h>
#include "main.h"

/**
 * _atoi - transform a string to an integer
 * @s: string to be transformed
 * Return: the int converted from the string
 */

int _atoi(char *s)
{

	int v = 0;

	int d = 0;

	int n = 0;

	int len = 0;

	int f = 0;

	int digit = 0;


	while (s[len] != '\0')

		len++;


	while (v < len && f == 0)

	{

		if (s[v] == '-')

			++d;


	if (s[v] >= '0' && s[v] <= '9')

{

		digit = s[v] - '0';

		if (d % 2)

		digit = -digit;

			n = n * 10 + digit;
	f = 1;

	if (s[v + 1] < '0' || s[v + 1] > '9')

		break;

	f = 0;

}

		v++;

	}


	if (f == 0)
	return (0);


	return (n);

}



/**
 * main - performs multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{

	int result, num5, num6;



	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}



	num5 = _atoi(argv[1]);

	num6 = _atoi(argv[2]);

	result = num5 * num6;



	printf("%i\n", result);



	return (0);
}

