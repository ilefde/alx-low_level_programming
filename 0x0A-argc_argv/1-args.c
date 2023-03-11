#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: Always 0 (success)
 */
int main(int argc )
{
	printf("%s\n", argc-1);
	return (0);
}
