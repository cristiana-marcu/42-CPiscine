#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char *mystring = "ACVDEáÖ";
	int result;
	result = ft_str_is_printable(mystring);
	printf("%d", result);
}
