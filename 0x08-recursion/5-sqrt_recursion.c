#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - a function that return the natural
 * square root of a number
 * @n: input
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - checks if perfect square
 * @n: input
 * @i: counter
 * Return: always 0
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
