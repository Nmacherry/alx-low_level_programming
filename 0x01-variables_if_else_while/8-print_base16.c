#include <stdio.h>
/**
 * main - main.block
 * Return: 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');
	return (0);
}
