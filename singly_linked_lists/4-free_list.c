#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
