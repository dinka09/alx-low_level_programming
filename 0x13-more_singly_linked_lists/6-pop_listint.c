#include "lists.h"
/**
 * pop_listint - Deletes the head node of the listint_t list
 * @head: a pointer to the address of the head of the listint_t list
 *
 * Return: if the linked list is empty 0 else the data at hte head node
 */
int pop_listint(listint_t **head)
{
	listint_t *fr;
	int hd;

	if (*head == NULL)
		return (0);

	fr = *head;
	hd = (*head)->n;
	*head = (*head)->next;
	free(fr);
	return (hd);
}
