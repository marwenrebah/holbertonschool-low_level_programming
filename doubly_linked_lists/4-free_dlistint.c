#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *s;
while (head)
{
s = head->next;
free(head);
head = s;
}
}
