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
int num;
int nums;
int number;
for (num = 48 ; num < 58 ; num++)
{
for (nums = 48 ; nums < 58 ; nums++)
{
for (number = 48 ; number < 58 ; number++)
{
if (number != num && number != nums && num != nums && num < nums && nums < number && num < number )
{
putchar(num);
putchar(nums);
putchar(number);
if (number != 57 || nums != 56 || num != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
