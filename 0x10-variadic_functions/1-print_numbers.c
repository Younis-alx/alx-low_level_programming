#include "variadic_functions.h"
/**
* print_numbers - print numbers follow by \n
* @separator: string to printed between numbers
* @n: number of int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list charPtr;

if (separator == NULL)
return;

va_start(charPtr, n);

for (i = 0; i < n; i++)
i == n - 1 ? printf("%d ", va_arg(charPtr, int)) :
printf("%d%c ", va_arg(charPtr, int), *separator);
printf("\n");
va_end(charPtr);

}
