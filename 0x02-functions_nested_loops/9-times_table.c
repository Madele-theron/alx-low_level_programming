#include <stdio.h>
#include "main.h"

/**
* times_table - prints every minute of the day
* Return: Always 0
*/
void times_table(void)
{
int row, col, multi;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
multi = row * col;
if (col == 0)
{
putchar(multi + '0');
}
else if (multi < 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(multi + '0');
}
else if (multi >= 10)
{
putchar(',');
putchar(' ');
putchar((multi / 10) + '0');
putchar((multi % 10) + '0');
}
}
putchar('\n');
}
}
