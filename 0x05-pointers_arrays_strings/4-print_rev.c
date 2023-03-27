#include "main.h"
/**
* print_rev - string in reverse
* @s: string to reverse
* Return: void
*/
void print_rev(char *s)
{
int len, i;
len = sizeof(s)/sizeof(char) - 1;
for (i = len; i > 0; i--)
{
_putchar(s[i]);
}
}

