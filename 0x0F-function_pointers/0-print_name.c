#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints the name of the file
 * @name: name to be printed
 * @f: pointer to name
 *
 */

void print_name(char *name, void (*f)(char *))
{
  f(name);
}