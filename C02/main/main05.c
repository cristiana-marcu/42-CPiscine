#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char *mystring = "ACVDRF456GBCF";
	int result;
	result = ft_str_is_uppercase(mystring);
	printf("%d", result);
}
