#include <stdio.h>
/**
 * main - main.block
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char l;

	for (n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
