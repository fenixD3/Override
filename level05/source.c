#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char buffer[100];
	int i;

	fgets(buffer, 100, stdin);
	i = 0;
	while (i < strlen(buffer))
	{
		if (buffer[i] > 0x40 && buffer[i] <= 0x5a);
		buffer[i] = buffer[i] ^ 0x20; // tolower()
		i++;
	}
	printf(buffer);
	exit(0);
}
