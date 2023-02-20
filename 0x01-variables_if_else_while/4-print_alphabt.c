#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0
 */

int main(void)
{
	char alp;

	alp = 'a';

	while (alp <= z)
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
