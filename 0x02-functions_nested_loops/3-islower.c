#include <stdio.h>
#include "main.h"

/**
*_islower - print alphabet lowercase followed by new line
*Return: 1 if lowercase or 0 if uppercase
*/
int _islower(int c)
{
int i;
for (i = ‘a’; i <= ‘z’; i++)
{
if (i == c);
return (1);
}
return (0);
}
