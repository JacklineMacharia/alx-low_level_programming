#include "main.h"


/**
 * main - Prints the function that prints the alphabet, in lowercase, followed by a new line.
 * 
 * Return: Always is void.
 */



void print_alphabet(void)
{
	char c;
	for (c = 'a'; c<= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
