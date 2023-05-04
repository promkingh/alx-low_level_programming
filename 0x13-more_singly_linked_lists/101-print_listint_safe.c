#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: num of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes;
	const listint_t *nhead;

	n_nodes = 0;

	while (head)
	{
		nhead = head;
		printf("[%p] %d\n", (void *)nhead, nhead->n);
		head = head->next;
		n_nodes++;
		if (nhead <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	if (!nhead)
		exit(98);
	return (n_nodes);
}
