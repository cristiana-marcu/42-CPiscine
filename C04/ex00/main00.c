#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char *test = "1234567890";
	int result = ft_strlen(test);
	printf("%d", result);
}
