#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
