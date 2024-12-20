#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
