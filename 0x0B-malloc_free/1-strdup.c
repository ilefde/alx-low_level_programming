#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **_strdup-returns a pointer to a new string
 * @str: duplicated string
 *
 * Return: Nothing or pointer
 */

char *_strdup(char *str)
{
    char *newstring;
    int x;
    int l;
    x=0;
    while (str[x] != '\0')
    {
      x++;
    }
    x++;
    newstring = malloc(sizeof(*str) * x);
    if (string == NULL)
      return (NULL);
    l=0;
    newstring=malloc(sizeof(str));
    while (str[l] != '\0')
    {
        newstring[l]=str[l];
        l++
    }
}
