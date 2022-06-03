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
int hex;
char alp;
for (hex = 48 ; hex < 58 ; hex++)
{
putchar(hex);
}
for (alp = 97 ; alp < 103 ; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
