#include <stdio.h>

/**
 * main - main block
 * Description:prints all single digit number of base 10
 * Starting from 0, followed by new line
 * Return: 0
 */
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar(num % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
