#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the datatype pointer of the struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *current_node = h;

	for (; current_node; current_node = current_node->next)
	{
		printf("%d\n", current_node->n);
		nodes++;
	}

	return (nodes);
}
