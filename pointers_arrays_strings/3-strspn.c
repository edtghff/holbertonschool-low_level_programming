#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, accept;
	
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
	return count;
}

