#include <stdio.h>
#include "main.h"


/**
 * main -display the counts of arguments provided to the program
 * @argc:  arguments counts
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

(void) argv; /*Ignore argv*/

	printf("%i\n", argc - 1);



	return (0);

}

