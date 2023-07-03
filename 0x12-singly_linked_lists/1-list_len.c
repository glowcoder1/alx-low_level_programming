#include "lists.h"

/**
 * get_len - returns len of linked list
 * @h: head of list
 * @len: current len of list
 * Returns: length of list
 */

size_t get_len(const list_t *h, size_t len)
{
	if (h == NULL)
		return (0);
	len++;
	if (h->next != NULL)
	{
		len++;
		get_len(h->next, len);
	}
	return (len);
}

/**
 * list_len:  returns the number of elements in a linked list
 * @h: head of list
 * Returns: length
 */

size_t list_len(const list_t *h)
{
	size_t len = get_len(h, 0);

	return (len);
}
