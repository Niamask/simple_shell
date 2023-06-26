#include "shell.h"

/**
 * print_number - Print Unsigned Int Putchar
 * @n: Unisigned Integer
 *
 * Return: Void
 */
void print_number(unsigned int n)
{
	unsigned int y = n;

	if ((y / 10) > 0)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}

/**
 * print_number_in - Print Number Putchar
 * @n:Integer
 *
 * Return: void
 */
void print_number_in(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -y;
	}
	if ((y / 10) > 0)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}

/**
 *  _prerror - Print Custome Error
 * @argv:Program Name
 * @c:Error Count
 * @cmd:Command
 *
 * Return: Void
 */
void _prerror(char **argv, int c, char **cmd)
{
	char *error = _itoa(c);

	PRINTER(argv[0]);
	PRINTER(": ");
	PRINTER(error);
	PRINTER(": ");
	PRINTER(cmd[0]);
	PRINTER(": Illegal number: ");
	PRINTER(cmd[1]);
	PRINTER("\n");
	free(error);
}

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	PRINTER("$ ");
}

/**
 * print_error - Display Error Based on Command and How Many Time Shell Looped
 * @input:User Input
 * @counter:Simple Shell Count Loop
 * @argv:Program Name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *error;

	PRINTER(argv[0]);
	PRINTER(": ");
	error = _itoa(counter);
	PRINTER(error);
	free(error);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}
