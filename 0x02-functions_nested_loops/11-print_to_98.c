#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all numbers till 98
* @n: input integer
* Return: Always 0
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("98\n");
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98\n");
}
}
