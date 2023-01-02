#include <stdio.h>
#include "main.h"

/**
* strcat - Concatenates two strings
* @dest: A pointer to the string to be concatenated upon
* @src: The source string to be appended to @dest.
* Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, char *src);
{
int length, j;

length = 0;

while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
