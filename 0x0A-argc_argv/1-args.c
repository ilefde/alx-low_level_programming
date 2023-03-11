#include <stdio.h>

/**
 * main - print number of arg argc
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)) )
{
	printf("%s\n", argc-1);
	return (0);
}
