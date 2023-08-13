#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a';  i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
