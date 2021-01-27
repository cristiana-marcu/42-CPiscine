#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char test[] = "MY horsE Is AMazing!";
	char *result = ft_strlowcase(test);
	printf("%s", result);
}
