#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable type
 * @d: pointer to a struct
 * @name: variable of type char, name of dog
 * @age: variable of type int, age of dog
 * @owner: variable of type char, name of owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{}
	else
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
