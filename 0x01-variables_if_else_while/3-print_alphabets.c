#include <stdlib.h>
#include <time.h>
#include<stdio.h>


/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Always (Success)
 */

int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
