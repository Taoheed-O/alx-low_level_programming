#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp;
char nl;
nl = 012;
for (alp = 'a' ; alp <= 'z' ; alp++)
{
if (alp != 'e' && alp != 'q')
{
putchar(alp); 
}
}
putchar(nl);
return (0);
}
