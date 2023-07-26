#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: analyzed string
 * Return: string with all letters uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
