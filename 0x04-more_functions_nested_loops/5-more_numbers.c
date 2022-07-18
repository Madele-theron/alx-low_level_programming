#include "main.h"

/**
 * more_numbers - print 0-14 x 10 times followed by new line
 * Return: 0
 */

void more_numbers(void)
{
int i = 0, n;
while (i < 10)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
putchar(n / 10 + '0');
}
putchar((n % 10) + '0');
}
i++;
putchar('\n');
}
}
