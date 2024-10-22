#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
char ch = '0' + i;
putchar(ch);
}

putchar('\n');

return (0);
}

