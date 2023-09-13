#include <ctype.h>
/**
 * _islower - checks if char is uppercase
 * @c: character to check
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
