#include "lists.h"
/**
* _strlen - return the length of a string
* @s: string being evaluated
*
* Return: length of the string
*/
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s++)
		++i;
	return (i);
}
/**
* add_node_end - adds a node at the end of a list
* @head: pointer to address of a list
* @str: pointer to string
*
* Return: address of new element
* on error, NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
