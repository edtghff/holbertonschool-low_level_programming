#include "main.h"
#include <math.h>

/**
 * sqrt - evaluating from 1 to n
 * @a: same as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1, otherwise -1
 */

int sqrt(int a, int b)
{

	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);

	return (sqrt(a, b + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * 
 * Return: sqrt function
 */

int _sqrt_recursion(int n)
{

	return (sqrt(n, 1));

}
