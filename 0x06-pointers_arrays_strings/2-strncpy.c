#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the string
 * @scr: pointer source
 * @n: integer
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
