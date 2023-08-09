#include "shell.h"

/**
 * main -main function
 * @argc: number
 * @argv: array
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		interactive_shell_mode(argv[0]);
	}
	return (0);
}
