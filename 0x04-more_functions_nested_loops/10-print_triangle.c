#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int i, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (y = size - i; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= i; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
