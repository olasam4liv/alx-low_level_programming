#include "main.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: tring to count
* Return: string length
*/
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
