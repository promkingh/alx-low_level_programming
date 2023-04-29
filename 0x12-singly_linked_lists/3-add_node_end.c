#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: points to the first node
 * @str: pointer to the string
 *
 * Return: Address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *new_head;
	size_t i, len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	for (i = 0; new->str[i]; i++)
		len++;
	new->len = len;
	new->next = NULL;

	if (*head != NULL)
	{
		new_head = *head;
		while (new_head->next != NULL)
			new_head = new_head->next;
		new_head->next = new;
	}
	else
		*head = new;

	return (new);
}

