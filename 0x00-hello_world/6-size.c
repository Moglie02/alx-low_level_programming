#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of the char: 1 byte(s)\n", sizeof(char));
	printf("Size of the int: 4 byte(s)\n", sizeof(int));
	printf("Size of the long int: 8 byte(s)\n", sizeof(long int));
	printf("Size of the long long long: 8 byte(s)\n", sizeof(long long int));
	printf("Size of the float: 4 byte(s)\n", sizeof(float));
	return (0);
}
