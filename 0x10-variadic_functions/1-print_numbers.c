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
   int i = 0;
   
   va_start(ap, n); 
   while (i < n)
       printf("%d ", va_arg(ap, int));
       if (separator != NULL && i < n - 1)
			printf("%s", separator);
		   i++;
   va_end(ap);
   putchar('\n');
}
