#include "main.h"
/**
* _isalpha: A main function that checks for alphabet
*
* @c: a parameter that can take any value/data type
*/
int _isalpha(int c)
{
  if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
