#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx:  index of the list where the new node should be added (starts at 0)
 * @n: int
 *
 * Return: adress of the new node or NULL on failure to add
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new, *n_head;

	n_head = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		a = 0;
		while (n_head != NULL && a < (idx - 1))
		{
			n_head = n_head->next;
			a++;
		}
	}
	if (n_head == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{	new->next = *head;
		*head = new;
	}
	new->next = n_head->next;
	n_head->next = new;

	return (new);
}
