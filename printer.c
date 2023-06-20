#include "shell.h"

/**
 * print_number_func -Print Unsigned Int Putchar
 * @n: Unisigned Integer
 *
 * Return: Void
 */
void print_number_func(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		print_number_func(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * print_number_in_func -Print Number Putchar
 * @n:Integer
 *
 * Return: void
 */
void print_number_in_func(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number_func(x / 10);

	_putchar(x % 10 + '0');
}
