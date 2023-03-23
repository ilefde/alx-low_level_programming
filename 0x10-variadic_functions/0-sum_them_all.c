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
  unsigned int i, sum = 0;
  va_list numbers;

 if (n == 0)
 {return (0); }
 else
 {  
   va_start(numbers, n);
   for (i = 0; i < n; i++))
   {sum = sum + va_arg(numbers, int); }
   va_end(numbers);
   return (sum);
 }
}
