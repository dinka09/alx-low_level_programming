#include "lists.h"
/**
 * sum_listint - calculate the sum of all the data (n) of a listint_t lsit
 * @head: a pointer to the head of the listint_t list
 *
 * Return: if the list is empty 0 else the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

