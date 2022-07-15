#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len - Function that prints the elements of a list.
* @h: the list pointer.
* Return: length of the list.
*/
size_t list_len(const list_t *h)
{
size_t element;
element = 0;
while (h != NULL)
{
if (h->str == NULL)
{
;
}
h = h->next;
element++;
}
return (element);
}
