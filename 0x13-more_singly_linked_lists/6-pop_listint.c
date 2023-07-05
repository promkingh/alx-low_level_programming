#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 *		returns the head node’s data (n)
 * @head: pointer to the first node
 *
 * Return: return 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int tn;
	listint_t *temp_head;

	if (*head == NULL || head == NULL)
		return (0);
	temp_head = *head;
	tn = temp_head->n;
	*head = (*head)->next;
	free(temp_head);
	return (tn);
}

