#include <stdio.h>
/**
 * main - main
 *
 * Return: its 0
 */
int main(void)
{
	int n = 0, s;

	while (n <= 99)
	{
		(n = s);
		while (s <= 99)
		{
			if (s != n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);

				if (n != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
