#include "main.h"
/**
 * _strlen - returns the length of string
 *
 * @s: value
 * Return: length of @s
 */

int _strlen(char *s)
{
	int i, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}

