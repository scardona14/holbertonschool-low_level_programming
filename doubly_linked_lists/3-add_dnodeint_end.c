#include "lists.h"

/**
* add_dnodeint_end - adds new node at the end of a list
* @head: pointer to pointer of first node
* @n: integer to store in node
*
* Return: address of new element, or NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
