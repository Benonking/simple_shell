#include "shell.h"
/**
 *_strcmp - compare two strings
 *@first: first string to be compared
 *@second: second string to be compared
 *
 * Return: difference of the two strings
 */

int _strcmp(char *first, char *second)
{
	int i = 0;

	while (*(first + i) == *(second + i) && *(first + i))
		i++;
	if (*(first + i))
		return (*(first + i) - *(second + i));
	else
		return (0);
}

