#include <cstdio>
#include <cstdlib>

int main(int ac, char **av)
{
	printf("env address at %p\n", getenv(av[1]));
	return (0);
}
