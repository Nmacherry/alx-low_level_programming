#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, n, j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 54; n++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)

					{
					putchar(i);
					putchar(n);
					putchar(j);
					if (i == 55 && n == 56 && j == 57)
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
