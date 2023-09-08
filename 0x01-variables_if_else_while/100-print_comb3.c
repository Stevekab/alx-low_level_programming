#include <stdio.h>
/**
 * main - main
 *
 * Return: its 0
 */
int main(void)
{
	int firstD = 0, s;

	while (firstD <= 99)
	{
		(firstD = s);
		while (s <= 99)
		{
			if (s != firstD)
			{
				putchar((firstD / 10) + 48);
				putchar((firstD % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);

				if (firstD != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		firstD++;
	}
	putchar('\n');
	return (0);
}
