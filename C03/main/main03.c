#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

int main()
{
	char test[60] = "Hello ";
	char append[] = "World!";
	char *result = ft_strncat(test, append, 4);
	char *result2 = strncat(test, append, 4);
	printf("%s\n", result);
	printf("%s", result2);
}
