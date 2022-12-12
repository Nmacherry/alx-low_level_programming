#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all possible different combinations
 * of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, n, j;

	for (i = '0'; i < '9'; i++)
	{
		for (n = i + 1; n <= '9'; n++)
		{
			for (j = n + 1; j <= '9'; j++)
				{
					if ((n != i) != j)

					{
					putchar(i);
					putchar(n);
					putchar(j);
					if (i == '7' && n == '8')
						{
							continue;
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
}
