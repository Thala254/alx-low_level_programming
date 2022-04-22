#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds length of a string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 * Return: address of the new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
