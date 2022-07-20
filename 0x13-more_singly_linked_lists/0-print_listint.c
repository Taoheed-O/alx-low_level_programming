#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - A function that prints all elements ina linked list.
* @h: the link list
* Return: all elements of the list
*/
size_t print_listint(const listint_t *h)
{
size_t nelem;
nelem = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nelem++;
}
return (nelem);
}
