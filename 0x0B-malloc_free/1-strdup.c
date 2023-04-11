#include "main.h"

/**
* _strdup - pointer to a newly allocated space in memory, with a copy of string
* @str: string to copy
*Return: pointer
*/
char *_strdup(char *str)
{
char *sub;
int i, len;

if (str == NULL)
return (NULL);

while (*str)
++len;

sub = (char *)malloc(len * sizeof(char));


for (i = 0; str[i]; i++)
{
sub[i] = str[i];
}
sub[len] = '\0';

}
