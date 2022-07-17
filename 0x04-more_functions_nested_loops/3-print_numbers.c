#include "main.h"

/**
 * print_numbers - print 0-9 followed by new line
 * Return: 0
 */

void print_numbers(void)
{
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
}
