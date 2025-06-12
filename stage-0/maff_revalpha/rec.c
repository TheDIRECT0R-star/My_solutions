#include <unistd.h>


int main ()
{
	char c = 'z';
	int i = 1;
	
	char position = 0;
	while(c >= 'a')
	{
		if (i % 2 != 0)
		{
			write(1, &c, 1);
		} else {
			position = c - 32;
			write(1, &position, 1);
		}
		i++;
		c--;
	}

	write(1, "\n", 1);
	return 0;
}




