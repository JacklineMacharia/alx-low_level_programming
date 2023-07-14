#include <stdio.h>
/*
 * main - the main function that prints the alphabet in lowercase followed by a new line
 *
 *
 * Return: always 0
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
