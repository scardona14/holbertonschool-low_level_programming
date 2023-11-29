#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning of a list
* @head: pointer to pointer of first node
* @n: integer to store in node
* Return: address of a new element or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
