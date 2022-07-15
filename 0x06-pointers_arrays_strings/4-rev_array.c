#include "main.h"

/**
 * reverse_array - a function that reverse the content of any array integer
 * @a: content
 * @n: elemment of content
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
