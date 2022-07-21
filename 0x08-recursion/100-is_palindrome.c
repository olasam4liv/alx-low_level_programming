#include "main.h"
int lengthc(char *s);
int palindrome(char str[], int st, int end);
/**
 * is_palindrome -entry point
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, len - 1));
}
/**
 * lengthc - find the lenth count
 * @s: input
 * Return: 0
 */
int lengthc(char *s)
{
	if (*s != '\0')
	{
		return (1 + lengthc(s + 1));
	}
	return (0);
}
/**
 * palindrom - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of sting from is_palindrom, from lengthc
 * Return: 0
 */
int palindrom(char str[], int st, int end)
{
	if (st >= end)
	{
		return (1);
	}
	if (str[st] != str[end])
	{
		return (0);
	}
	if (st <= end || st < end + 1)
	{
		return (palindrom(str, st + 1, end - 1));
	}
	return (1);
}
