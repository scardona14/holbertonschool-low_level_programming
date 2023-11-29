#include "lists.h"

/**
* print_dlistint - prints all the elements of linked list
* @h: pointer to the first node of linked list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		++n;
	}
	return (n);
}
