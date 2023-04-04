#include "list.h"
#include <stdio.h>

/**
 * print_listint - Print all the element of list_int
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of node in the list_t list
 */
size_t print_listint(const listint_t *h
		{
		size_t node = 0;

		while (h)
		{
			nodes++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (nodes);
		}
