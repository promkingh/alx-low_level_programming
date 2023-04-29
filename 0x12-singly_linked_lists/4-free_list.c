#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: points to the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *new_node;

	node = head;

	while (node != NULL)
	{
		new_node = node->next;
		free(node->str);
		free(node);
		node = new_node;
	}
}
