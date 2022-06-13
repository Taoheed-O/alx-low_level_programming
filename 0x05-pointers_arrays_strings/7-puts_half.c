#include "main.h"
#include<string.h>
/**
* puts_half - printing half of a string
* @str: the string parameter
* Return: Always 0 (Success)
*/
void puts_half(char *str)
{
  int i = 0;
  int length = strlen(str);
  if (length % 2 == 0)
    {
      while (i >= (length / 2))
	{
	 _putchar(str[i]);
	 i++;
	}
      _putchar('\n');
    }
  else
    {
      int n = (length - 1) / 2 );
      while (i >= n)
	{
	  _putchar(str[i];
	  i++;
	}
	_putchar('\n');
    }
}
