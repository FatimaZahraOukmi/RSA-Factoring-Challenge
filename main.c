#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int factorize(char *buffer);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (1);
	}

	factorize(argv[1]);

	return (0);
}
