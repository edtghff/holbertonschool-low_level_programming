#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to new memory
 * @str: the string to copy
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
    char *strcopy;
    int i;

    if (!str)
        return (NULL);

    for (i = 0; str[i]; i++)
        ;

    strcopy = malloc((i + 1) * sizeof(char));
    if (!strcopy)
        return (NULL);

    for (i = 0; str[i]; i++)
        strcopy[i] = str[i];
    strcopy[i] = '\0';

    return (strcopy);
}

