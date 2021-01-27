#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char test[] = "HellO";
	char test2[] = "Hello";
	int result = ft_strncmp(test, test2, 4);
	int result2 = strncmp(test, test2, 4);
	printf("%d\n", result);
	printf("%d", result2);
	return (0);
}
