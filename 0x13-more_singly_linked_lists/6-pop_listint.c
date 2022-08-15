#include "lists.h"

/**
 * pop_listint - deletes the head node 
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *curnt;

	if (*head == NULL)
		return (0);

	curnt = *head;

	headnode = curnt->next;

	h = curnt->next;

	free(curnt);

	*head = h;

	return (headnode);
}
