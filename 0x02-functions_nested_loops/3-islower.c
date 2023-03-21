#include "main.h"
/**
* islower - check if char is lowercase
* @c: char
*
* Description: function will use ASCII values to check range
* the values will use base 10 and get run through logical opterator
* and (&&) will need both side to be true to output 1
* Return: 0 if false 1 if ture
*/
int _islower(int c)
{
return (c >= 97 && c <= 122);
}
