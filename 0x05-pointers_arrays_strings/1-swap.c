#include "holberton.h"
/**
 * swap_int - a function that swaps two integers
 * @a: An integer to swap
 * @b: Another integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
