#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog -  function that creates a new dog
 * @name: of dog
 * @age: of dog
 * @owner: name of owner
 *
 * Return : dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
  init_dog(struct dog *d, char *name, float age, char *owner)
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
  return(d)
}
