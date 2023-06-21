#include "dog.h"
#include <stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: struct to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if ( d == NULL)
		return;
	printf("Name:%s \n", d.name ? d.name : "(nil)");
	printf("Age: %.lf \n", d.age ? d.age : "(nil)");
	printf("Owner: %s \n", d.owner ? d.owner: "(nill)");
}
