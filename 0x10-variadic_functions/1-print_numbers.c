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
   
   if n == 0
      return (0)

   va_start(ap, arg1); 
   for (i = 0; i < n; i++)
       printf("%d ", va_arg(ap, int));
  va_end(ap);
  putchar('\n');
}
