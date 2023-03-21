#include "main.h"
/**
islower - check if char is lowercase
Return: 0 if false 1 if ture
*/
int _islower(int c)
{
int isLower;
if (_putchar(c) <= _putchar(122) || _putchar(c) >= _putchar(97))
isLower = 1;
else
isLower = 0;
return isLower;
}
