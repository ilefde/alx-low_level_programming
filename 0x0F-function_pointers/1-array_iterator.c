#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - prints the name of the file
 * @array: name to be printed
 * @action: pointer to name
 * @size: size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i = 0;
  for (i =0 ; i< size ; i++)
  {
    action(array[i]);
  }
}
