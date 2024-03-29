#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nwnode;
	listint_t *headnd;

	headnd = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && headnd != NULL; i++)
		{
			headnd = headnd->next;
		}
	}

	if (headnd == NULL && idx != 0)
		return (NULL);

	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;

	if (idx == 0)
	{
		nwnode->next = *head;
		*head = nwnode;
	}
	else
	{
		nwnode->next = headnd->next;
		headnd->next = nwnode;
	}

	return (nwnode);
}
