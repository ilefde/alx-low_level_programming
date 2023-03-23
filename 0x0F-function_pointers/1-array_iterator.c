#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints the name of the file
 * @array: name to be printed
 * @action: pointer to name
 * @size: size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
