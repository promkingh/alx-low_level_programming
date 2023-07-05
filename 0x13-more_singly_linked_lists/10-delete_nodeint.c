#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 *				listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *del, *n_head;

	if (*head == NULL || head == NULL)
		return (-1);
	n_head = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(n_head);
		return (1);
	}
	a = 0;
	while (a < (index - 1))
	{
		if (n_head->next == NULL)
			return (-1);
		n_head = n_head->next;
		a++;
	}
	del = n_head->next;
	n_head->next = del->next;
	free(del);
	return (1);
}
