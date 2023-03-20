#include <stdio.h>
#include <stdlib.h>
#include dog.h

/**
 * void init_dog - initialize dog
 * @d -dog object
 * @name - of dof
 * @age - of dog
 * @owner - name of owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d == NULL)
		;
	else
	{
    d.name=name;
    d.age=age;
    d.owner=owner;
  }
  
}
