#include <stdio.h>


/**
 * main - is the main function
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
