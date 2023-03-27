#include "main.h"
/**
* print_rev - string in reverse
* @s: string to reverse
* Return: void
*/
int _strlen(char *s)
{
int count, i;
count = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
++count;
}
return (count);
}

void print_rev(char *s)
{
int len, i;
len = _strlen(*s);
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
}

