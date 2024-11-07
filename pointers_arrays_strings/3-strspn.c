#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: checks if found in accept
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;
	int accept;

	for (i = 0; s[i] != '\0'; i++)
	{
		accept = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			accept = 1;
			break;
		}

		if (accept)
		{
			count++;
		} else
		{
			break;
		}
	}

	return (count);
}

