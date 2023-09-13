#include<ctype.h>
/**
 * _isalpha - checks whether is alphanumeric
 * @c: interger argument
 * Return: void
 */
int _isalpha(int c)
{
	if(isdigit(c) || isupper(c) || islower(c))
		return (1);
	else
		return (0);
}
