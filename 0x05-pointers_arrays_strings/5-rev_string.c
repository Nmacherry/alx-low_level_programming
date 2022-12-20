#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int a;
	int b;
	int temp, length;

	while (s[a] != 0)
	{
		a++;
	}

	length = a;
	a = 0;
	b = length - 1;

	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}

