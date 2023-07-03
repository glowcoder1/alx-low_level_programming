#include "lists.h"

/**
 * get_len - returns len of linked list
 * @h: head of list
 * @len: current len of list
 * Return: length of list
 */

size_t get_len(const list_t *h, size_t len)
{
	if (h == NULL)
		return (-1);
	len++;
	if (h->next != NULL)
	{
		len++;
		get_len(h->next, len);
	}
	return (len);
}

/**
 * list_len-  returns the number of elements in a linked list
 * @h: head of list
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t len = get_len(h, 0);

	return (len);
}
