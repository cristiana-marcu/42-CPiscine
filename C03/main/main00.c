#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char test1[] = "Hello";
	char test2[] = "hello";
	int result = ft_strcmp(test1, test2);
	int result2 = strcmp(test1, test2);
	printf("%d\n", result);
	printf("%d", result2);
}
