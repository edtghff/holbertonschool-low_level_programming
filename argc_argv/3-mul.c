#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result or 1 if error
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
{
	printf("Error\n");
	return (1);
}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

