#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char *mystring = "1234567";
	int result;
	result = ft_str_is_numeric(mystring);
	printf("%d", result);
}
