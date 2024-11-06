#include "holberton.h"
/**
 * _memset - sets memory to array
 * @s: array
 * @b: value
 * @n: n
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

