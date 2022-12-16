#include "main.h"
/**
* _isdigit - chaeck if numbers are 0 - 9
* @c: char to check
* Return: returns 1 if uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
