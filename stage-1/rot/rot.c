#include <unistd.h>

int my_rot(char c)
{
	if (c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
	{
		c += 13;
	} else if ( c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z' )
	{
		c -= 13;
	}
	return (c);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 0;
	char c ;
	while (argv[1][i])
	{
	 	c = my_rot(argv[1][i]);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}


