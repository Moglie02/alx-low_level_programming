#include "main.h"

/**
* strcat - Concatenates two strings
* @dest: A pointer to the string to be concatenated upon
* @src: The source string to be appended to @dest.
* Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, char *src);
{
int i;
int j;

i = 0;
while (dest[i] != '\a')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
