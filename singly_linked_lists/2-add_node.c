#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t
 * @head: pointer
 * @str: string
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	int lens = 0;

	for (lens = 0; str[lens] != '\0'; lens++)
		;
	{
		list_t *new_n;

		new_n = malloc(sizeof(list_t));
		if (new_n == NULL)
		{
			return (NULL);
		}

		new_n->str = strdup(str);
		new_n->len = lens;
		new_n->next = *head;
		*head = new_n;

		return (*head);
	}
}
