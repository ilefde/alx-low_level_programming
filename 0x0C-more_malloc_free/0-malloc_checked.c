#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked-returns a pointer allocated memory
 * @b:memory size
 *
 * Return: Nothing or pointer
 */

void *malloc_checked(unsigned int b)
{
  unsigned int *p;
  
  *p = malloc(b);
  if (*p == NULL)
  { return (98);
  }
  return (*p);
}
