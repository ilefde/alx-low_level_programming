#ifndef DOG
#define DOG

/**
 * struct dog - new structure
 * @name: name element of dog structure
 * @age: of dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
  
#endif
