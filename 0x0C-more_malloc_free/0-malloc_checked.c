#include "main.h"
/**
* malloc_checked - function that allocates memory
* @b: bytes of memory
*/
void *malloc_checked(unsigned int b)
{

void *Pblock;

Pblock = malloc(b);

if (Pblock == NULL)
return (98);

return (Pblock);
}

