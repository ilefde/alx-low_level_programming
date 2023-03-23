#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - is a function that returns the sum of all its parameters
 * @n: is the integer parameter
 * @separator: character that separates numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
   va_list ap;
   int i;

   va_start(ap, arg1); 
   for (i = arg1; i >= 0; i = va_arg(ap, int))
    _putchar("%d ", i, separator);
  va_end(ap);
  putchar('\n');
}
