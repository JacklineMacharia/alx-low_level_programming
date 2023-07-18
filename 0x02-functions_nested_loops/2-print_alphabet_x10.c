#include "main.h"

/**
 * main -  Function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{

	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= '2'; c++)
		{
			_putchar(c);
		}

			_putchar('\n');

			i++;
	}
}
