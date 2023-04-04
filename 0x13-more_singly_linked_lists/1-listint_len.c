#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Return the number of element in the
 * linked list
 * @h: A pointer to the head of the listint_list
 *
 * Return: The number of elements in the listint_list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);

}