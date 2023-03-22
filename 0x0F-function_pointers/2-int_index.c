#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints the name of the file
 * @array: name to be printed
 * @cmp: pointer to fnctn
 * @size: size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
  size_t i = 0;
  
  for (i = 0; i < size ;i++)
  {
    cmp(array[i]));
  }
  array_iterator(*array, int size, int (*cmp)(int))
}
