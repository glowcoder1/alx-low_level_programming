#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a new dog if successful or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));
	char __attribute__((unused)) *name_copy;
	char __attribute__((unused)) *owner_copy;

	if (name == NULL || owner == NULL || my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	name_copy = name;
	owner_copy = owner;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
