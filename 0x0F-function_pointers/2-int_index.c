#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints the name of the file
 * @array: name to be printed
 * @cmp: pointer to fnctn
 * @size: size
 *
 * Return: index for cmpnot , -1 for no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
