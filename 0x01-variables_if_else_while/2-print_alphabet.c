#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: always success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
