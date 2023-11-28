#include "lists.h"

/**
* print_list - prints all elements of a list
* @h: pointer to a list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (current == NULL) 
	{
		printf("[0] (nil)\n");
		return (count);
	}
	printf("[");

	while (current != NULL)
	{
		printf("%s", current->str);
		count++;
		current = current->next;

	if (current != NULL)
	{
		printf(", ");
	}
	}
	printf("]\n");
	return (count);
}
