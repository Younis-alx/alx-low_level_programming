#include "main.h"
/**
* string_toupper - convert string to uppercase
* @str: string to convert
* Return: char (upper)
*/
char *string_toupper(char *str)
{
for (i = 0; str[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (str);
}
