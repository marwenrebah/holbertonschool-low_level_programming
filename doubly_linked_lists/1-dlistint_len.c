#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: pointer to to the dlistint_t to print.
 * Return: The number of elements in the  dlistint_t list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t s = 0;
while (h)
{
s++;
h = h->next;
}
return (s);
}
