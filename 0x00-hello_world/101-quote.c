#include <unistd.h>

/**
 * main - Entry point
 * author: Mohamed Adde
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
