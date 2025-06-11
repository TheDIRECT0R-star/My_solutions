#include <unistd.h>
#include <unistd.h>

int main()
{
	// 9 in aschii code is 57
	
	int len = 57;
	
	// and 0 in aschii code 
	while (len > 48)
	{
		write(1, &len, 1);
		len--;
	}

	return 0;
}
