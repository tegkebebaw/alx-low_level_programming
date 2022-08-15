#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curnt;

	if (head != NULL)
	{
		curnt = *head;
		while ((tmp = curnt) != NULL)
		{
			curnt = curnt->next;
			free(tmp);
		}
		*head = NULL;
	}
}
