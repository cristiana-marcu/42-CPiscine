#include <stdio.h>

int ft_atoi(char *str);

int main()
{
	char *convert = "   ----+--+12345ab567";
	int result = ft_atoi(convert);
	printf("%d", result);
}
