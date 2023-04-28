#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes (int)
 */

size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		n_nodes++;
	}

	return (n_nodes);
}
