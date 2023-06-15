#include <stdio.h>
#include "main.h"

/**
 * main - display  all the arguments it receives
 *
 * @argc: total number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int b;


	for (b = 0; b < argc; b++)

	{
		printf("%s\n", argv[b]);

}

	return (0);

}

