#include "main.h"
/**
 * rev_string = reverse a string
 * Description: whats is required
 * @s: string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char m;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		m = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = m;
	}
}
