#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the pointer to the head of the node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	
	if (*head != NULL)
	{
		while (*head)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
		}
	}
	*head = NULL;
}
