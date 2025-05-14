// filepath: /Users/andrea/projects/holbertonschool-Fix_My_Code_Challenge/challenge/4-delete_dnodeint/lists.h
#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* _LISTS_H_ */
