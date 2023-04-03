#include "main.h"
/**
* _memcpy - The _memcpy() function copies n bytes from memory area src to memory area dest
* @dest: destination to write
* @src: source to copy
* @n: number of byte
* Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int i;
  for(i = 0; i < n; i++)
    {
      *(dest + i) = *(src + i);
    }
  return (dest);
}
