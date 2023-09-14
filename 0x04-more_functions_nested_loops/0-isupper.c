#include "main.h"
/**
 * _isupper - Check if the letter is upper
 * @x: The number to be tested
 * Return: 1 for upper letter result or 0 for lower case
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
