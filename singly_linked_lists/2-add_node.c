#include "lists.h"

/**
* _strlen - returns the lenth of a string
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
* add_node - Adds a node at the begginning of a list
* @head: pointer to address of a list
* @str: pointer to string
*
* Return: address of new element
* on error, NULL.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
