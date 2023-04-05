#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list
 * @head: the pointer to the head of the node
 *
 * Return: the head node's data (n) and 0 if empty
 */

int pop_listint(listint_t **head)
{
	int node_content = 0;
	listint_t *node;
	
	if (*head)
	{
		node = (*head)->next;
		node_content = (*head)->n;
		free(*head);
	}
	head = node
	return (node_content);
}
