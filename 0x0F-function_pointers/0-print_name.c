#include "function_pointers.h"

/**
 * print_name - prints the name of the file
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
  if (f && name)
  {
    f(name);
  }
}
