#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 0;

	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}

	return 0;
}
