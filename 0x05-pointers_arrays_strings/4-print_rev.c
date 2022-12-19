#include "main.h"
#include <string.h>

/**
*print_rev - print a string in reverse
*@s: the string to be printed in rev
*/

void print_rev(char *s)
{
int i, n;
s = "hello"
n = strlen(s);
for (i = n - 1; i >= 0; i--)
{
_putchar(*s[i]);
}
}
