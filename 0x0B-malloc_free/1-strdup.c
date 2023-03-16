#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly alloacted space with a copy of arg
 * @str: the string to copy
 *
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *new;
	int x;
	int l;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	new = malloc(sizeof(*str) * x);
	if (new == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
	{
		new[l] = str[l];
		y++;
	}
	return (new);
}
