#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Locate a node in a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The node to locate.
 * Return: If the node does not exist returns NULL
 * otherwise returns the adress of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
