I#include <stdio.h>

void print_alphabet_x10(void);
{
	int i, alphabet;

	for(i = 1; i <= 10; i++)
	{
		for(i = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * Return: Always 0(Success)
 */
}
