#include "main.h"

/**
* _isalpha - checks for char alphabet
* @c: The character in ASCII code
*
* Return: 1 if chr is letter lower or upper, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
