#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *node, *new_node;

	node = head;
	while (node)
	{
		new_node = node->next;
		free(node);
		node = new_node;
	}
}
