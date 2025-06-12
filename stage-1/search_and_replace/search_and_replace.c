#include <unistd.h>

int main(int argc , char **argv)
{
	// we need 3 arguments after the filename
	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	
	// the second argument and the third should be a string one character
	if (argv[2][1] != '\0' && argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return 0;
	}

	// find and replace
	int i = 0;

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
