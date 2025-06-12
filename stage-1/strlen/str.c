#include <stdio.h>

int ft_strlen(char *str)
{
	int len = 0;

	while(*str)
	{
		str++;
		len++;
	}
	return len;
}

int main (void)
{
	char str[] = "Flavio";

	printf("%d\n", ft_strlen(str));
	return (0);
}

