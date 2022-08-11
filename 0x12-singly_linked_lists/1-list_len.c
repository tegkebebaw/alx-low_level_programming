#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h:  linked list passed as parameter.
 * Return: list length.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
