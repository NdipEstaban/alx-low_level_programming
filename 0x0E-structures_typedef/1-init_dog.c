#include<stdio.h>
#include "dog.h"
/**
 * init_dog - initialises a variable of type dog
 *
 * @d: input pointer to dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
