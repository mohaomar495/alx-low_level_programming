#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
*main - prints all arguments it recieves
*@argv: number of command line arguments
*@argc: Array name
*Return: if an integer isnot passed return 1, otherwise 0
*/

int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m]; m++)
		{
			if (argv[n][m] < 50 || argv[n][m] > 60)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n]);
	}

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", sum);

	return (0);
}
