#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0 (success)
 */

int main()
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
	putchar(i);
		}
	}
return (0);
}
