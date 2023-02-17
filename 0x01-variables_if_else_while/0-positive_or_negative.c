#include <stdio.h>

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
	/* your code goes there */
	return (0);
}
