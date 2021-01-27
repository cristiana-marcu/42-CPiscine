#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char *mystring = "dsaajfnsfgbsDGRW";
	int result;
	result = ft_str_is_alpha(mystring);
	printf("%d", result);
}
