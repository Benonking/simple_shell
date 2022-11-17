#include "shell.h"

/**
 * main - create simple shell
 * @argc: number of arguments passed
 * @argv: program arguments to be parsed
 * @env: string passed to the shell
 *
 * applies the functions in utils and helpers
 * implements EOF
 * Prints error on Failure
 * Return: 0 on success
 */


int main(int argc, char **argv, char **env)
{
	(void)argc;
	(void)argv;
	prompt(env);
	return (0);
}
