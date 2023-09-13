#include <stdio.h>
/**
 * print_to_98 - print all numbers from n - 98
 * @n: number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i > 98 ; i--)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	printf("98\n");
}
