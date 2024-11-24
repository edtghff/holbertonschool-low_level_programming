#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}

/**
 * _strcpy - copies a string to the buffer
 * @dest: destination buffer
 * @src: source string
 * Return: destination buffer
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len_name = _strlen(name), len_owner = _strlen(owner);

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);

d->name = malloc(len_name + 1);
if (!d->name)
{
free(d);
return (NULL);
}
_strcpy(d->name, name);

d->owner = malloc(len_owner + 1);
if (!d->owner)
{
free(d->name);
free(d);
return (NULL);
}
_strcpy(d->owner, owner);

d->age = age;
return (d);
}

