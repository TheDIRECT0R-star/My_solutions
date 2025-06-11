#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// checking if numbers of arguments is not 1
	// the first arugement is always the name of program it self
	
	if (argc != 2)
	{
		write(1, "a", 1);
		exit(1);
	}
	
	if (argc == 1)
	{
		write(1, "a", 1);
		exit(0);
	}

	int i = 0;

	while(argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a", 1);
			exit(1);
		} else {
			exit(0);		
		}
		i++
			;
	}
	return 0;
}
