#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The possessor
 * Return: Null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
