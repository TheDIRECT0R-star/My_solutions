#include <unistd.h>

int main(int argc, char **argv)
{

	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			char c = argv[1][i];
			int repeat = 1;

			if (c >= 'a' && c <= 'z')
			{
				repeat = c - 'a' + 1;
			} else if (c >= 'A' &&  c <= 'Z')
			{
				repeat = c - 'A' + 1;
			}
			
			while (repeat--)
			{
				write(1, &c, 1);
			}
			i++;
		}

	}
	write(1, "\n", 1);
}
