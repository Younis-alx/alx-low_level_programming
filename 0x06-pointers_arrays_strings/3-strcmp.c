#include "main.h"
/**
* _strcmp - comaprre two strings
* @s1: first string
* @s2: second string
* Return: 0 if equal 1 if not
*/

int _strcmp(char *s1, char *s2)
{
int flag, i;
flag = 0;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
flag = 1;
break;
}
i++;
}
if (flag == 0)
return (0);
else
return (1);
}
