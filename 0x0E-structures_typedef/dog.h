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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
