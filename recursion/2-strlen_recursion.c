#include "main.h"

/**
* _strlen_recursion - prints the length of a string
* @s: string
*
* Return: function
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}

_strlen_recursion(s + 1);

return (1 + _strlen_recursion(s + 1));

}

