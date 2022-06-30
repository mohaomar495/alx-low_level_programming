#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * Combination of numbers must be separated by a comma followed by a space.
 * Combinations of numbers should be printed in ascending order.
 * `00 01` and `01 00` are considered as the same combination.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 8 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = 0; m < 100; m++)
		{
			if (m > n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(',');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
