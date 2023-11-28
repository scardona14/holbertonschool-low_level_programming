#include "lists.h"

/**
* list_len - returns number of elements in the linked list
* @h: pointer to a list
*
* Return: number of elements in the linked list
*/
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
