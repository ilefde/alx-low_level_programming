#include lists.h

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
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
