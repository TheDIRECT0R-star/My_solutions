#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
		int i = 0;

		while(s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = s2[i];
		return (s1);
}



int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}

