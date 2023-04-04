#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - A function to add a new node to the begining
 * of the listint_list
 * @head: Apointer to the address of the head of the listint_list
 *
 * Return: If the function fails, return NULL
 * otherwise - return the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ele;

	new_ele = malloc(sizeof(listint_t);
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = *head;

	*head = new_ele;

	return (new_ele);

}

