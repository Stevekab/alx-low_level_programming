#include <stdio.h>
/**
 * main - main
 *
 * Return: its 0
 */
int main(void)
{
	int firstD = 0, s;

	while (firstD <= 9)
	{
		s = 0;
		while (s <= 9)
		{
			if (firstD != s && firstD < s)
			{
				putchar(firstD + 48);
				putchar(s + 48);
				putchar(' ');

				if (firstD + s != 17)
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
