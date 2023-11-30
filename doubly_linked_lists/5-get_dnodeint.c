#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of linked list
* @head: pointer to start of list
* @index: index of node, starting from 0
*
* Return: specified node of linked list or NULL is node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	current = head;
	n = 0;

	while (current)
	{
		if (n == index)
			return (current);
		current = current->next;
		++n;
	}
	return (NULL);
}
