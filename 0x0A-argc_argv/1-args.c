#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: the number of arguments
 * @argv: arrayy of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
