#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
*main - prints all arguments it recieves
*@argv: number of command line arguments
*@argc: Array name
*Return: 0
*/

int main(int argc, char *argv[])
{
	int m, n;

	if (argc  == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = 1;

		for (n = 1; n < 3; n++)
		m *= atoi(argv[n]);

		printf("%d\n", m);
	}
	return (0);
}
