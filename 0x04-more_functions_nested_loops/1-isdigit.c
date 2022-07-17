#include "main.h"

/**
 * _isdigit - checks if integer is a digit
 * @c: input integer
 * Return: 1 if c is a digit 0 if not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
