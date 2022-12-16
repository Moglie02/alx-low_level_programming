#include <stdio.h>
/**
* main - prints Buzz each numbers of 3 and 5.
*
* Return: void
*/
int main(void)
{
int p = 100;
int i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
}

else if (i % 3 == 0)
{
printf("Fizz");
}

else if (i % 5 == 0)
{
printf("Buzz");
}
else
printf("Buzz", n);
}

else
{
printf("%i", i);
}
i++;

}
printf("\n");
return (0);
}
