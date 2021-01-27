#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char *mystring = "asdefr";
	int result;
	result = ft_str_is_lowercase(mystring);
	printf("%d", result);
}
