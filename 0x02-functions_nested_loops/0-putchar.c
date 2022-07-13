#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *main - Do something
 *Return: Return something
 */
int main(void)
{
char *hola = "_putchar";
int a;
a = 0;
while (a < 8)
{
putchar(*hola);
hola++;
a++;
}
putchar('\n'); 
return (0);
}
