#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int a, b, c;

if (!s1)
s1 = "";
if (!s2)
s2 = "";

for (a = 0; s1[a]; a++)
;
for (b = 0; s2[b]; b++)
;

s = malloc((a + b + 1) * sizeof(char));
if (!s)
return (NULL);

for (c = 0; c < a; c++)
s[c] = s1[c];
for (c = 0; c < b; c++)
s[a + c] = s2[c];

s[a + b] = '\0';
return (s);
}

