#include <stdio.h>

/**
 * main - function that prints the name of the file it was compiled from
 *
 * Return: zero 0 (success)
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
