#include lists.h

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
  
	size_t n = 0;

	while (h)
	{
		if (!h->integer)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->integer);
		h = h->next;
		n++;
	}

	return (n);
}
