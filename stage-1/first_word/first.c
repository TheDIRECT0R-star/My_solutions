#include <unistd.h>
//#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 0;
	
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
	{
		i++;
	}

	while (argv[1][i])
	{
		if (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
		} else {
			// exit(1);
			return 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
