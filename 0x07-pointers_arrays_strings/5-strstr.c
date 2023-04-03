#include "main.h"
/**
* _strstr - find the substring on main string
* @haystack: string to be searched
* @needle: substring to use for match
* Return: pointer to first occurrences
*/
char *_strstr(char *haystack, char *needle)
{
char *s1, *s2;

while (*haystack != NULL)
{
if(*haystack == *needle)
{
s1 = haystack;
s2 = needle;

while (*s1 && *s2)
{
if (*s1 != *s2)
break;

s1++;
s2++;

}
if (*s2 == NULL)
return haystack;
}
haystack++;
}
return NULL;
}
