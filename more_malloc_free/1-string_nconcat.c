#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0;

if (s1 != NULL)
len1 = strlen(s1);
if (s2 != NULL)
len2 = strlen(s2);

if (n >= len2)
n = len2;

concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';

return (concat);
}

