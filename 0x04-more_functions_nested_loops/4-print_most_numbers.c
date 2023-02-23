#include "main.h"

/**
 * print_most_numbers - function
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 1; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
			_putchar(n + '0');
	}
	_putchar('\n');
}
