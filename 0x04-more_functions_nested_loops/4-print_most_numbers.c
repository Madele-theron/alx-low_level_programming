#include "main.h"

/**
 * print_most_numbers - print 0-9 followed by new line
 * do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
putchar(i + '0');
}
putchar('\n');
}
