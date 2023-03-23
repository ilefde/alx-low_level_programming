#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Prints the result of simple operations.
 * @n: The number of arguments supplied to the program.
 *
 * Return: sum of arguments.
 */
 int sum_them_all(const unsigned int n, ...)
{
 int sum = 0;
 if (n == 0)
  return (0);
 else
 {
   va_list numbers;
   int i;

   va_start(numbers, n); 
   for (i = n; i >= 0; i = va_arg(numbers, int))
   {sum = sum + i; }
   va_end(numbers);
   return (sum);
 }
}
