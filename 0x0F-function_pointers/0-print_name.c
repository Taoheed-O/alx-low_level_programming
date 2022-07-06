#include "function_pointers.h"
#include<stdio.h>
/**
* print_name - the function that prints a name.
* @name: the name parameter.
* @f: the pointer to a function.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f )
{
f(name);
}
}
