#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times
 * Return: if n is 0 or less, print \n
 */

void print_diagonal(int n)
{
int len, space;
if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
_putchar(' ');

_putchar('\\');

if (len == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
