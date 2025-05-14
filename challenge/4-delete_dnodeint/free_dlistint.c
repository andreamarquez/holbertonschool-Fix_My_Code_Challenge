#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: A pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
