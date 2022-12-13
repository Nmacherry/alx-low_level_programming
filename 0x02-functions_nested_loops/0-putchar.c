#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char x[] = "-putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	-putchar(x[i]);
	}
	-putchar('\n');
	return (0);
}
