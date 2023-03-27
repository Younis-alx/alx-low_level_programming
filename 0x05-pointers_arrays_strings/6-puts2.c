#include "main.h"

void puts2(char *str)
{
int i, len;
for (i = 0; str[i] != '\0'; i++)
{
++len;
}
for (i = 0; i <= len; i += 2)
{
_putchar(str[i]);
}
}
