#include "main.h"
/**
* _abs - function that computes the absolute value of an integer
*
* @c: character
* Return: Always 0
*/
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;

return (abs_val);
}

return (c);
}

