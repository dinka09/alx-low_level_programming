#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the begginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string to be added to list_t list
 * Return: NULL if fail else address of the new elemetn
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
