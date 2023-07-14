#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
/**
 * main - main function to determine whether the number is positive, negative
 *
 * Return: 0 on success
 */
int main(void)
{	int n;
	srand(time(0));
	n =  rand() -RAND_MAX / 2;
	/*my code*/
	if (n <0)
	{	printf("%d is %s\n", n, "negative");	}
	else if (n > 0)
	{	printf("%d is %s\n", n, "positive");	}
	else
	{	  printf("%d is %s\n", n, "zero");	}
	return (0);
}
