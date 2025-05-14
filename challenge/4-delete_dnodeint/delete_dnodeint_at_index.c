#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}

	saved_head = *head;
	p = 0;

	/* Traverse to the node at the given index */
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}

	/* If the index is out of bounds */
	if (p != index || *head == NULL)
	{
		*head = saved_head;
		return (-1);
	}

	/* If the node to delete is the head */
	if (*head == saved_head)
	{
		saved_head = (*head)->next;
		free(*head);
		*head = saved_head;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		/* Update the previous node's next pointer */
		(*head)->prev->next = (*head)->next;

		/* Update the next node's prev pointer, if it exists */
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = (*head)->prev;
		}
		free(*head);
		*head = saved_head;
	}

	return (1);
}
