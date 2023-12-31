#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (j == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
