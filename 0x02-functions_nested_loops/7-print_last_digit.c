#include <stdio.h>
#include "main.h"

/**
* print_last_digit - prints last digit
* @n: An input integer
*Return: last digit
*/
int print_last_digit(int n)
{
int p = n % 10;
putchar(p);
return (n % 10);
}
