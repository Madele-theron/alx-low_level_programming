#include<stdio.h>
#include "main.h"

/**
* print_sign - prints a sign depending on integer
* @n: An input integer
* Return: 1, or 0, or -1
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return  (1);
}
else if (n == 0)
{
putchar('0');
return  (0);
}
else
{
putchar('-');
return (-1);
}
}
