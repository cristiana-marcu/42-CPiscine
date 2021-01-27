#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char *string = "code";
	int length;

	length = ft_strlen(string);
	printf("%d", length);
	return (0);
}
