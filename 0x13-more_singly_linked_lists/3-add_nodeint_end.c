#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode;
	listint_t *tmp;

	(void)tmp;

	nwnode = malloc(sizeof(listint_t));

	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;
	nwnode->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nwnode;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nwnode;
	}

	return (*head);
}
