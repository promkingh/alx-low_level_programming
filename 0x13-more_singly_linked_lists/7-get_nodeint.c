#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node starting at 0
 *
 * Return: index or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a, in = index;

	if (head == NULL)
		return (NULL);
	for (a = 0; (a < in) && (head != NULL); a++)
		head = head->next;
	return (head);
}
