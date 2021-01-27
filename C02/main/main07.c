#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char test[] = "My horse IS AMAzing!";
	char *result = ft_strupcase(test);
	printf("%s", result);
}
