#include "main.h"
#include "stdio.h"

/**
*main - prints all arguments it recieves
*@argv: number of command line arguments
*@argc: Array name
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
