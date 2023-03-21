#include "main.h"
/**
* _sign - checks for n range
* @n: number
*
*Description: This is a function to check n range
* Return: 1 if n > 0 // 0 if n ==0 // -1 if n < 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar('\n');
return (1);
}
else if (n == 0)
{
_putchar(43);
_putchar('\n');
return (0);
}
else
{
_putchar(43);
_putchar('\n');
return (-1);
}
}
