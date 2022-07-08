#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
* print_numbers - Function that prints numbers given to it as arguments.
* @separator: separator given.
* @n: number of arguments.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0 ; i < n ; i++)
{
printf("%d", va_arg(ap,unsigned int));
if (separator && i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
