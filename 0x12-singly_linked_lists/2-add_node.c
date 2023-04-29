#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to the first node
 * @str: pointer to the string
 *
 * Return: address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0, i;

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
	new->next = *head;
	*head = new;

	return (*head);
}
