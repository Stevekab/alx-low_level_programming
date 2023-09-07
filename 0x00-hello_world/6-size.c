#include <stdio.h>
/**
 * main - is the main function
 *
 * Return: always 0 (sucess)
 */
int main(void)
{	
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
