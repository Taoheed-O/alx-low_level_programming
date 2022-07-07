#include "function_pointers.h"
/**
* int_index - returns the index of the first element
* for which the cmp function does not return 0.
* @array: the array of function pointers
* @size: the number of elements in the array.
* @cmp: the function pointer.
* Return: the index of the first element
* for which cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
return (-1);
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
