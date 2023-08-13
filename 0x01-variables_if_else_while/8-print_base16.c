#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (!(i > 57 && i < 97))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
