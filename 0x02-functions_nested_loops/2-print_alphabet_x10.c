#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - print alphabet x 10 followed by new line
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int repeats = 0;
while (repeats < 9)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
repeats++;
}
}
