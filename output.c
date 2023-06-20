#include "shell.h"
/**
 *  _prerror_func - Print Custome Error
 * @argv:Program Name
 * @c:Error Count
 * @cmd:Command
 *
 * Return: Void
 */
void _prerror_func(char **argv, int c, char **cmd)
{
	char *er = _itoa(c);

	PRINTER(argv[0]);
	PRINTER(": ");
	PRINTER(er);
	PRINTER(": ");
	PRINTER(cmd[0]);
	PRINTER(": Illegal number: ");
	PRINTER(cmd[1]);
	PRINTER("\n");
	free(er);
}
