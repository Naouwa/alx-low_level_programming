#include <stdio.h>

/**
 * main - print the size of various types besed on
 * the computer it is compiled and run on..
 * Return: Always 0 (success).
 */
int main(void)

{
	printf("Size of a char: %zu bute(s)\n", sizeof(char));
	printf("Size of an int: %zu bute(s)\n", sizeof(int));
	printf("Size of long int: %zu bute(s)\n", sizeof(long int));
	printf("Size of long long int: %zu bute(s)\n", sizeof(long long int));
	printf("Size of float: %zu bute(s)\n", sizeof(float));
	return (0);
}
