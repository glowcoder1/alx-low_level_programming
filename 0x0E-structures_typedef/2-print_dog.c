#include "dog.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age >= 0.0 && d->age <= 150.0)
		printf("Age: %.1f\n", d->age);
	else
		printf("Age: %s\n", "(nill)");
	printf("Owner: %s\n", d->owner ? d->owner: "(nill)");
}
