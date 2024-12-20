#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lens = 0;
	list_t *new_node;
	list_t *temp;

	for (lens = 0; str[lens] != '\0'; lens++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = lens;
	if (*head == NULL)
	{
		*head = new_node;
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
