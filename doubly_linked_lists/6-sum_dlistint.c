#include "lists.h"

/**
* sum_dlistint - calculates sum of all the data (n) of a linked list
* @head: pointer to start of linked list
*
* Return: sum of all the date (n) of a linked list ot 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
