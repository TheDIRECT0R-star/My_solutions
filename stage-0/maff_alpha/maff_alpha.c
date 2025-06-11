#include <unistd.h>

int main()
{
	char n = 'a';	
	int len = 1;
	
	char illusion = 0;
	while(n <= 'z')
	{
		if (len % 2 != 0)
		{
			write(1, &n, 1);
		} else 
		{
			illusion = n - 32;
			write(1, &illusion, 1);
		}

		n++;
		len++;
	}
	write(1, "\n", 1);
}
