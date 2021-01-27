#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char test[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";
	char *result = ft_strcapitalize(test);
	printf("%s", result);
}
