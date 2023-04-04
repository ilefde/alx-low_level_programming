#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @integer: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	int *integer;
	struct list_s *next;
} list_t;

size_t print_listint(const listint_t *h);
#endif
