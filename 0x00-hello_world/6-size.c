#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of the char: %lu byte(s)\n", sizeof(char));
	printf("Size of the int: %lu byte(s)\n", sizeof(int));
	printf("Size of the long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of the long long long: %lu byte(s)\n", sizeof(long long int));
	printf("Size of the float: %lu byte(s)\n", sizeof(float));
	return (0);
}
