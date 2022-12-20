#include "main.h"
/**
 * puts_half - half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int aj = 0;
	int bk;

	while (str[aj] != '\0')
	{
		aj++;
	}

	if (aj % 2 == 1)
	{
		bk = (aj - 1) / 2;
		bk += 1;
	}
	else
	{
		bk = aj / 2;
	}

	for (; bk < aj; bk++)
	{
		_putchar(str[bk]);
	}

	_putchar('\n');
}

