#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A progran to assign a random number to the variable n
 *
 * Return 0
 */

int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("%d "is positive\n", n)
	}
	
	else if (n < 0)
	{
		printf ("%d "is negative\n", n)
	 }
	else
	{
		printf ("%d "is zero\n", n)
	}
	/* your code goes there */
	return (0);
}
