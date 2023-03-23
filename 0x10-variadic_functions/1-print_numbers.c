#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - is a function that returns the sum of all its parameters
 * @n: is the integer parameter
 * @separator: character that separates numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
