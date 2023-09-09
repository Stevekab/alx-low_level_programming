#include <stdio.h>
/**
 * main - main
 *
 * Return: its 0
 */
int main(void)
{
	int firstD = 0, secondD;

	while (firstD <= 9)
	{
		secondD = 0;
		while (secondD <= 9)
		{
			if (firstD != secondD && firstD < secondD)
			{
				putchar(firstD + 48);
				putchar(secondD + 48);

				if (firstD + secondD != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondD++;
		}
		firstD++;
	}
	putchar('\n');
	return (0);
}
