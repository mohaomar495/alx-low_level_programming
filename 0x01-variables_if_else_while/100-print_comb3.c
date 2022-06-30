#include "stdio.h"
#include "stdlib.h"

/*
 * Numbers must be separated by , followed by space.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of two digits 0 and 1.
 * Print only the smallest combinations of the two digits.
 *Numbers should be printed in ascending order.
 * Main - main block.
 *Description: print all combinations of two digits.
*/

int main(void)
{

	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (m > n)
			{
				putchar(m);
				putchar(n);
			}
			putchar(44);
			putchar(32);
		}
	}

	return (0);
}
