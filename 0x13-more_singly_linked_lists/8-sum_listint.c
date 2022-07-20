#include "lists.h"
/**
* sum_listint - returns the number of elements in a linked list.
* @head: head of a list.
* Return: sum of elements.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
