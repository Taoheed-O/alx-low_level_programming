#include "lists.h"
/**
* listint_len - A function that prints all elements ina linked list.
* @h: the link list
* Return: number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
size_t nelem;
nelem = 0;
while (h != NULL)
{
h = h->next;
nelem++;
}
return (nelem);
}
