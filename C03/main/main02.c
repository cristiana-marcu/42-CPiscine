#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char test[100] = "Hello ";
	char append[] = "World!";
	char *result = ft_strcat(test, append);
	char *result2 = strcat(test, append);
	printf("%s\n", result);
	printf("%s", result2);
}
