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
    char *string;
    int x;
    int l;
    x=0;
    while (str[x] != '\0')
    {
      x++;
    }
    x++;
    string = malloc(sizeof(*str) * x);
    if (string == NULL)
      return (NULL);
    string=malloc(sizeof(str))
    while (str[y] != '\0')
    { 
      string[y] = str[y];
      y++;
    }               
      
}
