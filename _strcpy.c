#include "shell.h"
/**
 *_strcpy - copies a string to another buffer
 *@source: source to copy from
 *@dest: destination to copy to
 *
 * Return: void
 */

char *_strcpy(char *source, char *dest)
{
	int i = 0;

	for (; source[i] != '\0'; i++)
		dest[i] = source[i];
	return (dest);
}

