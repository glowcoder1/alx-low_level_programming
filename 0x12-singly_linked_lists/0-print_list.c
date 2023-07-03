#include "lists.h"
/**
 * print - function that prints all the elements of a list_t list
 * @h: head of the list
 * @i: count for nodes
 * Return: number of nodes
 */

int print(const list_t *h, int i)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	i++;
	if (h->next != NULL)
	{
		i++;
		print(h->next, i);
	}
	return (i);
}

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	count += print(h, count);
	return (count);
}
