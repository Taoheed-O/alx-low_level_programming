#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - Function that prints the elements of a list.
* @h: the list pointer.
* Return: Always (0).
*/
size_t print_list(const list_t *h)
{
size_t element;
element = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
element++;
}
return (element);
}
