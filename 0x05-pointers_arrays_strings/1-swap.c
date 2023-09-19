#include "main.h"
/**
 * swap_int - swap two integers
 * @n: value 1
 * @m: value 2
 * Return: void
 */
void swap_int(int *n, int *m)
{
	int c;

	c = *n;
	*n = *m;
	*m = c;
}
