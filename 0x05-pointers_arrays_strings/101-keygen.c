#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random passwords for 101-crackme
 * @c: variable
 * Return: Always return a result
 */

int main(void)
{
	int r = 0;

	int c = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
		break;
		c = c + r;
		printf("%c", r);
	
	}

	int res = 2772 - c;
	printf("%\n", res);
	return (0);
}
