#include "main.h"

/**
 * main - Prints the function that checks for alphabetic character
 * @c: integer to be checked
 * Return: Returns 1 if c is a letter, lowercase or uppercase else 0.
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
