#include "lists.h"
#include <stddef.h>
/**
 * list_len - print list
 * @h:
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
