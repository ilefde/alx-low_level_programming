#include "main.h"

/**
 * main - Entry Point
 * Description - Print _putchar
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar\n";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}

	return (0);
}
